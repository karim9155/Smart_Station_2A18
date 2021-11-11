#ifndef CLIENT_H
#define CLIENT_H
#include <QString>
#include <QSqlQueryModel>
class employe
{
    int Id ,Tel;
    QString Nom , Email,Prenom;
public:
    employe();
     employe(int,QString,QString,int)    ;
    int get_id();
    int get_tel() ;
    QString get_nom()  ;
    QString get_prenom()  ;
    QString get_email() ;
    void set_id(int x)  ;
    void set_tel(int x)  ;

    void set_prenom(QString ch)  ;
    void set_nom(QString ch)  ;
    void set_email(QString ch)  ;
    bool ajouter() ;
    QSqlQueryModel *  afficher()  ;
bool supprimer(int);
bool chercherParCin()  ;
int verificationID() ;
bool modifier(int id)    ;
QStringList lister();

};

#endif //  employe_H
