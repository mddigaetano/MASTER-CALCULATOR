#include "header.h"

void InputSistemi3(int x[],int y[],int z[],int TerN[]){
    int i;
    for(i=0;i<3;i++){
        cout << "Inserisci il " << i+1 <<"° coefficiente di x: ";
        cin >> x[i];
        cout << "Inserisci il " << i+1 <<"° coefficiente di y: ";
        cin >> y[i];
        cout << "Inserisci il " << i+1 <<"° coefficiente di z: ";
        cin >> z[i];
        cout << "Inserisci il " << i+1 <<"° termine noto: ";
        cin >> TerN[i];
    }
}

void CalcoloSistemi3(int x[],int y[],int z[],int TerN[],NumFra Risultati[]){
    if(Determinante3(x,y,z)){    
        Risultati[0].denominatore = Determinante3(x,y,z);           //assegna D al den.
        Risultati[1].denominatore = Determinante3(x,y,z);
        Risultati[1].denominatore = Determinante3(x,y,z);
        cout << "D = " << Risultati[0].denominatore << endl;        //stampa D
        Risultati[0].numeratore = Determinante3(TerN,y,z);          //assegna Dx al num.
        cout << "Dx = " << Risultati[0].numeratore << endl;         //stampa Dx
        Risultati[1].numeratore = Determinante3(x,TerN,z);          //assegna Dy al num.
        cout << "Dy = " << Risultati[1].numeratore << endl;         //stampa Dy
        Risultati[2].numeratore = Determinante3(x,y,TerN);          //assegna Dz al num.
        cout << "Dz = " << Risultati[2].numeratore << endl;         //stampa Dz
        Risultati[0] = Semplifica(Risultati[0]);
        Risultati[1] = Semplifica(Risultati[1]);
        Risultati[2] = Semplifica(Risultati[2]);
    }
    else
        cout << "Le soluzioni del sistema non sono determinabili";
}

int Determinante3(int V1[],int V2[],int V3[]){
    return ((V1[0]*V2[1]*V3[2])+(V1[2]*V2[0]*V3[1])+(V1[1]*V2[2]*V3[0]))-
           ((V1[2]*V2[1]*V3[0])+(V1[0]*V2[2]*V3[1])+(V1[1]*V2[0]*V3[2]));
}

void StampaSistemi3(NumFra Risultati[]){
    cout << "X = ";
    StampaFrazioni(Risultati[0]);
    cout << endl << "Y = ";
    StampaFrazioni(Risultati[1]);
    cout << endl << "Z = ";
    StampaFrazioni(Risultati[2]);
}
