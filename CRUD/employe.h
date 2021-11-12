#ifndef CLIENT_H
#define CLIENT_H
#include <QString>
#include <QSqlQueryModel>
class employe
{
    int Id ,Tel,age;
    QString Nom , Email;
public:
    employe();
     employe(int,QString,QString,int,int)    ;
    int get_id();
    int get_tel() ;
    int get_age() ;

    QString get_nom()  ;
    QString get_email() ;
    void set_id(int x)  ;
    void set_tel(int x)  ;
    void set_age(int x)  ;

     void set_nom(QString ch)  ;
    void set_email(QString ch)  ;
    bool ajouter() ;
    QSqlQueryModel *  afficher()  ;
bool supprimer(int);
bool chercherParCin()  ;
int verificationID() ;
bool modifier(int id)    ;
QStringList lister();
QSqlQueryModel * trierage();
    QSqlQueryModel * trieralpha();
};

#endif //  employe_H
