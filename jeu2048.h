#ifndef JEU2048_H
#define JEU2048_H

#include <iostream>
#include <sstream>
#include <QObject>
#include <QString>
#include <QList>
#include <time.h>

//template<typename T>

using namespace std;


class Jeu:public QObject
{
    Q_OBJECT
    Q_PROPERTY(QList<int> cptQML READ readChiffre() NOTIFY cptChanged);
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

    QList<int> readChiffre();


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
