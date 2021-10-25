/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QTabWidget *tabWidget;
    QWidget *tab1;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QWidget *tab2;
    QWidget *tab;
    QWidget *tab_2;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(906, 636);
        tabWidget = new QTabWidget(Widget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 911, 641));
        tab1 = new QWidget();
        tab1->setObjectName(QStringLiteral("tab1"));
        pushButton = new QPushButton(tab1);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(50, 150, 121, 41));
        pushButton_2 = new QPushButton(tab1);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(50, 230, 121, 41));
        pushButton_3 = new QPushButton(tab1);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(50, 310, 121, 41));
        pushButton_4 = new QPushButton(tab1);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(50, 390, 121, 41));
        pushButton_5 = new QPushButton(tab1);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(680, 180, 191, 51));
        pushButton_6 = new QPushButton(tab1);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(680, 290, 191, 51));
        pushButton_7 = new QPushButton(tab1);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(680, 400, 191, 51));
        tabWidget->addTab(tab1, QString());
        tab2 = new QWidget();
        tab2->setObjectName(QStringLiteral("tab2"));
        tabWidget->addTab(tab2, QString());
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        tabWidget->addTab(tab_2, QString());

        retranslateUi(Widget);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Widget", "Ajouter une Bus", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("Widget", "Supprimer une Bus", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("Widget", "Modifier une Bus", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("Widget", "Afficher les bus ", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("Widget", "Rechercher un Bus ", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("Widget", "Trier Les Bus", Q_NULLPTR));
        pushButton_7->setText(QApplication::translate("Widget", "Notifications", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab1), QApplication::translate("Widget", "Gestion des Bus", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab2), QApplication::translate("Widget", "Localisation", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("Widget", "Statistique", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QString());
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
