#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "bus.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_Button_Ajouter_clicked();

    void on_ButtonSupprimer_clicked();

    void on_Button_Modification_clicked();

    void on_tripuissance_clicked();

    void on_trimarque_clicked();

    void on_lineEdit_textChanged(const QString &arg1);

    void on_stat_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_tab_Bus_activated(const QModelIndex &index);

private:
    Ui::MainWindow *ui;
    Bus B1;

};

#endif // MAINWINDOW_H
