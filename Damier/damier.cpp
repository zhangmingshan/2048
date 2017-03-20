#include "damier.h"
#include <stdlib.h>
#include   <time.h>
using namespace std;
Damier::Damier(int l, int c, int vd)
{
    Alloc(l, c);
    Init(vd);
    srand(time(NULL));
    for(int i=0;i<500;i++){
        int indice=apparition_des_nombres2();
        if(indice==1)
            break;
    }
    srand(time(NULL));
    for(int i=0;i<500;i++){
        int indice2=apparition_des_nombres2();
        if(indice2==1)
            break;
    }
}

Damier::Damier(const Damier &D)
{
    Alloc(D.L, D.C);

    for(int i=0; i<L; i++)
        for(int j=0; j<C; j++)
            T[i][j] = D.T[i][j];

}


Damier::~Damier(){
    if (T != NULL) {
        Free();
        T = NULL;
    }
}

void Damier::Free(){
    for (int i=0; i<L; i++) {
        delete [] T[i];
    }
    delete [] T;
}

void Damier::Alloc(int l, int c){
    L = l;
    C = c;
    T = new int*[L];
    for(int i=0; i<L; i++)
        T[i] = new int[C];
}



void Damier::Init(int value){
    for(int i=0; i<L; i++)
        for(int j=0; j<C; j++)
            T[i][j]=value;
    }


int Damier::ajout_vers_le_haut(){
    int indice=0;
    for(int j=0;j<C;j++){
        int k=0;
        for(int i=0;i<L;i++){
            if(T[i][j]!=0){
                T[k][j]=T[i][j];
                if(k!=i)T[i][j]=0;
                k++;}
        }
    }
    for(int j=0;j<C;j++){
        for(int i=0;i<L-1;i++){
            if(T[i][j]==0)continue;
            if(T[i][j]==T[i+1][j]){
                T[i][j]=0;
                T[i+1][j]=2*T[i+1][j];
                indice=1;
            }
        }
    }
    return indice;
}

void Damier::vers_le_haut(){
    if(!damier_plein()){
        srand(time(NULL));
        for(int i=0;i<500;i++){
            int indice=apparition_des_nombres2();
            if(indice==1)
                break;
        }}
    if(fini_jeu()){
        cout<<'fini';
        return;}
    for(int i=0;i<5000;i++){
        int indice=ajout_vers_le_haut();
        if(indice==0)
            break;
    }
    for(int j=0;j<C;j++){
        int k=0;
        for(int i=0;i<L;i++){
            if(T[i][j]!=0){
                T[k][j]=T[i][j];
                if(k!=i)T[i][j]=0;
                k++;}
        }
    }
}

int Damier::ajout_vers_le_bas(){
    int indice=0;
    for(int j=0;j<C;j++){
        int k=L-1;
        for(int i=L-1;i>=0;i--){
            if(T[i][j]!=0){
                T[k][j]=T[i][j];
                if(k!=i)T[i][j]=0;
                k--;}
        }
    }
    for(int j=0;j<C;j++){
        for(int i=L-1;i>0;i--){
            if(T[i][j]==0)continue;
            if(T[i][j]==T[i-1][j]){
                T[i][j]=0;
                T[i-1][j]=2*T[i-1][j];
                indice=1;
            }
        }
    }
    return indice;
}

void Damier::vers_le_bas(){
    if(!damier_plein()){
        srand(time(NULL));
        for(int i=0;i<500;i++){
            int indice=apparition_des_nombres2();
            if(indice==1)
                break;
        }}
    if(fini_jeu()){
        cout<<'fini';
        return;}
    for(int i=0;i<5000;i++){
        int indice=ajout_vers_le_bas();
        if(indice==0)
            break;
}
    for(int j=0;j<C;j++){
        int k=L-1;
        for(int i=L-1;i>=0;i--){
            if(T[i][j]!=0){
                T[k][j]=T[i][j];
                if(k!=i)T[i][j]=0;
                k--;}
        }
    }
}

int Damier::ajout_vers_la_droite(){
    int indice=0;
    for(int i=0;i<L;i++){
        int k=C-1;
        for(int j=C-1;j>=0;j--){
            if(T[i][j]!=0){
                T[i][k]=T[i][j];
                if(k!=j)T[i][j]=0;
                k--;}
        }
    }
    for(int i=0;i<L;i++){
        for(int j=C-1;j>0;j--){
            if(T[i][j]==0)continue;
            if(T[i][j]==T[i][j-1]){
                T[i][j]=0;
                T[i][j-1]=2*T[i][j-1];
                indice=1;
            }
        }
    }
    return indice;


}

void Damier::vers_la_droite(){
    if(!damier_plein()){
        srand(time(NULL));
        for(int i=0;i<500;i++){
            int indice=apparition_des_nombres2();
            if(indice==1)
                break;
        }}
    if(fini_jeu()){
        cout<<'fini';
        return;}
    for(int i=0;i<5000;i++){
        int indice=ajout_vers_la_droite();
        if(indice==0)
            break;
    }
    for(int i=0;i<L;i++){
        int k=C-1;
        for(int j=C-1;j>=0;j--){
            if(T[i][j]!=0){
                T[i][k]=T[i][j];
                if(k!=j)T[i][j]=0;
                k--;}
        }
    }
}

int Damier::ajout_vers_le_gauche(){
    int indice=0;
    for(int i=0;i<L;i++){
        int k=0;
        for(int j=0;j<C;j++){
            if(T[i][j]!=0){
                T[i][k]=T[i][j];
                if(j!=k)T[i][j]=0;
                k++;}
        }
    }
    for(int i=0;i<L;i++){
        for(int j=0;j<C;j++){
            if(T[i][j]==0)continue;
            if(T[i][j]==T[i][j+1]){
                T[i][j]=0;
                T[i][j+1]=2*T[i][j+1];
                indice=1;
            }
        }
    }
    return indice;
}

void Damier::vers_le_gauche(){
    if(!damier_plein()){
        srand(time(NULL));
        for(int i=0;i<500;i++){
            int indice=apparition_des_nombres2();
            if(indice==1)
                break;
        }}
    if(fini_jeu()){
        cout<<'fini';
        return;}
    for(int i=0;i<5000;i++){
        int indice=ajout_vers_le_gauche();
        if(indice==0)
            break;
    }
    for(int i=0;i<L;i++){
        int k=0;
        for(int j=0;j<C;j++){
            if(T[i][j]!=0){
                T[i][k]=T[i][j];
                if(j!=k)T[i][j]=0;
                k++;}
        }
    }
}


void Damier::nouvel_jeu(){
    Init(0);
    srand(time(NULL));
    for(int i=0;i<500;i++){
        int indice=apparition_des_nombres2();
        if(indice==1)
            break;
    }
    srand(time(NULL));
    for(int i=0;i<500;i++){
        int indice2=apparition_des_nombres2();
        if(indice2==1)
            break;
    }
}

int Damier::damier_plein(){
    for(int i=0; i<L; i++)
        for(int j=0; j<C; j++){
            if(T[i][j]==0)
                return 0;
        }
    return 1;
}

int Damier::fini_jeu(){
    if(!damier_plein())
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

int Damier::apparition_des_nombres2(){
    int a=rand()%L;
    int b=rand()%C;
    if(T[a][b]==0){
        T[a][b]=2;
        return 1;
    }
    return 0;
}






void Damier::Print(){
    cout << endl;
    for(int i=0; i<L; i++) {
        cout << endl;
        for(int j=0; j<C; j++)
            cout << T[i][j] << ", ";
    }
}
