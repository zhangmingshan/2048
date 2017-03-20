#ifndef DAMIER_H
#define DAMIER_H


#include <iostream>

using namespace std;

class Damier
{
public:
    Damier(int l, int c, int vd=0);
    Damier(const Damier &D);
    ~Damier();
    void Init(int value);

    int ajout_vers_le_haut();
    void vers_le_haut();
    int ajout_vers_le_bas();
    void vers_le_bas();
    int ajout_vers_la_droite();
    void vers_la_droite();
    int ajout_vers_le_gauche();
    void vers_le_gauche();

    void nouvel_jeu();
    int damier_plein();
    int apparition_des_nombres2();
    int fini_jeu();



    void Print();

private:
    int L;
    int C;
    int** T;


    // Méthode privée (factorisation  de code)
    void Alloc(int l, int c);
    void Free();
};


#endif // DAMIER_H
