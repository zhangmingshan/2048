#ifndef JEU2048_H
#define JEU2048_H

#include <iostream>
#include <sstream>
#include <QObject>
#include <QString>

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
    Q_INVOKABLE void increment();
    Q_INVOKABLE void decrement();

    QString readChiffre();
    Q_PROPERTY(QString cptQML READ readChiffre() NOTIFY cptChanged);


signals:
    void cptChanged();

public slots:

private:

    // Méthode privée (factorisation  de code)
    /*void Alloc(int l, int c);
    void Free();
    bool sameDimensions (const Jeu &D);*/

    int X = 4;
    int Y = 4;
    int **Chiffre;
/*protected:
    int L;
    int C;
    int** T;
    int Max;*/
};


#endif // JEU2048_H
