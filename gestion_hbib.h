#ifndef GESTION_HBIB_H
#define GESTION_HBIB_H

#include <QMainWindow>
#include <QSortFilterProxyModel>
#include <QTextTableFormat>
#include <QStandardItemModel>
#include <QDialog>

#include "ticket.h"
#include "dialog_ticket.h"


namespace Ui {
class gestion_hbib;
}

class gestion_hbib : public QMainWindow
{
    Q_OBJECT

public:
    explicit gestion_hbib(QWidget *parent = nullptr);
    ~gestion_hbib();

    ticket tmp;
    QSortFilterProxyModel *proxy;

    void show_tables();

private slots:


    void on_tableau_tickets_clicked(const QModelIndex &index);

    void on_tableau_tickets_doubleClicked(const QModelIndex &index);

    void on_actionadd_ticket_triggered();

    void on_actiondelete_ticket_triggered();

    void on_sel_col_currentIndexChanged(int index);

    void on_rech_textChanged(const QString &arg1);

private:
    Ui::gestion_hbib *ui;
    QString selected="";
    int sel_col=-1;
};

#endif // GESTION_HBIB_H
