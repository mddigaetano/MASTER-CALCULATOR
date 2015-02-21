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

void TavolaPitagorica(int a){                   //case 15
	int R,C;                                //dichiarazione variabili riga colonna
        int tav[a][a];                          //dichiarazione matrice
	cout << endl << endl;
	for (R = 0; R < a; R++){                //riempimento matrice
            for (C = 0; C < a; C++)
                tav[R][C] = R * C;
	}
	for (R = 1; R < a; R++){                //stampa matrice
            for (C = 1; C < a; C++)
		cout << tav[R][C] << "  ";
            cout << endl << endl;
	}
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

int MinimoComuneMultiplo(int a,int b){              //case 17
    int i;
    if(segno(a))                                    //controllo segni
        a *= -1;
    if(segno(b))
        b *= -1;
    for(i=a;i<=a*b;i++)
        if(i%a==0 && i%b==0)
            break;
    return i;
}

double FunzioniTrigonometriche(double a, char v[]){
     if (strcmp(v,"sin")==0)
        return sin(a*M_PI/180);
    if (strcmp(v,"cos")==0)
        return cos(a*M_PI/180);
    if (strcmp(v,"tan")==0)
        return tan(a*M_PI/180);
    if (strcmp(v,"asin")==0)
        return asin(a)*180/M_PI;
    if (strcmp(v,"acos")==0)
        return acos(a)*180/M_PI;
    if (strcmp(v,"atan")==0)
        return atan(a)*180/M_PI;
}