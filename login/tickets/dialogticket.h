#ifndef DIALOGTICKET_H
#define DIALOGTICKET_H

#include <QDialog>
#include "ticket.h"
#include "stat_combo.h"
namespace Ui {
class Dialogticket;
}

class Dialogticket : public QDialog
{
    Q_OBJECT

public:
    explicit Dialogticket(QWidget *parent = nullptr);
    ~Dialogticket();

private slots:
    void on_btnAjouter_clicked();
    void refresh();

    void on_tabTicket_activated(const QModelIndex &index);

    void on_supprimerTbtn_clicked();

    void on_modifierTbtn_clicked();

    void on_lineEdit_textChanged(const QString &arg1);

    void on_comboBox_currentIndexChanged(int index);

    void on_btnCalendrier_clicked();

    void on_imageBtn_clicked();

    void on_pushButton_clicked();

private:
    Ui::Dialogticket *ui;
    ticket t;
    stat_combo *s;

};

#endif // DIALOGTICKET_H
