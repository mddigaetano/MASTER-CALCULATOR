#include "header.h"

void Scomposizione(int a){                                  //case 11
    int prime;
    for (prime = 2; prime <= a; prime++){                   //ricerca numeri primi
    	if (ProvaDivisibilita(prime)){                      //controllo numeri primi
            while (a % prime == 0){                         //se divisibile...
		a /= prime;                                 //...dividi
		cout << a << "     " << prime << endl;
            }
	}
    }
}


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

void Sistemi2(int x[],int y[],int TerN[],NumFra Risultati[]){ //case 13
    CalcoloSistemi2(x,y,TerN,Risultati);
}

void Sistemi3(int x[],int y[],int z[],int TerN[],NumFra Risultati[]){ //case 14
    CalcoloSistemi3(x,y,z,TerN,Risultati);
}

int MCD(int a, int b){                              //case 16
    int resto;
    if(segno(a))                                    //controllo segni
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