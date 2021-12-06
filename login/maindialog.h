#ifndef MAINDIALOG_H
#define MAINDIALOG_H

#include <QDialog>
#include "mainwindow.h"
#include "employes/mainwindow1.h"
#include "reparation/mainwindow2.h"
#include "tickets/dialogticket.h"
namespace Ui {
class MainDialog;
}

class MainDialog : public QDialog
{
    Q_OBJECT

public:
    explicit MainDialog(QWidget *parent = nullptr);
    ~MainDialog();

private slots:
    void on_pushButton_clicked();

    void on_BUS_clicked();

    void on_pushButton_2_clicked();

    void on_EMPLOYES_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::MainDialog *ui;
    MainWindow *bus;
    MainWindow1 *employes;
    MainWindow2 *reparation;
    Dialogticket *ticket;
};

#endif // MAINDIALOG_H
