/********************************************************************************
** Form generated from reading UI file 'new_window.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEW_WINDOW_H
#define UI_NEW_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_new_window
{
public:
    QPushButton *pushButton;
    QLabel *label;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_3;
    QLabel *label_2;
    QLineEdit *text_marque;
    QLineEdit *text_matricule;
    QLineEdit *text_puissace;
    QLineEdit *text_type;
    QLineEdit *text_genre;

    void setupUi(QDialog *new_window)
    {
        if (new_window->objectName().isEmpty())
            new_window->setObjectName(QStringLiteral("new_window"));
        new_window->resize(400, 403);
        pushButton = new QPushButton(new_window);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(140, 344, 101, 31));
        label = new QLabel(new_window);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(80, 70, 56, 16));
        label_4 = new QLabel(new_window);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(80, 220, 56, 16));
        label_5 = new QLabel(new_window);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(70, 260, 56, 16));
        label_3 = new QLabel(new_window);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(70, 170, 71, 20));
        label_2 = new QLabel(new_window);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(70, 120, 61, 16));
        text_marque = new QLineEdit(new_window);
        text_marque->setObjectName(QStringLiteral("text_marque"));
        text_marque->setGeometry(QRect(150, 70, 113, 24));
        text_matricule = new QLineEdit(new_window);
        text_matricule->setObjectName(QStringLiteral("text_matricule"));
        text_matricule->setGeometry(QRect(150, 120, 113, 24));
        text_puissace = new QLineEdit(new_window);
        text_puissace->setObjectName(QStringLiteral("text_puissace"));
        text_puissace->setGeometry(QRect(150, 170, 113, 24));
        text_type = new QLineEdit(new_window);
        text_type->setObjectName(QStringLiteral("text_type"));
        text_type->setGeometry(QRect(150, 220, 113, 24));
        text_genre = new QLineEdit(new_window);
        text_genre->setObjectName(QStringLiteral("text_genre"));
        text_genre->setGeometry(QRect(150, 260, 113, 24));

        retranslateUi(new_window);

        QMetaObject::connectSlotsByName(new_window);
    } // setupUi

    void retranslateUi(QDialog *new_window)
    {
        new_window->setWindowTitle(QApplication::translate("new_window", "Ajout d'une bus", Q_NULLPTR));
        pushButton->setText(QApplication::translate("new_window", "Ajouter", Q_NULLPTR));
        label->setText(QApplication::translate("new_window", "Marque :", Q_NULLPTR));
        label_4->setText(QApplication::translate("new_window", "Type :", Q_NULLPTR));
        label_5->setText(QApplication::translate("new_window", "Genre :", Q_NULLPTR));
        label_3->setText(QApplication::translate("new_window", "Puissance :", Q_NULLPTR));
        label_2->setText(QApplication::translate("new_window", "Matricule :", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class new_window: public Ui_new_window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEW_WINDOW_H
