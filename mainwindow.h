#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include "EQUIPEMENT.h"
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

    void on_pushButton_15_clicked();

    void on_pushButton_9_clicked();


    void on_pushButton_3_clicked();

    void on_pushButton_10_clicked();

    void on_groupBox_7_clicked();

    void on_groupBox_3_clicked();

    void on_pushButton_7_clicked();

    void on_groupBox_clicked();

    void on_pushButton_5_clicked();

    void on_lineEdit_11_cursorPositionChanged(int arg1, int arg2);

    void on_tableView_Patient_activated(const QModelIndex &index);

    void on_pushButton_8_clicked();

    void on_tableView_Patient_clicked(const QModelIndex &index);

    void on_pushButton_6_clicked();

    void on_triid_clicked();

    void on_on_stat_clicked();

private:
    Ui::MainWindow *ui;
    EQUIPEMENT e;

};
#endif // MAINWINDOW_H
