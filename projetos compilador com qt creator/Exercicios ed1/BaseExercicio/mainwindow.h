#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "base.h"
#include <QMainWindow>

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



    void on_pushButton_Executar_clicked();

    void on_comboBox_currentIndexChanged();

private:
    Ui::MainWindow *ui;
    brn::Base *b=0;
};
#endif // MAINWINDOW_H
