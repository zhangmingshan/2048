#ifndef JEU2048_H
#define JEU2048_H

#include <iostream>
#include <sstream>
#include <QObject>
#include <QString>
#include <time.h>

using namespace std;


class Jeu:public QObject
{
    Q_OBJECT
/*public:
    Jeu(int l, int c, int vm, int value = 0);
    Jeu(const Jeu &D);
    ~Jeu();


    Jeu& operator=  (const Jeu &D); // opérateur d'affectation
    Jeu& operator+= (const Jeu &D);
    Jeu& operator+= (int c);
    Jeu  operator+  (const Jeu &D);
    friend ostream& operator<< (ostream& sortie, Jeu& V);

    void Print();
    void Init(int value);
    void InitJeu();
    void Set(int x, int y, int value);
    void ReDim(int l, int c, int vd = 0);
*/
public:
    explicit Jeu(QObject *parent = 0);
//    Q_INVOKABLE void increment();
//    Q_INVOKABLE void decrement();

    Q_INVOKABLE void InitJeu();

    Q_INVOKABLE int AjouteVersLeHaut();
    Q_INVOKABLE int AjouteVersLeBas();
    Q_INVOKABLE int AjouteVersLaGauche();
    Q_INVOKABLE int AjouteVersLaDroit();
    Q_INVOKABLE void VersLeHaut();
    Q_INVOKABLE void VersLeBas();
    Q_INVOKABLE void VersLaGauche();
    Q_INVOKABLE void VersLaDroit();
//    Q_INVOKABLE void Aleatoire();
    Q_INVOKABLE int apparition_des_nombres2();
    Q_INVOKABLE int Plein();
    Q_INVOKABLE int FiniJeu();

    QString readChiffre11();
    QString readChiffre12();
    QString readChiffre13();
    QString readChiffre14();
    QString readChiffre21();
    QString readChiffre22();
    QString readChiffre23();
    QString readChiffre24();
    QString readChiffre31();
    QString readChiffre32();
    QString readChiffre33();
    QString readChiffre34();
    QString readChiffre41();
    QString readChiffre42();
    QString readChiffre43();
    QString readChiffre44();
    Q_PROPERTY(QString cptQML11 READ readChiffre11() NOTIFY cptChanged);
    Q_PROPERTY(QString cptQML12 READ readChiffre12() NOTIFY cptChanged);
    Q_PROPERTY(QString cptQML13 READ readChiffre13() NOTIFY cptChanged);
    Q_PROPERTY(QString cptQML14 READ readChiffre14() NOTIFY cptChanged);
    Q_PROPERTY(QString cptQML21 READ readChiffre21() NOTIFY cptChanged);
    Q_PROPERTY(QString cptQML22 READ readChiffre22() NOTIFY cptChanged);
    Q_PROPERTY(QString cptQML23 READ readChiffre23() NOTIFY cptChanged);
    Q_PROPERTY(QString cptQML24 READ readChiffre24() NOTIFY cptChanged);
    Q_PROPERTY(QString cptQML31 READ readChiffre31() NOTIFY cptChanged);
    Q_PROPERTY(QString cptQML32 READ readChiffre32() NOTIFY cptChanged);
    Q_PROPERTY(QString cptQML33 READ readChiffre33() NOTIFY cptChanged);
    Q_PROPERTY(QString cptQML34 READ readChiffre34() NOTIFY cptChanged);
    Q_PROPERTY(QString cptQML41 READ readChiffre41() NOTIFY cptChanged);
    Q_PROPERTY(QString cptQML42 READ readChiffre42() NOTIFY cptChanged);
    Q_PROPERTY(QString cptQML43 READ readChiffre43() NOTIFY cptChanged);
    Q_PROPERTY(QString cptQML44 READ readChiffre44() NOTIFY cptChanged);


signals:
    void cptChanged();

public slots:

private:

    // Méthode privée (factorisation  de code)
    /*void Alloc(int l, int c);
    void Free();
    bool sameDimensions (const Jeu &D);*/

    int L = 4;
    int C = 4;
    int **T;
/*protected:
    int L;
    int C;
    int** T;
    int Max;*/
};


#endif // JEU2048_H
