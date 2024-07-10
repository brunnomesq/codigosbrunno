#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QStringList>

#include "rodadavet.h"
#include "ordenar.h"
#include "seasonfetcher.h"
#include "teamfetcher.h"
#include "roundinfofetcher.h" // Adicione esta linha

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();
    void handleSeasonFetched(QString seasonId, QString temp);
    void handleTeamsFetched(QStringList teams);
    void handleRoundInfoFetched(QStringList rodadas, QStringList round); // Adicione esta linha
    void handleApiLimitReached();

private:
    Ui::MainWindow *ui;
    SeasonFetcher *m_seasonFetcher;
    TeamFetcher *m_teamFetcher;
    RoundInfoFetcher *m_roundInfoFetcher; // Adicione esta linha

    Ordenar *vetor;
    QString temporada;
    QString temporadaID;
};

#endif // MAINWINDOW_H
