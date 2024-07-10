// teamfetcher.cpp
#include "teamfetcher.h"
#include <QNetworkAccessManager>
#include <QNetworkRequest>
#include <QNetworkReply>
#include <QJsonDocument>
#include <QJsonArray>
#include <QJsonObject>
#include <QEventLoop>

TeamFetcher::TeamFetcher(QObject *parent) : QObject(parent),currentApiKeyIndex(0)
{
    apiKeys << "74c8728eecmsh14c97ff9ffc4124p1b804djsnd5dcb4935c3c" << //brunnopmesquita
               "014e6ef431mshe18e0267b58fa95p151296jsn96547f31b8e8" << //cachorrobug
               "c8261d84e7msh500e8802397c102p1c7709jsn44996d96d185" << //gtaclipesbr
               "d4d87fe8f7msh9205988ad621d90p12577bjsn3a7f2eb090e5" << //hiperpig
               "2ac9024016msh7d2e2a12093bc7fp1bed54jsn17a9222cf4e1" << //animaismematamderir
               "3515df8e7dmshfd9b9ddf682dcedp1faccajsn293902eb6386" <<  //todososdiassalmos
               "bc92a73f4bmsh6632815b3d22e6fp1e44d6jsnfce6003dbb6b" << //truetruthinc
               "fba894364bmsh663927b2dca0250p1f5e56jsn07ee66629fb8" ; //brunnopmesqt
}

void TeamFetcher::fetchTeams(QString league, QString seasonId)
{
    QString liga_url = "";
    if (league == "Premier League") {
        liga_url = "17";
    } else if (league == "Brasileirao Serie B") {
        liga_url = "390";
    }else if (league == "Brasileirao Serie A") {
        liga_url = "325";
    }

    // Crie um objeto QNetworkAccessManager
    QNetworkAccessManager *manager = new QNetworkAccessManager(this);

    // Crie uma solicitação HTTP
    QNetworkRequest request;
    request.setUrl(QUrl("https://footapi7.p.rapidapi.com/api/tournament/"+liga_url+"/season/"+seasonId+"/standings/total"));
    request.setRawHeader("X-RapidAPI-Key", apiKeys[currentApiKeyIndex].toUtf8());
    request.setRawHeader("X-RapidAPI-Host", "footapi7.p.rapidapi.com");

    // Faça a solicitação HTTP
    QNetworkReply *reply = manager->get(request);

    // Crie um loop de eventos para esperar pela resposta
    QEventLoop loop;
    connect(reply, &QNetworkReply::finished, &loop, &QEventLoop::quit);
    loop.exec();

    // Processar a resposta depois que a solicitação for concluída
    QStringList teamNames;
    if (reply->error() == QNetworkReply::NoError) {
        // Leia a resposta
        QByteArray responseData = reply->readAll();

        // Parse da resposta JSON
        QJsonDocument jsonDocument = QJsonDocument::fromJson(responseData);
        QJsonObject jsonObject = jsonDocument.object();
        QJsonArray standingsArray = jsonObject.value("standings").toArray();

        // Extrair nomes dos times
        for (const QJsonValue& standingValue : standingsArray) {
            QJsonObject standingObject = standingValue.toObject();
            QJsonArray rowsArray = standingObject.value("rows").toArray();
            for (const QJsonValue& rowValue : rowsArray) {
                QJsonObject rowObject = rowValue.toObject();
                QJsonObject teamObject = rowObject.value("team").toObject();
                QString teamName = teamObject.value("name").toString();
                teamNames.append(teamName);
            }
        }
    } else {
        int httpStatusCode = reply->attribute(QNetworkRequest::HttpStatusCodeAttribute).toInt();
        if (reply->error() == QNetworkReply::AuthenticationRequiredError) {
                    currentApiKeyIndex = (currentApiKeyIndex + 1) % apiKeys.size();
                    //esse % é bom que se chegar no 6%6=0 entao sempre que tiver no ultimo vai pro 0 denovo
                    // Verificar se todas as chaves foram tentadas
                        if (currentApiKeyIndex == 0) {
                            // Se todas as chaves foram tentadas e o erro persiste, notifique o usuário ou lance um erro
                            qDebug() << "Todas as chaves API foram usadas. Limite diário atingido.";
                            // Aqui você pode emitir um sinal para notificar a interface do usuário
                            emit apiLimitReached();
                            return;
                            }
                    fetchTeams(league,seasonId); // Tente novamente com a próxima chave API
                    return;
         }else if (httpStatusCode == 429) {
            // Limite de taxa atingido. Troque para a próxima chave API.
            currentApiKeyIndex = (currentApiKeyIndex + 1) % apiKeys.size();
            qDebug() << "Limite de taxa atingido. Trocando para a próxima chave API.";
            fetchTeams(league,seasonId);
            return;
        }

        // Em caso de erro, exiba uma mensagem de erro
        qDebug() << "Erro:" << reply->errorString();

    }

    // Limpeza
    reply->deleteLater();
    manager->deleteLater();
    emit teamsFetched(teamNames);
}
