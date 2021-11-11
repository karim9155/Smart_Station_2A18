#ifndef BUS_H
#define BUS_H
#include <QString>
#include <QSqlQueryModel>

class Bus
{
public:
    Bus();
    Bus(QString,QString,int,int);
    int getmatricule();
    int getpuissance();
    QString getmarque();
    QString gettype();
    void setmatricule(int);
    void setpuissance(int);
    void setmarque(QString);
    void settype(QString);
    bool ajouter();
    QSqlQueryModel* afficher();
    bool supprimer(int);
    bool modifier(int matricule);
    QStringList lister();
private:
    QString marque,type;
    int matricule;
    int puissance;

};

#endif // BUS_H
