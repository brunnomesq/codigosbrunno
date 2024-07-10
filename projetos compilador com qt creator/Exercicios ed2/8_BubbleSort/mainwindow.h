#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "ordenar.h"
#include <QMainWindow>
#include <QElapsedTimer>

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
    void on_pushButton_Tamanho_clicked();
    float millisecondsToFloat(qint64 milliseconds);

private:
    Ui::MainWindow *ui;
    brn::Ordenar *o=0;
};
#endif // MAINWINDOW_H
