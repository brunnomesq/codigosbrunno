#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <manipulararquivo.h>
#include <QMainWindow>
#include <QString>
#include <QMessageBox>
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

    void on_pushButton_Abrir_clicked();

private:
    Ui::MainWindow *ui;
    TP2::ManipularArquivo p;
};
#endif // MAINWINDOW_H
