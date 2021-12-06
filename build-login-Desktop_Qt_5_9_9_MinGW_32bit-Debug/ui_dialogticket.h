/********************************************************************************
** Form generated from reading UI file 'dialogticket.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGTICKET_H
#define UI_DIALOGTICKET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialogticket
{
public:
    QTableView *tabTicket;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *formlabel;
    QComboBox *comboType;
    QComboBox *t_depart;
    QLineEdit *t_arrive;
    QLineEdit *t_prix;
    QDateEdit *t_date;
    QPushButton *btnAjouter;
    QHBoxLayout *horizontalLayout;
    QPushButton *modifierTbtn;
    QPushButton *supprimerTbtn;
    QPushButton *imageBtn;
    QLineEdit *lineEdit;
    QComboBox *comboBox;
    QLabel *label;
    QRadioButton *triDesc;
    QPushButton *btnCalendrier;
    QPushButton *pushButton;
    QLabel *label_depart;

    void setupUi(QDialog *Dialogticket)
    {
        if (Dialogticket->objectName().isEmpty())
            Dialogticket->setObjectName(QStringLiteral("Dialogticket"));
        Dialogticket->resize(893, 432);
        tabTicket = new QTableView(Dialogticket);
        tabTicket->setObjectName(QStringLiteral("tabTicket"));
        tabTicket->setGeometry(QRect(20, 100, 531, 231));
        verticalLayoutWidget = new QWidget(Dialogticket);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(563, 101, 295, 265));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        formlabel = new QLabel(verticalLayoutWidget);
        formlabel->setObjectName(QStringLiteral("formlabel"));
        QFont font;
        font.setFamily(QStringLiteral("Impact"));
        font.setPointSize(12);
        formlabel->setFont(font);
        formlabel->setScaledContents(false);
        formlabel->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(formlabel);

        comboType = new QComboBox(verticalLayoutWidget);
        comboType->setObjectName(QStringLiteral("comboType"));

        verticalLayout->addWidget(comboType);

        t_depart = new QComboBox(verticalLayoutWidget);
        t_depart->setObjectName(QStringLiteral("t_depart"));

        verticalLayout->addWidget(t_depart);

        t_arrive = new QLineEdit(verticalLayoutWidget);
        t_arrive->setObjectName(QStringLiteral("t_arrive"));
        t_arrive->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(t_arrive);

        t_prix = new QLineEdit(verticalLayoutWidget);
        t_prix->setObjectName(QStringLiteral("t_prix"));
        t_prix->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(t_prix);

        t_date = new QDateEdit(verticalLayoutWidget);
        t_date->setObjectName(QStringLiteral("t_date"));
        t_date->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(t_date);

        btnAjouter = new QPushButton(verticalLayoutWidget);
        btnAjouter->setObjectName(QStringLiteral("btnAjouter"));

        verticalLayout->addWidget(btnAjouter);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        modifierTbtn = new QPushButton(verticalLayoutWidget);
        modifierTbtn->setObjectName(QStringLiteral("modifierTbtn"));

        horizontalLayout->addWidget(modifierTbtn);

        supprimerTbtn = new QPushButton(verticalLayoutWidget);
        supprimerTbtn->setObjectName(QStringLiteral("supprimerTbtn"));

        horizontalLayout->addWidget(supprimerTbtn);

        imageBtn = new QPushButton(verticalLayoutWidget);
        imageBtn->setObjectName(QStringLiteral("imageBtn"));

        horizontalLayout->addWidget(imageBtn);


        verticalLayout->addLayout(horizontalLayout);

        lineEdit = new QLineEdit(Dialogticket);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(337, 70, 211, 20));
        lineEdit->setAlignment(Qt::AlignCenter);
        comboBox = new QComboBox(Dialogticket);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(79, 70, 111, 22));
        label = new QLabel(Dialogticket);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 75, 47, 13));
        triDesc = new QRadioButton(Dialogticket);
        triDesc->setObjectName(QStringLiteral("triDesc"));
        triDesc->setGeometry(QRect(200, 70, 82, 17));
        btnCalendrier = new QPushButton(Dialogticket);
        btnCalendrier->setObjectName(QStringLiteral("btnCalendrier"));
        btnCalendrier->setGeometry(QRect(650, 370, 75, 23));
        pushButton = new QPushButton(Dialogticket);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(490, 370, 93, 28));
        label_depart = new QLabel(Dialogticket);
        label_depart->setObjectName(QStringLiteral("label_depart"));
        label_depart->setGeometry(QRect(560, 10, 301, 81));

        retranslateUi(Dialogticket);

        QMetaObject::connectSlotsByName(Dialogticket);
    } // setupUi

    void retranslateUi(QDialog *Dialogticket)
    {
        Dialogticket->setWindowTitle(QApplication::translate("Dialogticket", "Dialog", Q_NULLPTR));
        formlabel->setText(QApplication::translate("Dialogticket", "Ajout Ticket", Q_NULLPTR));
        comboType->clear();
        comboType->insertItems(0, QStringList()
         << QApplication::translate("Dialogticket", "Type", Q_NULLPTR)
         << QApplication::translate("Dialogticket", "Individuel", Q_NULLPTR)
         << QApplication::translate("Dialogticket", "Couple", Q_NULLPTR)
         << QApplication::translate("Dialogticket", "Famille", Q_NULLPTR)
        );
        t_depart->clear();
        t_depart->insertItems(0, QStringList()
         << QApplication::translate("Dialogticket", "Depart", Q_NULLPTR)
         << QApplication::translate("Dialogticket", "Tunis", Q_NULLPTR)
         << QApplication::translate("Dialogticket", "Bizerte", Q_NULLPTR)
         << QApplication::translate("Dialogticket", "Sfax", Q_NULLPTR)
         << QApplication::translate("Dialogticket", "SidiBouzid", Q_NULLPTR)
         << QApplication::translate("Dialogticket", "Beja", Q_NULLPTR)
         << QApplication::translate("Dialogticket", "Jendouba", Q_NULLPTR)
         << QApplication::translate("Dialogticket", "Kef", Q_NULLPTR)
         << QApplication::translate("Dialogticket", "Nabeul", Q_NULLPTR)
         << QApplication::translate("Dialogticket", "Sousse", Q_NULLPTR)
         << QApplication::translate("Dialogticket", "Monastir", Q_NULLPTR)
         << QApplication::translate("Dialogticket", "Mahdia", Q_NULLPTR)
         << QApplication::translate("Dialogticket", "Gabes", Q_NULLPTR)
         << QApplication::translate("Dialogticket", "Gbelly", Q_NULLPTR)
         << QApplication::translate("Dialogticket", "Tozeur", Q_NULLPTR)
         << QApplication::translate("Dialogticket", "Tataouin", Q_NULLPTR)
         << QApplication::translate("Dialogticket", "Karouen", Q_NULLPTR)
         << QApplication::translate("Dialogticket", "Kasserine", Q_NULLPTR)
         << QApplication::translate("Dialogticket", "Gafsa", Q_NULLPTR)
         << QApplication::translate("Dialogticket", "Mednine", Q_NULLPTR)
         << QApplication::translate("Dialogticket", "Ariana", Q_NULLPTR)
         << QApplication::translate("Dialogticket", "Ben Arous", Q_NULLPTR)
         << QApplication::translate("Dialogticket", "Siliena", Q_NULLPTR)
         << QApplication::translate("Dialogticket", "Zaghouan", Q_NULLPTR)
        );
        t_arrive->setPlaceholderText(QApplication::translate("Dialogticket", "Arrive", Q_NULLPTR));
        t_prix->setPlaceholderText(QApplication::translate("Dialogticket", "Prix", Q_NULLPTR));
        btnAjouter->setText(QApplication::translate("Dialogticket", "Ajouter", Q_NULLPTR));
        modifierTbtn->setText(QApplication::translate("Dialogticket", "Modifier", Q_NULLPTR));
        supprimerTbtn->setText(QApplication::translate("Dialogticket", "Supprimer", Q_NULLPTR));
        imageBtn->setText(QApplication::translate("Dialogticket", "Image", Q_NULLPTR));
        lineEdit->setPlaceholderText(QApplication::translate("Dialogticket", "Recherche", Q_NULLPTR));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("Dialogticket", "CODE", Q_NULLPTR)
         << QApplication::translate("Dialogticket", "TYPE", Q_NULLPTR)
         << QApplication::translate("Dialogticket", "Derpart", Q_NULLPTR)
         << QApplication::translate("Dialogticket", "Arrive", Q_NULLPTR)
         << QApplication::translate("Dialogticket", "Prix", Q_NULLPTR)
        );
        label->setText(QApplication::translate("Dialogticket", "Tri Par :", Q_NULLPTR));
        triDesc->setText(QApplication::translate("Dialogticket", "Desc", Q_NULLPTR));
        btnCalendrier->setText(QApplication::translate("Dialogticket", "Calendrier", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Dialogticket", "Voir stat", Q_NULLPTR));
        label_depart->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Dialogticket: public Ui_Dialogticket {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGTICKET_H
