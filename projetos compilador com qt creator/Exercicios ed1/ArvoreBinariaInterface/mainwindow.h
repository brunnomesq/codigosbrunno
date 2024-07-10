#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <arvorebinaria.h>
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
    void on_pushButton_Ins_clicked();

    void on_pushButton_Rem_clicked();

private:
    Ui::MainWindow *ui;
    ED1::ArvoreBinaria teste;
};
#endif // MAINWINDOW_H
