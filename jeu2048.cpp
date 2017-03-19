#include "jeu2048.h"

Jeu::Jeu(QObject *parent) : QObject(parent)
{
    Chiffre = new int*[X];
        for(int i=0; i<X; i++)
            Chiffre[i] = new int[Y];
    for(int i=0; i<X; i++)
            for(int j=0; j<Y; j++)
                Chiffre[i][j]=0;
    cptChanged();
}

QString Jeu::readChiffre()
{
    return QString::number(**Chiffre);
}

void Jeu::increment() {
    for(int i=0; i<X; i++)
            for(int j=0; j<Y; j++)
                Chiffre[i][j]++;
    cptChanged();
}

void Jeu::decrement() {
    for(int i=0; i<X; i++)
            for(int j=0; j<Y; j++)
                Chiffre[i][j]--;
    cptChanged();
}


//Jeu::Jeu(int l, int c, int vm, int value)
//{
//    Alloc(l, c);
//    Max = vm;
//    Init(value);
//    InitJeu();
//}


//Jeu::Jeu(const Jeu &D)
//{
//    Alloc(D.L, D.C);
//    for(int i=0; i<L; i++)
//        for(int j=0; j<C; j++)
//            T[i][j] = D.T[i][j];
//}


//Jeu::~Jeu(){
//    if (T != NULL) {
//        Free();
//        T = NULL;
//    }
//}

//void Jeu::Free(){
//    for (int i=0; i<L; i++) {
//        delete [] T[i];
//    }
//    delete [] T;
//}

//void Jeu::Alloc(int l, int c){
//    L = l;
//    C = c;
//    T = new int*[L];
//    for(int i=0; i<L; i++)
//        T[i] = new int[C];
//}

//void Jeu::Print(){
//    cout << endl;
//    for(int i=0; i<L; i++) {
//        cout << endl;
//        for(int j=0; j<C; j++)
//            cout << T[i][j] << ", ";
//    }
//}

//void Jeu::Init(int value){
//    /*if ((value<0) || (value>=Max)) {
//        string file(__FILE__);
//        string fonction(__PRETTY_FUNCTION__);
//        borne e(value, Max, file, fonction);
//        throw(e);
//    }*/
//    for(int i=0; i<L; i++)
//        for(int j=0; j<C; j++)
//            T[i][j]=value;
//}

//void Jeu::InitJeu(){
//    Init(0);
//    int l1 = rand()%L;
//    int c1 = rand()%C;
//    int l2;
//    int c2;
//    do{
//        l2 = rand()%4;
//        c2 = rand()%4;
//    }
//    while (l1==l2||c1==c2);

//}

//void IndiceValide (int x, int y, int l, int c)
//{
//    if(x<0||x>l||y<0||y>c)
//        throw("Acces case du Damier incorrecte");
//}

//void Jeu::Set(int x, int y, int value) {

//    /*if (value<0||value>Max)
//    {
//        string file(__FILE__);
//        string fonction(__PRETTY_FUNCTION__);
//        borne e(value,Max,file,fonction);
//        throw (e);
//    }*/
//    IndiceValide(x,y,L,C);
//    T[x][y]=value;
//}


//void Jeu::ReDim(int l, int c, int vd) {
//    Free();
//    Alloc(l, c);
//    Init(vd);
//}

// /*void Jeu::Aleatoire(){
//    int l;
//    int c;
//    int n;
//    do{
//    l = rand()/4;
//    c = rand()/4;
//    n;
//    for(int i=0; i<L; i++)
//        for(int j=0; j<C; j++)
//        {
//            n = T[i][j];
//        }
//    }
//    while(n!=0);
//    T[l][c] = 2;
//}*/


//Jeu& Jeu::operator= (const Jeu &D){
//    if ( this != &D) { // protection autoréférence
//        Free();
//        Alloc(D.L, D.C);
//        for(int i=0; i<L; i++)
//            for(int j=0; j<C; j++)
//                T[i][j] = D.T[i][j];
//    }
//    return *this;
//}

//bool Jeu::sameDimensions (const Jeu &D) {
//    if ((L == D.L) && (C == D.C))
//        return true;
//    return false;
//}

//Jeu& Jeu::operator+= (int c)
//{
//    for(int i=0; i<L; i++)
//        for(int j=0; j<C; j++)
//            T[i][j] += c;
//    return *this;
//}

//Jeu& Jeu::operator+= (const Jeu &D)
//{
//    if (!sameDimensions(D)){
//        cerr << endl << __PRETTY_FUNCTION__ << " - Dimensions différentes !\n";
//        exit(1);
//    }
//    for(int i=0; i<L; i++)
//        for(int j=0; j<C; j++)
//            T[i][j] += D.T[i][j];
//    return *this;
//}


//Jeu Jeu::operator+ (const Jeu &D1)
//{
//    if (!sameDimensions(D1)){
//        cerr << endl << __PRETTY_FUNCTION__ << " - Dimensions différentes !\n";
//        exit(1);
//    }

//    Jeu D(D1.L, D1.C,Max);
//    for(int i=0; i<L; i++)
//        for(int j=0; j<C; j++)
//            D.T[i][j] = T[i][j]+D1.T[i][j];

//    return D;
//}

//ostream& operator<< (ostream& sortie, Jeu& V)
//{
//    sortie << endl;
//    for(int i=0; i<V.L; i++) {
//        sortie << endl;
//        for(int j=0; j<V.C; j++)
//            sortie << V.T[i][j] << ", ";
//    }

//    return sortie;
//}

