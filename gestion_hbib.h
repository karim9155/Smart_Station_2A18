#ifndef GESTION_HBIB_H
#define GESTION_HBIB_H

#include <QMainWindow>
#include <QSortFilterProxyModel>
#include <QTextTableFormat>
#include <QStandardItemModel>
#include <QDialog>

#include "ticket.h"
#include "dialog_ticket.h"
#include "stat_combo.h"


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

    QString get_code () const ;
    QString get_depart () const ;
    QString get_arrive() const;
    QString get_type() const ;
    QString get_date() const ;
    double get_prix() const;

    void fill_form(QString);


    void show_tables();

private slots:


    void on_tableau_tickets_clicked(const QModelIndex &index);

    void on_tableau_tickets_doubleClicked(const QModelIndex &index);

    void on_actionadd_ticket_triggered();

    void on_actiondelete_ticket_triggered();

    void on_sel_col_currentIndexChanged(int index);

    void on_rech_textChanged(const QString &arg1);

    void on_actionedit_ticket_triggered();

    void on_actionstats_triggered();

    void on_btnAdd_clicked();

    void on_btnEdit_clicked();

    void on_btnDelete_clicked();

private:
    Ui::gestion_hbib *ui;
    QString selected="";
    int sel_col=-1;
    stat_combo *s;

};

#endif // GESTION_HBIB_H
