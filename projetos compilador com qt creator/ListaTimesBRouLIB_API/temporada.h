#ifndef TEMPORADA_H
#define TEMPORADA_H

#include <QObject>
#include <QNetworkAccessManager>
#include <QNetworkRequest>
#include <QNetworkReply>
#include <QJsonDocument>
#include <QJsonArray>
#include <QJsonObject>

class Temporada : public QObject
{
    Q_OBJECT

public:
    explicit Temporada(QObject *parent = nullptr);

    void buscarTemporada(QString liga_id);
    QString getIdTemporada() const;
    QString getTemporada() const;

signals:
    void finished(); // Declaração do sinal finished

private:
    QString m_seasonId;
    QString m_latestYear;
};

#endif // TEMPORADA_H
