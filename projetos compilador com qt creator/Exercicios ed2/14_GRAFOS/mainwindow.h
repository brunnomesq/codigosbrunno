#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <desenhografico.h>
#include <grafico.h>
#include <QMainWindow>
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

    void change();

    void on_pushButtonCreate_clicked();

    void on_pushButtonInsert_clicked();

    void on_pushButtonUpdate_clicked();

    void on_pushButtonRemove_clicked();

    void on_pushButtonAccess_clicked();

private:
    Ui::MainWindow *ui;
    Grafico* graph;
    GraphPaint *graphItem;
};
#endif // MAINWINDOW_H
