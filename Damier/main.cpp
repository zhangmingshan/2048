#include <iostream>
#include <damier.h>

using namespace std;
int main()
{
    Damier D(4,4);
    D.Print();
    D.vers_le_gauche();
    D.Print();
    D.vers_la_droite();
    D.Print();
    D.vers_le_bas();
    D.Print();
    D.vers_le_haut();
    D.Print();



    return 1;
}
