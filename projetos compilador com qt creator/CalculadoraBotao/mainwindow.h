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
    void on_pushButton_0_clicked();

    void on_pushButton_1_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_Del_clicked();

    void on_pushButton_Dec_clicked();

    void on_pushButton_CE_clicked();

    void on_pushButton_Som_clicked();

    void on_pushButton_Sub_clicked();

    void on_pushButton_Mul_clicked();

    void on_pushButton_Div_clicked();

    void on_pushButton_C_clicked();

    void on_pushButton_Igu_clicked();



private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
