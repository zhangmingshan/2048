#include "jeu2048.h"


Jeu::Jeu(QObject *parent) : QObject(parent)
{
    InitJeu();
}

QList<int> Jeu::readChiffre(){
   QList <int> test;
    for(int i=0; i<L; i++)
            for(int j=0; j<C; j++)
                test.append(T[i][j]);
    return QList<int>(test);

}


int Jeu::apparition_des_nombres1(){
    int a=rand()%L;
    int b=rand()%C;
    if(T[a][b]==0){
        T[a][b]=1;
        return 1;
    }
    return 0;
}

void Jeu::InitJeu()
{
    T = new int*[L];
    for(int i=0; i<L; i++)
        T[i] = new int[C];
    for(int i=0; i<L; i++)
            for(int j=0; j<C; j++)
                T[i][j]=0;
    cptChanged();
}

void Jeu::Start()
{
    srand(time(NULL));
        for(int i=0;i<500;i++){
            int indice=apparition_des_nombres1();
            if(indice==1)
                break;
        }
    srand(time(NULL));
        for(int i=0;i<500;i++){
            int indice2=apparition_des_nombres1();
            if(indice2==1)
                break;
    }
    cptChanged();
}

int Jeu::Plein(){
    for(int i=0; i<L; i++)
        for(int j=0; j<C; j++){
            if(T[i][j]==0)
                return 0;
        }
    return 1;
}

int Jeu::AjouteVersLeHaut(){
    int indice=0;
    for(int j=0;j<C;j++){
        int k=0;
        for(int i=0;i<L;i++){
            if(T[i][j]!=0){
                T[k][j]=T[i][j];
                if(k!=i){
                    T[i][j]=0;
                    indice = 1;
                }
                k++;}
        }
    }
    for(int j=0;j<C;j++){
        for(int i=0;i<L-1;i++){
            if(T[i][j]==0)continue;
            if(T[i][j]==T[i+1][j]){
                T[i+1][j]=0;
                T[i][j]=2*T[i][j];
                indice=1;
            }
        }
    }
    return indice;
}





void Jeu::VersLeHaut(){
    int indice=AjouteVersLeHaut();
    for(int j=0;j<C;j++){
        int k=0;
        for(int i=0;i<L;i++){
            if(T[i][j]!=0){
                T[k][j]=T[i][j];
                if(k!=i){
                    T[i][j]=0;
                    indice = 1;}
                k++;}
        }
    }
    if(!Plein()){
        srand(time(NULL));
//        for(int i=0;i<500;i++){
//            int indice=apparition_des_nombres1();
//            if(indice==1)
//                break;
//        }

        if(indice){
            apparition_des_nombres1();
        }

    }

    if(FiniJeu()){
        cout<<'fini';
        return;}

//    for(int i=0;i<5000;i++){
//        int indice=AjouteVersLeHaut();
//        if(indice==0)
//            break;
//    }

    cptChanged();
}

int Jeu::FiniJeu(){
    if(!Plein())
        return 0;
    for(int i=0;i<L;i++)
        for(int j=0;j<C-1;j++)
            if(T[i][j]==T[i][j+1])
                return 0;
    for(int j=0;j<C;j++)
        for(int i=0;i<L-1;i++)
            if(T[i][j]==T[i+1][j])
                return 0;
    return 1;
}

int Jeu::AjouteVersLeBas(){
    int indice=0;
    for(int j=0;j<C;j++){
        int k=L-1;
        for(int i=L-1;i>=0;i--){
            if(T[i][j]!=0){
                T[k][j]=T[i][j];
                if(k!=i){
                    T[i][j]=0;
                    indice = 1;
                }
                k--;}
        }
    }
    for(int j=0;j<C;j++){
        for(int i=L-1;i>0;i--){
            if(T[i][j]==0)continue;
            if(T[i][j]==T[i-1][j]){
                T[i-1][j]=0;
                T[i][j]=2*T[i][j];
                indice=1;
            }
        }
    }
    return indice;
}

void Jeu::VersLeBas(){
    int indice=AjouteVersLeBas();
    for(int j=0;j<C;j++){
        int k=L-1;
        for(int i=L-1;i>=0;i--){
            if(T[i][j]!=0){
                T[k][j]=T[i][j];
                if(k!=i)T[i][j]=0;
                k--;}
        }
    }
    if(!Plein()){
        srand(time(NULL));
//        for(int i=0;i<500;i++){
//            int indice=apparition_des_nombres1();
//            if(indice==1)
//                break;
//        }

        if(indice == 1)
            apparition_des_nombres1();
    }
    if(FiniJeu()){
        cout<<'fini';
        return;}

//    for(int i=0;i<5000;i++){
//        int indice=AjouteVersLeBas();
//        if(indice==0)
//            break;
//}

    cptChanged();
}

int Jeu::AjouteVersLaDroit(){
    int indice=0;
    for(int i=0;i<L;i++){
        int k=C-1;
        for(int j=C-1;j>=0;j--){
            if(T[i][j]!=0){
                T[i][k]=T[i][j];
                if(k!=j){
                    T[i][j]=0;
                    indice = 1;
                }
                k--;}
        }
    }
    for(int i=0;i<L;i++){
        for(int j=C-1;j>0;j--){
            if(T[i][j]==0)continue;
            if(T[i][j]==T[i][j-1]){
                T[i][j-1]=0;
                T[i][j]=2*T[i][j];
                indice=1;
            }
        }
    }
    return indice;


}

void Jeu::VersLaDroit(){
    int indice=AjouteVersLaDroit();
    for(int i=0;i<L;i++){
        int k=C-1;
        for(int j=C-1;j>=0;j--){
            if(T[i][j]!=0){
                T[i][k]=T[i][j];
                if(k!=j)T[i][j]=0;
                k--;}
        }
    }
    if(!Plein()){
        srand(time(NULL));
//        for(int i=0;i<500;i++){
//            int indice=apparition_des_nombres1();
//            if(indice==1)
//                break;
//        }

        if(indice == 1)
            apparition_des_nombres1();
    }
    if(FiniJeu()){
        cout<<'fini';
        return;}

//    for(int i=0;i<5000;i++){
//        int indice=AjouteVersLaDroit();
//        if(indice==0)
//            break;
//    }

    cptChanged();
}

int Jeu::AjouteVersLaGauche(){
    int indice=0;
    for(int i=0;i<L;i++){
        int k=0;
        for(int j=0;j<C;j++){
            if(T[i][j]!=0){
                T[i][k]=T[i][j];
                if(j!=k){
                    T[i][j]=0;
                    indice = 1;
                }
                k++;}
        }
    }
    for(int i=0;i<L;i++){
        for(int j=0;j<C;j++){
            if(T[i][j]==0)continue;
            if(T[i][j]==T[i][j+1]){
                T[i][j+1]=0;
                T[i][j]=2*T[i][j];
                indice=1;
            }
        }
    }
    return indice;
}

void Jeu::VersLaGauche(){
    int indice=AjouteVersLaGauche();
    for(int i=0;i<L;i++){
        int k=0;
        for(int j=0;j<C;j++){
            if(T[i][j]!=0){
                T[i][k]=T[i][j];
                if(j!=k)T[i][j]=0;
                k++;}
        }
    }
    if(!Plein()){
        srand(time(NULL));
//        for(int i=0;i<500;i++){
//            int indice=apparition_des_nombres1();
//            if(indice==1)
//                break;
//        }

        if (indice == 1)
            apparition_des_nombres1();
    }
    if(FiniJeu()){
        cout<<'fini';
        return;}

//    for(int i=0;i<5000;i++){
//        int indice=AjouteVersLaGauche();
//        if(indice==0)
//            break;
//    }

    cptChanged();
}


//void Jeu::increment() {
//    for(int i=0; i<X; i++)
//            for(int j=0; j<Y; j++)
//                Chiffre[i][j]++;
//    cptChanged();
//}

//void Jeu::decrement() {
//    for(int i=0; i<X; i++)
//            for(int j=0; j<Y; j++)
//                Chiffre[i][j]--;
//    cptChanged();
//}


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

