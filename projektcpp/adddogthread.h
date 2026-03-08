#ifndef ADDDOGTHREAD_H
#define ADDDOGTHREAD_H

#include <QThread>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QString>
#include <QSqlError>

class AddDogThread : public QThread
{
    Q_OBJECT
public:
    AddDogThread(const QString &nrRodowodu, const QString &imie, const QString &wlasciciel, int plec, int idHodowcy, QObject *parent = nullptr)
        : QThread(parent), nrRodowodu(nrRodowodu), imie(imie), wlasciciel(wlasciciel), plec(plec), idHodowcy(idHodowcy) {}

signals:
    void success();
    void error(const QString &errMsg);

protected:
    void run() override {
        QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE", "dogConnection");
        db.setDatabaseName("C:/Users/User/Desktop/Rodowody.db");
        if (!db.open()) {
            emit error(db.lastError().text());
            return;
        }

        QSqlQuery qry(db);
        qry.prepare("INSERT INTO Pies (Nr_rodowodu, Imie, Wlasciciel, Plec, Id_hodowcy) VALUES (:nrRodowodu, :imie, :wlasciciel, :plec, :idHodowcy)");
        qry.bindValue(":nrRodowodu", nrRodowodu);
        qry.bindValue(":imie", imie);
        qry.bindValue(":wlasciciel", wlasciciel);
        qry.bindValue(":plec", plec);
        qry.bindValue(":idHodowcy", idHodowcy);

        if (!qry.exec()) {
            emit error(qry.lastError().text());
        } else {
            emit success();
        }

        db.close();
    }

private:
    QString nrRodowodu;
    QString imie;
    QString wlasciciel;
    int plec;
    int idHodowcy;
};

#endif // ADDDOGTHREAD_H
