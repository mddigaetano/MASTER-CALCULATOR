#include "header.h"

void InputSistemi2(int x[],int y[],int TerN[]){
    int i;
    for(i=0;i<2;i++){
        cout << "Inserisci il " << i+1 <<"° coefficiente di x: ";
        cin >> x[i];
        cout << "Inserisci il " << i+1 <<"° coefficiente di y: ";
        cin >> y[i];
        cout << "Inserisci il " << i+1 <<"° termine noto: ";
        cin >> TerN[i];
    }
}

void CalcoloSistemi2(int x[],int y[],int TerN[],NumFra Risultati[]){
    if(Determinante2(x,y)){
        Risultati[0].denominatore = Determinante2(x,y);                 //assegna D ai denomin.
        Risultati[1].denominatore = Determinante2(x,y);
        cout << "D = " << Risultati[0].denominatore << endl;            //stampa D
        Risultati[0].numeratore = Determinante2(TerN,y);                //assegna Dx al numer.
        cout << "Dx = " << Risultati[0].numeratore << endl;             //stampa Dx
        Risultati[1].numeratore = Determinante2(x,TerN);                //assegna Dy al numer.
        cout << "Dy = " << Risultati[1].numeratore << endl;             //stampa Dy
        Risultati[0] = Semplifica(Risultati[0]);
        Risultati[1] = Semplifica(Risultati[1]);
    }
    else
        cout << "Le soluzioni del sistema non sono determinabili";
}

int Determinante2(int V1[],int V2[]){
    return (V1[0]*V2[1])-(V1[1]*V2[0]);
}

void StampaSistemi2(NumFra Risultati[]){
    cout << "X = ";
    StampaFrazioni(Risultati[0]);
    cout << endl << "Y = ";
    StampaFrazioni(Risultati[1]);
}