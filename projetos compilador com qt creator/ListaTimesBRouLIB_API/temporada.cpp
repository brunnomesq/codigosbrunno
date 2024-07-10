#include "temporada.h"
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>

Temporada::Temporada(QObject *parent) : QObject(parent)
{

}

QString Temporada::getIdTemporada() const
{
    return m_seasonId;
}

QString Temporada::getTemporada() const
{
    return m_latestYear;
}

void Temporada::buscarTemporada(QString liga_id)
{
    QNetworkAccessManager *seasonManager = new QNetworkAccessManager(this);
    QNetworkRequest seasonRequest;
    seasonRequest.setUrl(QUrl("https://footapi7.p.rapidapi.com/api/tournament/" + liga_id + "/seasons"));
    seasonRequest.setRawHeader("X-RapidAPI-Key", "014e6ef431mshe18e0267b58fa95p151296jsn96547f31b8e8");
    seasonRequest.setRawHeader("X-RapidAPI-Host", "footapi7.p.rapidapi.com");

    QNetworkReply *seasonReply = seasonManager->get(seasonRequest);

    connect(seasonReply, &QNetworkReply::finished, this, [=]() {
        if (seasonReply->error() == QNetworkReply::NoError) {
            QByteArray seasonData = seasonReply->readAll();
            QJsonDocument seasonDocument = QJsonDocument::fromJson(seasonData);
            QJsonArray seasonArray = seasonDocument.object().value("seasons").toArray();

            QString latestSeasonId;

            // Iterar sobre a lista de temporadas para encontrar a mais recente
            for (const QJsonValue &seasonValue : seasonArray) {
                QJsonObject seasonObject = seasonValue.toObject();
                if (seasonObject.contains("year") && seasonObject.contains("id")) {
                    QString year = seasonObject.value("year").toString();
                    QString seasonId = QString::number(seasonObject.value("id").toInt());
                    m_seasonId = seasonId;
                    if (year > m_latestYear) {
                        m_latestYear = year;
                        latestSeasonId = seasonId;
                    }
                }
            }

            if (!latestSeasonId.isEmpty()) {
                m_seasonId = latestSeasonId;
            }
        }

        seasonReply->deleteLater();
        seasonManager->deleteLater();

        emit finished();
    });
}
