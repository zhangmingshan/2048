#ifndef JEU2048_H
#define JEU2048_H

#include <iostream>
#include <sstream>
#include <QObject>
#include <QString>
#include <QList>
#include <QColor>
#include <time.h>


//template<typename T>

using namespace std;


class Jeu:public QObject
{
    Q_OBJECT
    Q_PROPERTY(QList<int> cptQML READ readChiffre() NOTIFY cptChanged);
    Q_PROPERTY(QList<QString> couleur READ readCouleur() NOTIFY cptChanged);
    Q_PROPERTY(int rpoints READ get_points() NOTIFY cptChanged);
    Q_PROPERTY(int rmax READ get_maximum() NOTIFY cptChanged);
    Q_PROPERTY(int fini READ get_statue() NOTIFY cptChanged);
    Q_PROPERTY(int finiGagne READ get_statGagne() NOTIFY cptChanged);
    Q_PROPERTY(int finiPerdu READ get_statPerdu() NOTIFY cptChanged);

public:
    explicit Jeu(QObject *parent = 0);

    Q_INVOKABLE void InitJeu();
    Q_INVOKABLE void Start();
    Q_INVOKABLE int AjouteVersLeHaut();
    Q_INVOKABLE int AjouteVersLeBas();
    Q_INVOKABLE int AjouteVersLaGauche();
    Q_INVOKABLE int AjouteVersLaDroit();
    Q_INVOKABLE void VersLeHaut();
    Q_INVOKABLE void VersLeBas();
    Q_INVOKABLE void VersLaGauche();
    Q_INVOKABLE void VersLaDroit();
    Q_INVOKABLE int apparition_des_nombres1();
    Q_INVOKABLE int Plein();
    Q_INVOKABLE int FiniJeu();

    Q_INVOKABLE int get_points();
    Q_INVOKABLE int get_maximum();
    Q_INVOKABLE int get_statue();
    Q_INVOKABLE int get_statGagne();
    Q_INVOKABLE int get_statPerdu();

    QList<int> readChiffre();
    QList<QString> readCouleur();




signals:
    void cptChanged();

public slots:

private:
    int L = 4;
    int C = 4;
    int **T;
    QString **Co;
    int points;
    int maximum;
    int fini;
    int finiGagne;
    int finiPerdu;
};


#endif // JEU2048_H
