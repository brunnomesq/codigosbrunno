#ifndef LISTADETIMES_H
#define LISTADETIMES_H

#include <QObject>
#include <QStringList>

class ListaDeTimes : public QObject
{
    Q_OBJECT
public:
    explicit ListaDeTimes(QObject *parent = nullptr);

    QStringList times() const;
    QString getTime(int posicao) const;
    int tamanhoLista() const;

public slots:
    void buscarTimes(QString liga_url);
    void setTemporada(QString temporada);

signals:
    void finished();

private:
    QStringList m_times;
    QString m_temporada;
};

#endif // LISTADETIMES_H
