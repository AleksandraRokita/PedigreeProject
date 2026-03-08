/********************************************************************************
** Form generated from reading UI file 'dodajpsaokno_kopia.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DODAJPSAOKNO_KOPIA_H
#define UI_DODAJPSAOKNO_KOPIA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dodajpsaokno
{
public:
    QLabel *dodajpsalabel;
    QPushButton *pushButton_zatwierdz;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *labelnrr;
    QLineEdit *lineEdit_nrRodowodu;
    QLabel *label_2;
    QLineEdit *lineEdit_imie;
    QLabel *label_3;
    QLineEdit *lineEdit_3;
    QLabel *label_4;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox;
    QLabel *label_5;
    QLineEdit *lineEdit_4;
    QLabel *label_6;
    QLineEdit *lineEdit_5;
    QLabel *label_7;
    QLineEdit *lineEdit_6;
    QLabel *label_8;
    QLineEdit *lineEdit_7;
    QLabel *label_9;
    QLineEdit *lineEdit_8;

    void setupUi(QDialog *Dodajpsaokno)
    {
        if (Dodajpsaokno->objectName().isEmpty())
            Dodajpsaokno->setObjectName("Dodajpsaokno");
        Dodajpsaokno->resize(1200, 700);
        dodajpsalabel = new QLabel(Dodajpsaokno);
        dodajpsalabel->setObjectName("dodajpsalabel");
        dodajpsalabel->setGeometry(QRect(490, 20, 241, 61));
        QFont font;
        font.setPointSize(28);
        font.setBold(true);
        dodajpsalabel->setFont(font);
        pushButton_zatwierdz = new QPushButton(Dodajpsaokno);
        pushButton_zatwierdz->setObjectName("pushButton_zatwierdz");
        pushButton_zatwierdz->setGeometry(QRect(540, 630, 80, 24));
        widget = new QWidget(Dodajpsaokno);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(40, 100, 1131, 520));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        labelnrr = new QLabel(widget);
        labelnrr->setObjectName("labelnrr");

        verticalLayout->addWidget(labelnrr);

        lineEdit_nrRodowodu = new QLineEdit(widget);
        lineEdit_nrRodowodu->setObjectName("lineEdit_nrRodowodu");

        verticalLayout->addWidget(lineEdit_nrRodowodu);

        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");

        verticalLayout->addWidget(label_2);

        lineEdit_imie = new QLineEdit(widget);
        lineEdit_imie->setObjectName("lineEdit_imie");

        verticalLayout->addWidget(lineEdit_imie);

        label_3 = new QLabel(widget);
        label_3->setObjectName("label_3");

        verticalLayout->addWidget(label_3);

        lineEdit_3 = new QLineEdit(widget);
        lineEdit_3->setObjectName("lineEdit_3");

        verticalLayout->addWidget(lineEdit_3);

        label_4 = new QLabel(widget);
        label_4->setObjectName("label_4");

        verticalLayout->addWidget(label_4);

        checkBox_2 = new QCheckBox(widget);
        checkBox_2->setObjectName("checkBox_2");

        verticalLayout->addWidget(checkBox_2);

        checkBox = new QCheckBox(widget);
        checkBox->setObjectName("checkBox");

        verticalLayout->addWidget(checkBox);

        label_5 = new QLabel(widget);
        label_5->setObjectName("label_5");

        verticalLayout->addWidget(label_5);

        lineEdit_4 = new QLineEdit(widget);
        lineEdit_4->setObjectName("lineEdit_4");

        verticalLayout->addWidget(lineEdit_4);

        label_6 = new QLabel(widget);
        label_6->setObjectName("label_6");

        verticalLayout->addWidget(label_6);

        lineEdit_5 = new QLineEdit(widget);
        lineEdit_5->setObjectName("lineEdit_5");

        verticalLayout->addWidget(lineEdit_5);

        label_7 = new QLabel(widget);
        label_7->setObjectName("label_7");

        verticalLayout->addWidget(label_7);

        lineEdit_6 = new QLineEdit(widget);
        lineEdit_6->setObjectName("lineEdit_6");

        verticalLayout->addWidget(lineEdit_6);

        label_8 = new QLabel(widget);
        label_8->setObjectName("label_8");

        verticalLayout->addWidget(label_8);

        lineEdit_7 = new QLineEdit(widget);
        lineEdit_7->setObjectName("lineEdit_7");

        verticalLayout->addWidget(lineEdit_7);

        label_9 = new QLabel(widget);
        label_9->setObjectName("label_9");

        verticalLayout->addWidget(label_9);

        lineEdit_8 = new QLineEdit(widget);
        lineEdit_8->setObjectName("lineEdit_8");

        verticalLayout->addWidget(lineEdit_8);


        retranslateUi(Dodajpsaokno);

        QMetaObject::connectSlotsByName(Dodajpsaokno);
    } // setupUi

    void retranslateUi(QDialog *Dodajpsaokno)
    {
        Dodajpsaokno->setWindowTitle(QCoreApplication::translate("Dodajpsaokno", "Dialog", nullptr));
        dodajpsalabel->setText(QCoreApplication::translate("Dodajpsaokno", "Dodaj psa", nullptr));
        pushButton_zatwierdz->setText(QCoreApplication::translate("Dodajpsaokno", "Zatwierdz", nullptr));
        labelnrr->setText(QCoreApplication::translate("Dodajpsaokno", "Nr Rodowodu", nullptr));
        label_2->setText(QCoreApplication::translate("Dodajpsaokno", "Imie", nullptr));
        label_3->setText(QCoreApplication::translate("Dodajpsaokno", "Wlasciciel", nullptr));
        label_4->setText(QCoreApplication::translate("Dodajpsaokno", "Plec", nullptr));
        checkBox_2->setText(QCoreApplication::translate("Dodajpsaokno", "Suka", nullptr));
        checkBox->setText(QCoreApplication::translate("Dodajpsaokno", "Pies", nullptr));
        label_5->setText(QCoreApplication::translate("Dodajpsaokno", "Id hodowcy ", nullptr));
        label_6->setText(QCoreApplication::translate("Dodajpsaokno", "Rasa", nullptr));
        lineEdit_5->setText(QString());
        label_7->setText(QCoreApplication::translate("Dodajpsaokno", "Nr tatua\305\274u", nullptr));
        label_8->setText(QCoreApplication::translate("Dodajpsaokno", "Chip", nullptr));
        label_9->setText(QCoreApplication::translate("Dodajpsaokno", "Rejestracja oddzialowa", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dodajpsaokno: public Ui_Dodajpsaokno {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DODAJPSAOKNO_KOPIA_H
