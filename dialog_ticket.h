#ifndef DIALOG_TICKET_H
#define DIALOG_TICKET_H

#include <QDialog>
#include <QSqlQuery>
#include <QSqlQueryModel>

namespace Ui {
class dialog_ticket;
}

class dialog_ticket : public QDialog
{
    Q_OBJECT

public:
    explicit dialog_ticket(QWidget *parent = nullptr);
    ~dialog_ticket();


    QString get_code () const ;
    QString get_depart () const ;
    QString get_arrive() const;
    QString get_type() const ;
    QString get_date() const ;
    double get_prix() const;

    void fill_form(QString);


private slots:
    void on_buttonBox_accepted();

    void on_buttonBox_rejected();

private:
    Ui::dialog_ticket *ui;
};

#endif // DIALOG_TICKET_H
