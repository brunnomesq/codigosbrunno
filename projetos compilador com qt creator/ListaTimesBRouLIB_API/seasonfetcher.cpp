// seasonfetcher.cpp
#include "seasonfetcher.h"
#include <QNetworkAccessManager>
#include <QNetworkRequest>
#include <QNetworkReply>
#include <QJsonDocument>
#include <QJsonArray>
#include <QJsonObject>
#include <QEventLoop>
SeasonFetcher::SeasonFetcher(QObject *parent) : QObject(parent),currentApiKeyIndex(0)
{
    apiKeys << "74c8728eecmsh14c97ff9ffc4124p1b804djsnd5dcb4935c3c" << //brunnopmesquita
               "014e6ef431mshe18e0267b58fa95p151296jsn96547f31b8e8" << //cachorrobug
               "c8261d84e7msh500e8802397c102p1c7709jsn44996d96d185" << //gtaclipesbr
               "d4d87fe8f7msh9205988ad621d90p12577bjsn3a7f2eb090e5" << //hiperpig
               "2ac9024016msh7d2e2a12093bc7fp1bed54jsn17a9222cf4e1" << //animaismematamderir
               "3515df8e7dmshfd9b9ddf682dcedp1faccajsn293902eb6386" << //todososdiassalmos
               "bc92a73f4bmsh6632815b3d22e6fp1e44d6jsnfce6003dbb6b" << //truetruthinc
               "fba894364bmsh663927b2dca0250p1f5e56jsn07ee66629fb8" ; //brunnopmesqt
}


void SeasonFetcher::fetchSeason(QString league)
{
    QString seasonId = "";
    QString liga_url = "";
    if (league == "Premier League") {
        liga_url = "17";
    } else if (league == "Brasileirao Serie B") {
        liga_url = "390";
    } else if (league == "Brasileirao Serie A") {
        liga_url = "325";
    }

    // Obter o ID da temporada para a liga selecionada
    QNetworkAccessManager *seasonManager = new QNetworkAccessManager(this);
    QNetworkRequest seasonRequest;
    seasonRequest.setUrl(QUrl("https://footapi7.p.rapidapi.com/api/tournament/" + liga_url + "/seasons"));
    seasonRequest.setRawHeader("X-RapidAPI-Key", apiKeys[currentApiKeyIndex].toUtf8());
    seasonRequest.setRawHeader("X-RapidAPI-Host", "footapi7.p.rapidapi.com");

    QNetworkReply *seasonReply = seasonManager->get(seasonRequest);

    QEventLoop loop;
    connect(seasonReply, &QNetworkReply::finished, &loop, &QEventLoop::quit);
    loop.exec();

    if (seasonReply->error() == QNetworkReply::NoError) {
        QByteArray seasonData = seasonReply->readAll();
        QJsonDocument seasonDocument = QJsonDocument::fromJson(seasonData);
        QJsonArray seasonArray = seasonDocument.object().value("seasons").toArray();

        QString latestSeasonId;
        QString latestYear;

        // Iterar sobre a lista de temporadas para encontrar a mais recente
        //vamo tentar mudar isso aq pra ele sempre pegar o que ta na posicao 0 do vetor
        if (!seasonArray.isEmpty()) {
            QJsonObject firstSeasonObject = seasonArray.first().toObject();
            if (firstSeasonObject.contains("year") && firstSeasonObject.contains("id")) {
                latestYear = firstSeasonObject.value("year").toString();
                latestSeasonId = QString::number(firstSeasonObject.value("id").toInt());
            }
        }

        if (!latestSeasonId.isEmpty()) {
            seasonId = latestSeasonId;
            temporada = latestYear;
        }
    } else {
        int httpStatusCode = seasonReply->attribute(QNetworkRequest::HttpStatusCodeAttribute).toInt();
        if (seasonReply->error() == QNetworkReply::AuthenticationRequiredError) {
            // Troque para a próxima chave API
            currentApiKeyIndex = (currentApiKeyIndex + 1) % apiKeys.size();
            // Verificar se todas as chaves foram tentadas
            if (currentApiKeyIndex == 0) {
                // Se todas as chaves foram tentadas e o erro persiste, notifique o usuário ou lance um erro
                qDebug() << "Todas as chaves API foram usadas. Limite diário atingido.";
                // Aqui você pode emitir um sinal para notificar a interface do usuário
                emit apiLimitReached();
                return;
            }
            // Tente novamente com a próxima chave API
            fetchSeason(league);
            return;
        }else if (httpStatusCode == 429) {
            // Limite de taxa atingido. Troque para a próxima chave API.
            currentApiKeyIndex = (currentApiKeyIndex + 1) % apiKeys.size();
            qDebug() << "Limite de taxa atingido. Trocando para a próxima chave API.";
            fetchSeason(league);
            return;
        }
        // Em caso de outro tipo de erro, exiba uma mensagem de erro
        qDebug() << "Erro:" << seasonReply->errorString();
    }

    seasonReply->deleteLater();
    seasonManager->deleteLater();

    QString temp = getTemporada();
    emit seasonFetched(seasonId, temp);
}


QString SeasonFetcher::getTemporada() const
{
    return temporada;
}
