#include "dodajpsa.h"
#include "ui_dodajpsa.h"
#include "adddogthread.h"
#include "addpedigreethread.h"
#include <QSqlQuery>
#include <QSqlError>
#include <QSqlRecord>
#include <QTableWidget>
#include <QTableWidgetItem>
#include <QMessageBox>

dodajpsa::dodajpsa(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::dodajpsa)
{
    ui->setupUi(this);
    mydb = QSqlDatabase::addDatabase("QSQLITE");
    mydb.setDatabaseName("C:/Users/User/Desktop/Rodowody.db");

    if (mydb.open()) {
        // ui->label->setText("Połączenie z bazą danych zostało nawiązane!");
    } else {
        QMessageBox::critical(this, "Błąd bazy danych", mydb.lastError().text());
    }
}

dodajpsa::~dodajpsa()
{
    delete ui;
}

void dodajpsa::on_pushButton_zatwierdz_clicked()
{
    QString nrRodowodu = ui->lineEdit_nrRodowodu->text();
    QString imie = ui->lineEdit_imie->text();
    QString wlasciciel = ui->lineEdit_wlasciciel->text();
    QString rasa = ui->lineEdit_rasa->text();
    QString nrTatuazu = ui->lineEdit_nrTatuazu->text();
    QString chip = ui->lineEdit_chip->text();
    QString rejestr = ui->lineEdit_rejestracjaOddzialowa->text();

    int plec = ui->comboBox_plec->currentIndex(); // Assuming 0 is Suka and 1 is Pies
    int idHodowcy = ui->lineEdit_idHodowcy->text().toInt();

    if (nrRodowodu.isEmpty() || imie.isEmpty() || wlasciciel.isEmpty() || idHodowcy == 0) {
        QMessageBox::warning(this, "Błąd danych", "Proszę wypełnić wszystkie wymagane pola.");
        return;
    }

    AddDogThread *dogThread = new AddDogThread(nrRodowodu, imie, wlasciciel, plec, idHodowcy, this);
    AddPedigreeThread *pedigreeThread = new AddPedigreeThread(nrRodowodu, rasa, nrTatuazu, chip, rejestr, idHodowcy, this);

    connect(dogThread, &AddDogThread::success, this, []() {
        QMessageBox::information(nullptr, "Sukces", "Rekord psa został dodany pomyślnie!");
    });
    connect(dogThread, &AddDogThread::error, this, [](const QString &errMsg) {
        QMessageBox::critical(nullptr, "Błąd bazy danych", errMsg);
    });

    connect(pedigreeThread, &AddPedigreeThread::success, this, []() {
        QMessageBox::information(nullptr, "Sukces", "Rekord rodowodu został dodany pomyślnie!");
    });
    connect(pedigreeThread, &AddPedigreeThread::error, this, [](const QString &errMsg) {
        QMessageBox::critical(nullptr, "Błąd bazy danych", errMsg);
    });

    dogThread->start();
    pedigreeThread->start();
}
