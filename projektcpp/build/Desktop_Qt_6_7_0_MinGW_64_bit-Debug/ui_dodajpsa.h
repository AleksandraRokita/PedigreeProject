/********************************************************************************
** Form generated from reading UI file 'dodajpsa.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DODAJPSA_H
#define UI_DODAJPSA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_dodajpsa
{
public:
    QLabel *dodajpsalabel;
    QPushButton *pushButton_zatwierdz;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *labelnrr;
    QLineEdit *lineEdit_nrRodowodu;
    QLabel *label_2;
    QLineEdit *lineEdit_imie;
    QLabel *label_3;
    QLineEdit *lineEdit_wlasciciel;
    QLabel *label_4;
    QComboBox *comboBox_plec;
    QLabel *label_5;
    QLineEdit *lineEdit_idHodowcy;
    QLabel *label_6;
    QLineEdit *lineEdit_rasa;
    QLabel *label_7;
    QLineEdit *lineEdit_nrTatuazu;
    QLabel *label_8;
    QLineEdit *lineEdit_chip;
    QLabel *label_9;
    QLineEdit *lineEdit_rejestracjaOddzialowa;
    QLabel *label;

    void setupUi(QDialog *dodajpsa)
    {
        if (dodajpsa->objectName().isEmpty())
            dodajpsa->setObjectName("dodajpsa");
        dodajpsa->resize(1246, 987);
        dodajpsalabel = new QLabel(dodajpsa);
        dodajpsalabel->setObjectName("dodajpsalabel");
        dodajpsalabel->setGeometry(QRect(550, 50, 241, 61));
        QFont font;
        font.setPointSize(28);
        font.setBold(true);
        dodajpsalabel->setFont(font);
        pushButton_zatwierdz = new QPushButton(dodajpsa);
        pushButton_zatwierdz->setObjectName("pushButton_zatwierdz");
        pushButton_zatwierdz->setGeometry(QRect(610, 780, 80, 24));
        layoutWidget = new QWidget(dodajpsa);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(70, 140, 1131, 520));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        labelnrr = new QLabel(layoutWidget);
        labelnrr->setObjectName("labelnrr");

        verticalLayout->addWidget(labelnrr);

        lineEdit_nrRodowodu = new QLineEdit(layoutWidget);
        lineEdit_nrRodowodu->setObjectName("lineEdit_nrRodowodu");

        verticalLayout->addWidget(lineEdit_nrRodowodu);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");

        verticalLayout->addWidget(label_2);

        lineEdit_imie = new QLineEdit(layoutWidget);
        lineEdit_imie->setObjectName("lineEdit_imie");

        verticalLayout->addWidget(lineEdit_imie);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName("label_3");

        verticalLayout->addWidget(label_3);

        lineEdit_wlasciciel = new QLineEdit(layoutWidget);
        lineEdit_wlasciciel->setObjectName("lineEdit_wlasciciel");

        verticalLayout->addWidget(lineEdit_wlasciciel);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName("label_4");

        verticalLayout->addWidget(label_4);

        comboBox_plec = new QComboBox(layoutWidget);
        comboBox_plec->addItem(QString());
        comboBox_plec->addItem(QString());
        comboBox_plec->setObjectName("comboBox_plec");

        verticalLayout->addWidget(comboBox_plec);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName("label_5");

        verticalLayout->addWidget(label_5);

        lineEdit_idHodowcy = new QLineEdit(layoutWidget);
        lineEdit_idHodowcy->setObjectName("lineEdit_idHodowcy");

        verticalLayout->addWidget(lineEdit_idHodowcy);

        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName("label_6");

        verticalLayout->addWidget(label_6);

        lineEdit_rasa = new QLineEdit(layoutWidget);
        lineEdit_rasa->setObjectName("lineEdit_rasa");

        verticalLayout->addWidget(lineEdit_rasa);

        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName("label_7");

        verticalLayout->addWidget(label_7);

        lineEdit_nrTatuazu = new QLineEdit(layoutWidget);
        lineEdit_nrTatuazu->setObjectName("lineEdit_nrTatuazu");

        verticalLayout->addWidget(lineEdit_nrTatuazu);

        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName("label_8");

        verticalLayout->addWidget(label_8);

        lineEdit_chip = new QLineEdit(layoutWidget);
        lineEdit_chip->setObjectName("lineEdit_chip");

        verticalLayout->addWidget(lineEdit_chip);

        label_9 = new QLabel(layoutWidget);
        label_9->setObjectName("label_9");

        verticalLayout->addWidget(label_9);

        lineEdit_rejestracjaOddzialowa = new QLineEdit(layoutWidget);
        lineEdit_rejestracjaOddzialowa->setObjectName("lineEdit_rejestracjaOddzialowa");

        verticalLayout->addWidget(lineEdit_rejestracjaOddzialowa);

        label = new QLabel(dodajpsa);
        label->setObjectName("label");
        label->setGeometry(QRect(180, 700, 48, 16));

        retranslateUi(dodajpsa);

        QMetaObject::connectSlotsByName(dodajpsa);
    } // setupUi

    void retranslateUi(QDialog *dodajpsa)
    {
        dodajpsa->setWindowTitle(QCoreApplication::translate("dodajpsa", "Dialog", nullptr));
        dodajpsalabel->setText(QCoreApplication::translate("dodajpsa", "Dodaj psa", nullptr));
        pushButton_zatwierdz->setText(QCoreApplication::translate("dodajpsa", "Zatwierdz", nullptr));
        labelnrr->setText(QCoreApplication::translate("dodajpsa", "Nr Rodowodu", nullptr));
        label_2->setText(QCoreApplication::translate("dodajpsa", "Imie", nullptr));
        label_3->setText(QCoreApplication::translate("dodajpsa", "Wlasciciel", nullptr));
        label_4->setText(QCoreApplication::translate("dodajpsa", "Plec", nullptr));
        comboBox_plec->setItemText(0, QCoreApplication::translate("dodajpsa", "Suka", nullptr));
        comboBox_plec->setItemText(1, QCoreApplication::translate("dodajpsa", "Pies", nullptr));

        label_5->setText(QCoreApplication::translate("dodajpsa", "Id hodowcy ", nullptr));
        label_6->setText(QCoreApplication::translate("dodajpsa", "Rasa", nullptr));
        lineEdit_rasa->setText(QString());
        label_7->setText(QCoreApplication::translate("dodajpsa", "Nr tatua\305\274u", nullptr));
        label_8->setText(QCoreApplication::translate("dodajpsa", "Chip", nullptr));
        label_9->setText(QCoreApplication::translate("dodajpsa", "Rejestracja oddzialowa", nullptr));
        label->setText(QCoreApplication::translate("dodajpsa", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class dodajpsa: public Ui_dodajpsa {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DODAJPSA_H
