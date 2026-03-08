#ifndef ADDPEDIGREETHREAD_H
#define ADDPEDIGREETHREAD_H

#include <QThread>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QString>
#include <QSqlError>

class AddPedigreeThread : public QThread
{
    Q_OBJECT
public:
    AddPedigreeThread(const QString &nrRodowodu, const QString &rasa, const QString &nrTatuazu, const QString &chip, const QString &rejestr, int idHodowcy, QObject *parent = nullptr)
        : QThread(parent), nrRodowodu(nrRodowodu), rasa(rasa), nrTatuazu(nrTatuazu), chip(chip), rejestr(rejestr), idHodowcy(idHodowcy) {}

signals:
    void success();
    void error(const QString &errMsg);

protected:
    void run() override {
        QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE", "pedigreeConnection");
        db.setDatabaseName("C:/Users/User/Desktop/Rodowody.db");
        if (!db.open()) {
            emit error(db.lastError().text());
            return;
        }

        QSqlQuery qry(db);
        qry.prepare("INSERT INTO Rodowod (Nr_rodowodu, Rasa, NR_tatuazu, Chip, Rejestracja_oddzialowa, Id_hodowcy) VALUES (:Nr_rodowodu, :Rasa, :NR_tatuazu, :Chip, :Rejestracja_oddzialowa, :Id_hodowcy)");
        qry.bindValue(":Nr_rodowodu", nrRodowodu);
        qry.bindValue(":Rasa", rasa);
        qry.bindValue(":NR_tatuazu", nrTatuazu);
        qry.bindValue(":Chip", chip);
        qry.bindValue(":Rejestracja_oddzialowa", rejestr);
        qry.bindValue(":Id_hodowcy", idHodowcy);

        if (!qry.exec()) {
            emit error(qry.lastError().text());
        } else {
            emit success();
        }

        db.close();
    }

private:
    QString nrRodowodu;
    QString rasa;
    QString nrTatuazu;
    QString chip;
    QString rejestr;
    int idHodowcy;
};

#endif // ADDPEDIGREETHREAD_H
