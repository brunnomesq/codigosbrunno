#include "roundinfofetcher.h"
#include <QNetworkAccessManager>
#include <QNetworkRequest>
#include <QNetworkReply>
#include <QJsonDocument>
#include <QJsonArray>
#include <QJsonObject>
#include <QEventLoop>
#include <QDebug>

RoundInfoFetcher::RoundInfoFetcher(QObject *parent) : QObject(parent), currentApiKeyIndex(0)
{
    apiKeys << "c8261d84e7msh500e8802397c102p1c7709jsn44996d96d185" << //gtaclipesbr
               "014e6ef431mshe18e0267b58fa95p151296jsn96547f31b8e8" << //cachorrobug
               "74c8728eecmsh14c97ff9ffc4124p1b804djsnd5dcb4935c3c" << //brunnopmesquita

               "d4d87fe8f7msh9205988ad621d90p12577bjsn3a7f2eb090e5" << //hiperpig
               "2ac9024016msh7d2e2a12093bc7fp1bed54jsn17a9222cf4e1" << //animaismematamderir
               "3515df8e7dmshfd9b9ddf682dcedp1faccajsn293902eb6386" << //todososdiassalmos
               "bc92a73f4bmsh6632815b3d22e6fp1e44d6jsnfce6003dbb6b" << //truetruthinc
               "fba894364bmsh663927b2dca0250p1f5e56jsn07ee66629fb8" ; //brunnopmesqt
}


void RoundInfoFetcher::fetchRoundInfo(QString league,QString season_id)
{
    qDebug() << "Iniciando busca de informações da rodada para" << league << "na temporada" << season_id;

    QString liga_id = "";
    if (league == "Premier League") {
        liga_id = "17";
    } else if (league == "Brasileirao Serie B") {
        liga_id = "390";
    }else if (league == "Brasileirao Serie A") {
        liga_id = "325";
    }

    fetchFootApiRoundInfoL(liga_id,season_id);
}
void RoundInfoFetcher::fetchFootApiRoundInfoL(QString liga_id, QString season_id)
{
    //QStringList rodadas; // Lista para armazenar as informações das rodadas

    // Loop para lidar com múltiplas páginas de resultados
    int page = 0;
    bool hasNextPage = true; // Variável para controlar a existência de páginas
    while (hasNextPage) {
        // Crie um objeto QNetworkAccessManager
        QNetworkAccessManager *manager = new QNetworkAccessManager(this);

        // Crie uma solicitação HTTP para obter as informações das partidas na página atual
        QNetworkRequest request;
        request.setUrl(QUrl("https://footapi7.p.rapidapi.com/api/tournament/" + liga_id + "/season/" + season_id + "/matches/last/" + QString::number(page)));
        request.setRawHeader("X-RapidAPI-Key", apiKeys[currentApiKeyIndex].toUtf8());
        request.setRawHeader("X-RapidAPI-Host", "footapi7.p.rapidapi.com");

        // Faça a solicitação HTTP
        QNetworkReply *reply = manager->get(request);

        // Crie um loop de eventos para esperar pela resposta
        QEventLoop loop;
        connect(reply, &QNetworkReply::finished, &loop, &QEventLoop::quit);
        loop.exec();

        // Processar a resposta depois que a solicitação for concluída
        if (reply->error() == QNetworkReply::NoError) {
            // Leia a resposta
            QByteArray responseData = reply->readAll();

            // Parse da resposta JSON
            QJsonDocument jsonDocument = QJsonDocument::fromJson(responseData);
            QJsonObject jsonObject = jsonDocument.object();
            QJsonArray eventsArray = jsonObject.value("events").toArray();

            // Extrair informações das partidas e agrupar por rodada
            for (const QJsonValue& eventValue : eventsArray) {

                QJsonObject eventObject = eventValue.toObject();
                QJsonObject roundInfoObject = eventObject.value("roundInfo").toObject();
                int roundNumber = roundInfoObject.value("round").toInt();
                QJsonObject homeTeamObject = eventObject.value("homeTeam").toObject();
                QJsonObject awayTeamObject = eventObject.value("awayTeam").toObject();
                QJsonObject homeScoreObject= eventObject.value("homeScore").toObject();
                QJsonObject awayScoreObject= eventObject.value("awayScore").toObject();
                QString homeTeamName = homeTeamObject.value("name").toString();
                QString awayTeamName = awayTeamObject.value("name").toString();
                int homeScore=homeScoreObject.value("current").toInt();
                int awayScore=awayScoreObject.value("current").toInt();
                QString roundInfo = "Rodada " + QString::number(roundNumber) + ": " + homeTeamName +" "+QString::number(homeScore)+ " X " +QString::number(awayScore)+" "+ awayTeamName;
                rodadas.append(roundInfo);
                round.append(QString::number(roundNumber));
            }

            // Verifique se há próxima página
            hasNextPage = jsonObject.value("hasNextPage").toBool();
        } else {
            // Verifique se o código de status HTTP é 429, indicando "Too Many Requests"
            int httpStatusCode = reply->attribute(QNetworkRequest::HttpStatusCodeAttribute).toInt();
                        if (httpStatusCode == 429) {
                            // Limite de taxa atingido. Troque para a próxima chave API.
                            currentApiKeyIndex = (currentApiKeyIndex + 1) % apiKeys.size();
                            qDebug() << "Limite de taxa atingido. Trocando para a próxima chave API.";
                        } else if (reply->error() == QNetworkReply::AuthenticationRequiredError) {
                            // Troque para a próxima chave API
                            currentApiKeyIndex = (currentApiKeyIndex + 1) % apiKeys.size();
                            // Verifique se todas as chaves foram tentadas
                            if (currentApiKeyIndex == 0) {
                                // Se todas as chaves foram tentadas e o erro persiste, notifique o usuário ou lance um erro
                                qDebug() << "Todas as chaves API foram usadas. Limite diário atingido.";
                                // Aqui você pode emitir um sinal para notificar a interface do usuário
                                emit apiLimitReached();
                                return;
                            }
                        } else {
                // Em caso de outro tipo de erro, exiba uma mensagem de erro
                qDebug() << "Erro:" << reply->errorString();
            }
        }

        // Limpeza
        reply->deleteLater();
        manager->deleteLater();

        // Avance para a próxima página
        page++;
    }

    // Emita o sinal com as informações das rodadas
    fetchFootApiRoundInfoN(liga_id,season_id);
}
void RoundInfoFetcher::fetchFootApiRoundInfoN(QString liga_id, QString season_id)
{
    //QStringList rodadas; // Lista para armazenar as informações das rodadas

    // Loop para lidar com múltiplas páginas de resultados
    int page = 0;
    bool hasNextPage = true; // Variável para controlar a existência de páginas
    while (hasNextPage) {
        // Crie um objeto QNetworkAccessManager
        QNetworkAccessManager *manager = new QNetworkAccessManager(this);

        // Crie uma solicitação HTTP para obter as informações das partidas na página atual
        QNetworkRequest request;
        request.setUrl(QUrl("https://footapi7.p.rapidapi.com/api/tournament/" + liga_id + "/season/" + season_id + "/matches/next/" + QString::number(page)));
        request.setRawHeader("X-RapidAPI-Key", apiKeys[currentApiKeyIndex].toUtf8());
        request.setRawHeader("X-RapidAPI-Host", "footapi7.p.rapidapi.com");

        // Faça a solicitação HTTP
        QNetworkReply *reply = manager->get(request);

        // Crie um loop de eventos para esperar pela resposta
        QEventLoop loop;
        connect(reply, &QNetworkReply::finished, &loop, &QEventLoop::quit);
        loop.exec();

        // Processar a resposta depois que a solicitação for concluída
        if (reply->error() == QNetworkReply::NoError) {
            // Leia a resposta
            QByteArray responseData = reply->readAll();

            // Parse da resposta JSON
            QJsonDocument jsonDocument = QJsonDocument::fromJson(responseData);
            QJsonObject jsonObject = jsonDocument.object();
            QJsonArray eventsArray = jsonObject.value("events").toArray();

            // Extrair informações das partidas e agrupar por rodada
            for (const QJsonValue& eventValue : eventsArray) {
                QJsonObject eventObject = eventValue.toObject();
                QJsonObject roundInfoObject = eventObject.value("roundInfo").toObject();
                int roundNumber = roundInfoObject.value("round").toInt();
                QJsonObject homeTeamObject = eventObject.value("homeTeam").toObject();
                QJsonObject awayTeamObject = eventObject.value("awayTeam").toObject();
                QString homeTeamName = homeTeamObject.value("name").toString();
                QString awayTeamName = awayTeamObject.value("name").toString();
                QString roundInfo = "Rodada " + QString::number(roundNumber) + ": " + homeTeamName + " X " + awayTeamName;
                rodadas.append(roundInfo);
                round.append(QString::number(roundNumber));
            }

            // Verifique se há próxima página
            hasNextPage = jsonObject.value("hasNextPage").toBool();
        } else {
            // Verifique se o código de status HTTP é 429, indicando "Too Many Requests"
            int httpStatusCode = reply->attribute(QNetworkRequest::HttpStatusCodeAttribute).toInt();
                        if (httpStatusCode == 429) {
                            // Limite de taxa atingido. Troque para a próxima chave API.
                            currentApiKeyIndex = (currentApiKeyIndex + 1) % apiKeys.size();
                            qDebug() << "Limite de taxa atingido. Trocando para a próxima chave API.";
                        } else if (reply->error() == QNetworkReply::AuthenticationRequiredError) {
                            // Troque para a próxima chave API
                            currentApiKeyIndex = (currentApiKeyIndex + 1) % apiKeys.size();
                            // Verifique se todas as chaves foram tentadas
                            if (currentApiKeyIndex == 0) {
                                // Se todas as chaves foram tentadas e o erro persiste, notifique o usuário ou lance um erro
                                qDebug() << "Todas as chaves API foram usadas. Limite diário atingido.";
                                // Aqui você pode emitir um sinal para notificar a interface do usuário
                                emit apiLimitReached();
                                return;
                            }
                        } else {
                // Em caso de outro tipo de erro, exiba uma mensagem de erro
                qDebug() << "Erro:" << reply->errorString();
            }
        }

        // Limpeza
        reply->deleteLater();
        manager->deleteLater();

        // Avance para a próxima página
        page++;
    }
   /* QStringList rodadasP=*rodadas;
    QStringList roundP=*round;
    delete rodadas;
    delete round;*/
    // Emita o sinal com as informações das rodadas
    emit roundInfoFetched(rodadas,round);
}

void RoundInfoFetcher::fetchAllSportsApiRoundInfoL(QString liga_id, QString season_id)
{
    //QStringList rodadas; // Lista para armazenar as informações das rodadas

    // Loop para lidar com múltiplas páginas de resultados
    int page = 0;
    bool hasNextPage = true; // Variável para controlar a existência de páginas
    while (hasNextPage) {
        // Crie um objeto QNetworkAccessManager
        QNetworkAccessManager *manager = new QNetworkAccessManager(this);

        // Crie uma solicitação HTTP para obter as informações das partidas na página atual
        QNetworkRequest request;
        request.setUrl(QUrl("https://allsportsapi2.p.rapidapi.com/api/tournament/"+liga_id+"/season/"+season_id+"/matches/last/"+QString::number(page)));
        request.setRawHeader("X-RapidAPI-Key", apiKeys[currentApiKeyIndex].toUtf8());
        request.setRawHeader("X-RapidAPI-Host", "allsportsapi2.p.rapidapi.com");

        // Faça a solicitação HTTP
        QNetworkReply *reply = manager->get(request);

        // Crie um loop de eventos para esperar pela resposta
        QEventLoop loop;
        connect(reply, &QNetworkReply::finished, &loop, &QEventLoop::quit);
        loop.exec();

        // Processar a resposta depois que a solicitação for concluída
        if (reply->error() == QNetworkReply::NoError) {
            // Leia a resposta
            QByteArray responseData = reply->readAll();

            // Parse da resposta JSON
            QJsonDocument jsonDocument = QJsonDocument::fromJson(responseData);
            QJsonObject jsonObject = jsonDocument.object();
            QJsonArray eventsArray = jsonObject.value("events").toArray();

            // Extrair informações das partidas e agrupar por rodada
            for (const QJsonValue& eventValue : eventsArray) {

                QJsonObject eventObject = eventValue.toObject();
                QJsonObject roundInfoObject = eventObject.value("roundInfo").toObject();
                int roundNumber = roundInfoObject.value("round").toInt();
                QJsonObject homeTeamObject = eventObject.value("homeTeam").toObject();
                QJsonObject awayTeamObject = eventObject.value("awayTeam").toObject();
                QJsonObject homeScoreObject= eventObject.value("homeScore").toObject();
                QJsonObject awayScoreObject= eventObject.value("awayScore").toObject();
                QString homeTeamName = homeTeamObject.value("name").toString();
                QString awayTeamName = awayTeamObject.value("name").toString();
                int homeScore=homeScoreObject.value("current").toInt();
                int awayScore=awayScoreObject.value("current").toInt();
                QString roundInfo = "Rodada " + QString::number(roundNumber) + ": " + homeTeamName +" "+QString::number(homeScore)+ " X " +QString::number(awayScore)+" "+ awayTeamName;
                rodadas.append(roundInfo);
                round.append(QString::number(roundNumber));
            }

            // Verifique se há próxima página
            hasNextPage = jsonObject.value("hasNextPage").toBool();
        } else {
            // Verifique se o código de status HTTP é 429, indicando "Too Many Requests"
            int httpStatusCode = reply->attribute(QNetworkRequest::HttpStatusCodeAttribute).toInt();
                        if (httpStatusCode == 429) {
                            // Limite de taxa atingido. Troque para a próxima chave API.
                            currentApiKeyIndex = (currentApiKeyIndex + 1) % apiKeys.size();
                            qDebug() << "Limite de taxa atingido. Trocando para a próxima chave API.";
                        } else if (reply->error() == QNetworkReply::AuthenticationRequiredError) {
                            // Troque para a próxima chave API
                            currentApiKeyIndex = (currentApiKeyIndex + 1) % apiKeys.size();
                            // Verifique se todas as chaves foram tentadas
                            if (currentApiKeyIndex == 0) {
                                // Se todas as chaves foram tentadas e o erro persiste, notifique o usuário ou lance um erro
                                qDebug() << "Todas as chaves API foram usadas. Limite diário atingido.";
                                // Aqui você pode emitir um sinal para notificar a interface do usuário
                                emit apiLimitReached();
                                return;
                            }
                        } else {
                // Em caso de outro tipo de erro, exiba uma mensagem de erro
                qDebug() << "Erro:" << reply->errorString();
            }
        }

        // Limpeza
        reply->deleteLater();
        manager->deleteLater();

        // Avance para a próxima página
        page++;
    }

    // Emita o sinal com as informações das rodadas
    //emit roundInfoFetched(*rodadas,*round);
}
void RoundInfoFetcher::fetchAllSportsApiRoundInfoN(QString liga_id, QString season_id)
{
    //QStringList rodadas; // Lista para armazenar as informações das rodadas

    // Loop para lidar com múltiplas páginas de resultados
    int page = 0;
    bool hasNextPage = true; // Variável para controlar a existência de páginas
    while (hasNextPage) {
        // Crie um objeto QNetworkAccessManager
        QNetworkAccessManager *manager = new QNetworkAccessManager(this);

        // Crie uma solicitação HTTP para obter as informações das partidas na página atual
        QNetworkRequest request;
        //request.setUrl(QUrl("https://footapi7.p.rapidapi.com/api/tournament/" + liga_id + "/season/" + season_id + "/matches/next/" + QString::number(page)));
        request.setUrl(QUrl("https://allsportsapi2.p.rapidapi.com/api/tournament/"+liga_id+"/season/"+season_id+"/matches/next/"+QString::number(page)));
        request.setRawHeader("X-RapidAPI-Key", apiKeys[currentApiKeyIndex].toUtf8());
        request.setRawHeader("X-RapidAPI-Host", "allsportsapi2.p.rapidapi.com");

        // Faça a solicitação HTTP
        QNetworkReply *reply = manager->get(request);

        // Crie um loop de eventos para esperar pela resposta
        QEventLoop loop;
        connect(reply, &QNetworkReply::finished, &loop, &QEventLoop::quit);
        loop.exec();

        // Processar a resposta depois que a solicitação for concluída
        if (reply->error() == QNetworkReply::NoError) {
            // Leia a resposta
            QByteArray responseData = reply->readAll();

            // Parse da resposta JSON
            QJsonDocument jsonDocument = QJsonDocument::fromJson(responseData);
            QJsonObject jsonObject = jsonDocument.object();
            QJsonArray eventsArray = jsonObject.value("events").toArray();

            // Extrair informações das partidas e agrupar por rodada
            for (const QJsonValue& eventValue : eventsArray) {

                QJsonObject eventObject = eventValue.toObject();
                QJsonObject roundInfoObject = eventObject.value("roundInfo").toObject();
                int roundNumber = roundInfoObject.value("round").toInt();
                QJsonObject homeTeamObject = eventObject.value("homeTeam").toObject();
                QJsonObject awayTeamObject = eventObject.value("awayTeam").toObject();
                QString homeTeamName = homeTeamObject.value("name").toString();
                QString awayTeamName = awayTeamObject.value("name").toString();
                QString roundInfo = "Rodada " + QString::number(roundNumber) + ": " + homeTeamName + " X " + awayTeamName;
                rodadas.append(roundInfo);
                round.append(QString::number(roundNumber));
            }

            // Verifique se há próxima página
            hasNextPage = jsonObject.value("hasNextPage").toBool();
        } else {
            // Verifique se o código de status HTTP é 429, indicando "Too Many Requests"
            int httpStatusCode = reply->attribute(QNetworkRequest::HttpStatusCodeAttribute).toInt();
                        if (httpStatusCode == 429) {
                            // Limite de taxa atingido. Troque para a próxima chave API.
                            currentApiKeyIndex = (currentApiKeyIndex + 1) % apiKeys.size();
                            qDebug() << "Limite de taxa atingido. Trocando para a próxima chave API.";
                        } else if (reply->error() == QNetworkReply::AuthenticationRequiredError) {
                            // Troque para a próxima chave API
                            currentApiKeyIndex = (currentApiKeyIndex + 1) % apiKeys.size();
                            // Verifique se todas as chaves foram tentadas
                            if (currentApiKeyIndex == 0) {
                                // Se todas as chaves foram tentadas e o erro persiste, notifique o usuário ou lance um erro
                                qDebug() << "Todas as chaves API foram usadas. Limite diário atingido.";
                                // Aqui você pode emitir um sinal para notificar a interface do usuário
                                emit apiLimitReached();
                                return;
                            }
                        } else {
                // Em caso de outro tipo de erro, exiba uma mensagem de erro
                qDebug() << "Erro:" << reply->errorString();
            }
        }

        // Limpeza
        reply->deleteLater();
        manager->deleteLater();

        // Avance para a próxima página
        page++;
    }

    // Emita o sinal com as informações das rodadas
   // emit roundInfoFetched(*rodadas,*round);
}

