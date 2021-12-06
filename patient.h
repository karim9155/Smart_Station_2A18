#ifndef PATIENT_H
#define PATIENT_H
#include <QString>
#include <QSqlQueryModel>
#include <QDate>

class patient
{
public:
    patient();
    patient(QString ,int,QString,int,QDate);
    QString get(){return CODE_A_BARRE;}
    int getPRIX(){return PRIX;}
    int getNOMBRE(){return NOMBRE;}
    QString getTYPE() {return TYPE;}
    QDate getDATE_D_ACHAT(){return  DATE_D_ACHAT;}
bool ajouter();
QSqlQueryModel * afficher();
bool supprimer(QString);
bool update(QString ,int,QString,int,QDate);
QSqlQueryModel * rechercher_patient(QString CODE_A_BARRE ,int PRIX ,QString TYPE,int NOMBRE,QDate DATE_D_ACHAT);
private:
QString CODE_A_BARRE;
int NOMBRE;
int PRIX;
QString TYPE;
QDate  DATE_D_ACHAT;
};

#endif // PATIENT_H
