#include "dialog_ticket.h"
#include "ui_dialog_ticket.h"

dialog_ticket::dialog_ticket(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::dialog_ticket)
{
    ui->setupUi(this);
}

dialog_ticket::~dialog_ticket()
{
    delete ui;
}

//config ok et cancel
void dialog_ticket::on_buttonBox_accepted()
{
accept();
}

void dialog_ticket::on_buttonBox_rejected()
{
reject();
}

//recuperation des donnees du formulaire


QString dialog_ticket::get_type() const { //combo box

    return ui->type->currentText();
}

QString dialog_ticket::get_code() const { //line edit

    return ui->code->text();
}

QString dialog_ticket::get_depart() const { //line edit

    return ui->depart->text();
}

QString dialog_ticket::get_arrive() const { //line edit

    return ui->arrive->text();
}


double dialog_ticket::get_prix() const{ //float

    return ui->prix->value();
}

QString dialog_ticket::get_date() const { //date
    return ui->date->date().toString("dd.MM.yyyy");
}

//remplissage des champs du formulaire a partir de la base

void dialog_ticket::fill_form(QString selected ) {
    QSqlQuery query;
    query.prepare("select * from tickets where code= :code");
    query.bindValue(":code", selected);
    query.exec();
    while(query.next()){

  ui->code->setText(query.value(0).toString()); //line edit
    ui->depart->setText(query.value(1).toString()); //line edit
      ui->arrive->setText(query.value(2).toString()); //line edit
   ui->type->setCurrentText(query.value(3).toString()); //combobox
   ui->date->setDate(QDate::fromString(query.value(5).toString(),"dd.MM.yyyy"));//date
     ui->prix->setValue(query.value(5).toReal()); // reel

    }

}
