#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <graphpaint.h>
#include <graph.h>
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
    void on_pushButton_clicked();

    void on_pushButtonCreate_clicked();

    void on_lineEditSize_returnPressed();

    void on_pushButtonInsert_clicked();


    void on_pushButtonUpdate_clicked();

    void on_pushButtonRemove_clicked();

    void on_pushButtonAccess_clicked();

    void on_lineEditPosition1_returnPressed();

private:
    Ui::MainWindow *ui;
    Graph* graph = 0;
    GraphPaint *graphItem;
};
#endif // MAINWINDOW_H
