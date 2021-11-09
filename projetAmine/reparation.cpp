#include "reparation.h"

reparation::reparation()
{

}
reparation::reparation(int ref,QString etat,float prix,QString date_rep)
{
    this->ref=ref;
    this->etat=etat;
    this->prix=prix;
    this->date_rep=date_rep;
}
bool reparation::ajouter()
{
    QString p=QString::number(prix);
    QSqlQuery q;//requete SQL peut s'executer mel QT
    q.prepare("insert into reparation(ref,etat,prix,date_rep) VALUES(:ref,:etat,:prix,:date_rep)");
    q.bindValue(":ref",ref);
    q.bindValue(":etat",etat);
    q.bindValue(":prix",p);
    q.bindValue(":date_rep",date_rep);
    return q.exec();

}
bool reparation::supprimer(int ref)
{
    QSqlQuery q;
    q.prepare("delete from reparation where ref=:ref");
    q.bindValue(":ref",ref);
    return q.exec();
}
bool reparation::modifier(int ref)
{
    QString p=QString::number(prix);
    QSqlQuery q;
    q.prepare("update reparation set etat=:etat,prix=:prix,date_rep=:date_rep where ref=:ref");
    q.bindValue(":ref",ref);
    q.bindValue(":etat",etat);
    q.bindValue(":prix",p);
    q.bindValue(":date_rep",date_rep);
    return q.exec();
}
QSqlQueryModel* reparation::afficher()
{
    QSqlQueryModel* model=new QSqlQueryModel();
    model->setQuery("select * from reparation");
    return model;
}










