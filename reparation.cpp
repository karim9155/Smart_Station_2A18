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
bool reparation::rechercher(int ref)
{
    QString refer=QString::number(ref);
    QSqlQuery q("select * from reparation where ref="+refer);
    while(q.next()){
        return true;
    }
    return false;

}
bool reparation::supprimer(int ref)
{
    bool test=rechercher(ref);
    QSqlQuery q;
    q.prepare("delete from reparation where ref=:ref");
    q.bindValue(":ref",ref);
    q.exec();
    return test;
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
    q.exec();
    return rechercher(ref);
}
QSqlQueryModel* reparation::afficher()
{
    QSqlQueryModel* model=new QSqlQueryModel();
    model->setQuery("select * from reparation");
    return model;
}
QSqlQueryModel* reparation::afficherRech(QString critere,QString rech)
{
    QSqlQueryModel* model=new QSqlQueryModel();
    model->setQuery("select * from reparation where "+critere+" like '"+rech+"%'");
    return model;
}
QSqlQueryModel* reparation::afficherTri(QString critere)
{
    QSqlQueryModel* model=new QSqlQueryModel();
    model->setQuery("select * from reparation order by "+critere);
    return model;
}
void reparation::stat(QPieSeries *series)
{
    series->clear();
     QSqlQuery q("select etat,count(*) from reparation group by etat");

     while(q.next())
     {series->append(q.value(0).toString()+": "+q.value(1).toString(),q.value(1).toInt());}

}









