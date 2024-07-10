#ifndef MAINWINDOW_H
#define MAINWINDOW_H

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


    void on_pushButton_Div_clicked();


    void on_pushButton_Mul_clicked();

    void on_pushButton_Sub_clicked();

    void on_pushButton_Som_clicked();

    void on_pushButton_Elev_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
