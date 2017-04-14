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

QList<QString> Jeu::readCouleur(){
   QList <QString> testc;
    for(int i=0; i<L; i++)
            for(int j=0; j<C; j++){
                switch (T[i][j]) {
                case 0:{
                    Co[i][j] = "#B0B0B0";
                    break;}
                case 1:{
                    Co[i][j] = "#A4D3EE";
                    break;}
                case 2:{
                    Co[i][j] = "#6495ED";
                    break;}
                case 4:{
                    Co[i][j] = "#98FB98";
                    break;}
                case 8:{
                    Co[i][j] = "#9BCD9B";
                    break;}
                case 16:{
                    Co[i][j] = "#9F79EE";
                    break;}
                case 32:{
                    Co[i][j] = "#9932CC";
                    break;}
                case 64:{
                    Co[i][j] = "#CD5555";
                    break;}
                case 128:{
                    Co[i][j] = "#FFE4C4";
                    break;}
                case 256:{
                    Co[i][j] = "#EEC591";
                    break;}
                case 512:{
                    Co[i][j] = "#F08080";
                    break;}
                case 1024:{
                    Co[i][j] = "#FFFF00";
                    break;}
                case 2048:{
                    Co[i][j] = "#FF0000";
                    break;}
                default:
                    break;
                }
                testc.append(Co[i][j]);
            }

    return QList<QString>(testc);

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

    Co = new QString*[L];
    for(int i=0; i<L; i++)
        Co[i] = new QString[C];
    for(int i=0; i<L; i++)
            for(int j=0; j<C; j++)
                Co[i][j]="#B0B0B0";

    cptChanged();
}

void Jeu::Start()
{
    int indice = 0;
    for(int i=0; i<L; i++)
        for(int j=0; j<C; j++){
            if(T[i][j]!=0)
                indice = 1;
        }
    if(indice == 0){
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

int Jeu::get_maximum(){
    maximum = 0;
    for(int i=0; i<L; i++){
        for(int j=0; j<C; j++){
            if(T[i][j]>maximum)
                maximum=T[i][j];
            }
    }
    return maximum;
}

int Jeu::get_points(){
    points = 0;
    for(int i=0; i<L; i++){
        for(int j=0; j<C; j++){
            points=points+T[i][j]*int(log2(T[i][j]));
            }
    }
    return points;
}

int Jeu::get_statue(){
    fini = 0;
    if(Jeu::Plein() == 1)
        fini = 1;
    if(Jeu::get_maximum() == 1024)
        fini = 1;
    return fini;
}
int Jeu::get_statGagne(){
    finiGagne = 0;
    if(Jeu::get_maximum() == 1024)
        finiGagne = 1;
    return finiGagne;
}

int Jeu::get_statPerdu(){
    finiPerdu = 0;
    if(Jeu::Plein() == 1)
        finiPerdu = 1;
    return finiPerdu;
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
        if(indice){
            apparition_des_nombres1();
        }

    }

    if(FiniJeu()){
        cout<<'fini';
        return;}
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
        if(indice == 1)
            apparition_des_nombres1();
    }
    if(FiniJeu()){
        cout<<'fini';
        return;}

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
        if(indice == 1)
            apparition_des_nombres1();
    }
    if(FiniJeu()){
        cout<<'fini';
        return;}
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
        if (indice == 1)
            apparition_des_nombres1();
    }
    if(FiniJeu()){
        cout<<'fini';
        return;}

    cptChanged();
}

