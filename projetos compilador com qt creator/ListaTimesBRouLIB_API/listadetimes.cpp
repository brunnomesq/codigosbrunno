#include "listadetimes.h"
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>
#include <QNetworkAccessManager>
#include <QNetworkReply>

ListaDeTimes::ListaDeTimes(QObject *parent) : QObject(parent)
{

}

QStringList ListaDeTimes::times() const
{
    return m_times;
}

QString ListaDeTimes::getTime(int posicao) const
{
    return posicao >= 0 && posicao < m_times.size() ? m_times.at(posicao) : QString();
}

int ListaDeTimes::tamanhoLista() const
{
    return m_times.size();
}

void ListaDeTimes::buscarTimes(QString liga_url)
{
    QNetworkAccessManager *manager = new QNetworkAccessManager(this);
    QNetworkRequest request;
    request.setUrl(QUrl("https://footapi7.p.rapidapi.com/api/tournament/"+liga_url+"/season/"+m_temporada+"/standings/total"));
    request.setRawHeader("X-RapidAPI-Key", "014e6ef431mshe18e0267b58fa95p151296jsn96547f31b8e8");
    request.setRawHeader("X-RapidAPI-Host", "footapi7.p.rapidapi.com");

    QNetworkReply *reply = manager->get(request);

    connect(reply, &QNetworkReply::finished, this, [=]() {
        if (reply->error() == QNetworkReply::NoError) {
            QByteArray responseData = reply->readAll();
            QJsonDocument jsonDocument = QJsonDocument::fromJson(responseData);
            QJsonObject jsonObject = jsonDocument.object();
            QJsonArray standingsArray = jsonObject.value("standings").toArray();

            QStringList teamNames;
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

            m_times = teamNames;
        }

        reply->deleteLater();
        manager->deleteLater();

        emit finished();
    });
}

void ListaDeTimes::setTemporada(QString temporada)
{
    m_temporada = temporada;
}
