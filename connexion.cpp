#include "connexion.h"

Connexion::Connexion()
{

}

bool Connexion::createconnect()
{bool test=false;
QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
db.setDatabaseName("hbib");
db.setUserName("hbib");//inserer nom de l'utilisateur
db.setPassword("hbib");//inserer mot de passe de cet utilisateur


if (db.open())
test=true;

    return  test;
}
