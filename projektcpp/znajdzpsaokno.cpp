#include "znajdzpsaokno.h"
#include "ui_znajdzpsaokno.h"
#include <QSqlQuery>
#include <QSqlRecord>
#include <QTableWidget>
#include <QTableWidgetItem>
QString plec_pies="8";
Znajdzpsaokno::Znajdzpsaokno(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Znajdzpsaokno)
{
    ui->setupUi(this);
    mydb = QSqlDatabase::addDatabase("QSQLITE");
    mydb.setDatabaseName("C:/Users/User/Desktop/Rodowody.db");

    if (mydb.open())
    {
        ui->label->setText("dziala!!!!!!!");
    }
     if (!mydb.open())
    {
         ui->label->setText("dupa nie dizala :(");
 }
}

 Znajdzpsaokno::~Znajdzpsaokno()
{
    delete ui;
}

// void Znajdzpsaokno::on_Button_zp_wyszukaj_clicked()
// {
//     QString imie_psa, nr_rodowodu, wlasciciel, plec;
//     imie_psa= ui->lineEdit_zpimie->text();
//     nr_rodowodu= ui->lineEdit_zpnrr -> text();
//     if (!mydb.isOpen())
//     {
//         ui->label->setText("dupa nie dizala :(");
//     }
//     QSqlQuery qry;
//     if(qry.exec("select * from PIES where Imie='"+imie_psa+"'"))
//     {
//         int count;
//         while(qry.next())
//         {
//             count++;
//         }
//         if(count==1)
//             ui->label->setText("znaleziono psa");
//     }
// }
void Znajdzpsaokno::on_pushButton_suka_clicked()
{
    plec_pies = "0";
}

void Znajdzpsaokno::on_pushButton_pies_clicked()
{
     plec_pies = "1";
    ui->label->setText("dupa nie dizala :(");
}
void Znajdzpsaokno::on_Button_zp_wyszukaj_clicked()
{
    QString imie_psa = ui->lineEdit_zpimie->text();
    QString nr_rodowodu = ui->lineEdit_zpnrr->text();
    QString wlasciciel = ui->lineEdit_zpimie->text();
    ////////////
    QSqlQuery qry;
    QString queryStr = "SELECT PIES.*, Hodowla.Nazwa_hodowli AS Hodowca FROM PIES "
                       "LEFT JOIN Hodowla ON PIES.Id_hodowcy = Hodowla.Id_hodowcy";
    ///

    if (!mydb.isOpen())
    {
        ui->label->setText("Database is not open :(");
        return;
    }

    // QSqlQuery qry;
    // QString queryStr = "SELECT * FROM PIES";

    // Adding conditions if the fields are not empty
    if (!imie_psa.isEmpty() || !nr_rodowodu.isEmpty())
    {
        queryStr += " WHERE";
        bool firstCondition = true;

        if (!imie_psa.isEmpty())
        {
            queryStr += " Imie='" + imie_psa + "'";
            firstCondition = false;
        }
        if (!nr_rodowodu.isEmpty())
        {
            if (!firstCondition)
                queryStr += " AND";
            queryStr += " Nr_rodowodu='" + nr_rodowodu + "'";
            firstCondition = false;
        }

        if (plec_pies!="8")
         {

            if (!firstCondition)
                queryStr += " AND";
            queryStr += " PIES.Plec='" + plec_pies + "'";
        }
    }

    if (qry.exec(queryStr))
    {
        int rowCount = 0;
        int columnCount = qry.record().count();

        // Setting up the table widget
        ui->tableWidget->setRowCount(0);
        ui->tableWidget->setColumnCount(columnCount);

        // Setting the header labels
        QStringList headers;
        for (int i = 0; i < columnCount; i++)
        {

                headers << qry.record().fieldName(i);
        }
        ui->tableWidget->setHorizontalHeaderLabels(headers);

        while (qry.next())
        {
            ui->tableWidget->insertRow(rowCount);
            for (int i = 0; i < columnCount; i++)
            {
                if (i==columnCount-3)
                {
                    if(qry.value(i)==0)
                    {
                    QTableWidgetItem *item = new QTableWidgetItem("SUKA");
                    ui->tableWidget->setItem(rowCount, i, item);
                    }
                    if(qry.value(i)==1)
                    {
                        QTableWidgetItem *item = new QTableWidgetItem("PIES");
                        ui->tableWidget->setItem(rowCount, i, item);
                    }
                }
                else {

                QTableWidgetItem *item = new QTableWidgetItem(qry.value(i).toString());
                        ui->tableWidget->setItem(rowCount, i, item);}
            }
            rowCount++;
        }

        if (rowCount == 0)
        {
            ui->label->setText("No dog found");
        }
        else
        {
            ui->label->setText(QString::number(rowCount) + " dog(s) found");
        }
    }
    else
    {
        ui->label->setText("Query execution failed");
    }
}






void Znajdzpsaokno::on_Button_zp_wyszukaj_2_clicked()
{
    QString imie_psa = ui->lineEdit_zpimie->text();
    QString nr_rodowodu = ui->lineEdit_zpnrr->text();
    QString wlasciciel = ui->lineEdit_zpimie->text();
    ////////////
    QSqlQuery qry;
    QString queryStr = "SELECT * FROM Rodowod ";
    ///

    if (!mydb.isOpen())
    {
        ui->label->setText("Database is not open :(");
        return;
    }

    // QSqlQuery qry;
    // QString queryStr = "SELECT * FROM PIES";

    // Adding conditions if the fields are not empty
    if ( !nr_rodowodu.isEmpty())
    {
        queryStr += " WHERE";
        bool firstCondition = true;

        if (!nr_rodowodu.isEmpty())
        {

            queryStr += " Nr_rodowodu='" + nr_rodowodu + "'";
            firstCondition = false;
        }

    }

    if (qry.exec(queryStr))
    {
        int rowCount = 0;
        int columnCount = qry.record().count();

        // Setting up the table widget
        ui->tableWidget->setRowCount(0);
        ui->tableWidget->setColumnCount(columnCount);

        // Setting the header labels
        QStringList headers;
        for (int i = 0; i < columnCount; i++)
        {

            headers << qry.record().fieldName(i);
        }
        ui->tableWidget->setHorizontalHeaderLabels(headers);

        while (qry.next())
        {
            ui->tableWidget->insertRow(rowCount);
            for (int i = 0; i < columnCount; i++)
            {
                if (i==columnCount-3)
                {
                    if(qry.value(i)==0)
                    {
                        QTableWidgetItem *item = new QTableWidgetItem("SUKA");
                        ui->tableWidget->setItem(rowCount, i, item);
                    }
                    if(qry.value(i)==1)
                    {
                        QTableWidgetItem *item = new QTableWidgetItem("PIES");
                        ui->tableWidget->setItem(rowCount, i, item);
                    }
                }
                else {

                    QTableWidgetItem *item = new QTableWidgetItem(qry.value(i).toString());
                    ui->tableWidget->setItem(rowCount, i, item);}
            }
            rowCount++;
        }

        if (rowCount == 0)
        {
            ui->label->setText("No dog found");
        }
        else
        {
            ui->label->setText(QString::number(rowCount) + " dog(s) found");
        }
    }
    else
    {
        ui->label->setText("Query execution failed");
    }
}

