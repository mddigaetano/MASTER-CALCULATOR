#include "header.h"

void EquazioniSecondoGrado(int a,int b,int c,NumFra Risultati[]){       //case 12
    cout << "Delta = " << calcolaDelta(a,b,c) << endl;                  //calcolo e stampa delta
    if(esistonoSoluzioniReali(a,b,c)){                                  //controllo esistenza soluzioni
        Risultati[0] = calcolaSoluzione1(a,b,c);
        Risultati[1] = calcolaSoluzione2(a,b,c);
        cout << "X1 = ";
        StampaFrazioni(Risultati[0]);
        cout << endl << "X2 = ";
        StampaFrazioni(Risultati[1]);
    }
    else{
        cout << "Non esistono soluzioni reali";
    }
}

void Scomposizione(int a){
    int prime;
    for (prime = 2; prime <= a; prime++){
    	if (ProvaDivisibilita(prime)){
            while (a % prime == 0){
		a /= prime;
		cout << a << "     " << prime << endl;
            }
	}
    }
}

void Sistemi(int x[],int y[],int TerN[],NumFra Risultati[]){ //case 13
    CalcoloSistemi(x,y,TerN,Risultati);
}

int MCD(int a, int b){                              //case 16
    int resto;
    if(segno(a))
        a *= -1;
    if(segno(b))
        b *= -1;
    while(b > 0){
        resto = a % b;                              //calcolo resto
        a = b;                                      //shift valori
        b = resto;
    }
    return a;
}