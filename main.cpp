//Direttive pre-processore

#include <stdlib.h>         //libreria comandi standard
#include <iostream>         //input/output c++
#include <math.h>           //funzioni matematiche
#include <complex>          //funzioni e definizione numeri complessi
#include <string.h>         //funzioni per le stringhe

using namespace std;        //per non scrivere "std::" sui comandi delle librerie senza .h

struct s_ModuloPhi{         //dichiarazione struttura per numeri complessi espressi "modulo<phi"
    double modulo;
    double phi;
}; typedef s_ModuloPhi MF;  //dichiarazione tipo variabile derivato

//Prototipi Funzioni

int Fattoriale(int a);
int RadiciPerfette(int radicando, int indice);
//void ProvaDivisibilita(int a);                      DA FARE
//void Conversione(int numero, int base);             DA FARE
//int Scomposizione(int a);                           DA FARE
//void EquazioniSecondoGrado();                       DA FARE
//void Sistemi();                                     DA FARE
//void Sistemi3();                                    DA FARE
//void TavolaPitagorica();                            DA FARE
int MCD(int a, int b);
//int MinimoComuneMultiplo(int a, int b);             DA FARE
//double FunzioniTrigonometriche(int a);              DA FARE
//void NumeriComplessi();                             DA FARE
//void Risonanza(double induttanza, double capacita); DA FARE

//Prototipi Funzioni Extra

void InputDouble(double *af, double *bf);
bool segno(double a);                               //TESTARE
void ListaFunzioni();                               //DA FARE (finire con "\n\n")

int main(){
    //Dichiarazione variabili
    
    int S;                                          //selettore switch
    int a, b, risultato;                            //operatori int
    double af, bf, risf;                            //operatori double
    
    //Inizio operazioni
    
    ListaFunzioni();
    
    cout << "Iserire il numero corrispondente all'operazione da eseguire: ";
    cin >> S;
    cout << endl;
    
    switch(S){
        case 0:
            ListaFunzioni();
            break;
        case 1:
            cout << "Addizione\n\n";
            InputDouble(&af, &bf);
            risf = af + bf;
            cout << "Il risultato e': " << risf << "\n\n";
            break;
        case 2:
            cout << "Sotrazione\n\n";
            InputDouble(&af, &bf);
            risf = af - bf;
            cout << "Il risultato e': " << risf << "\n\n";
            break;
        case 3:
            cout << "Moltiplicazione\n\n";
            InputDouble(&af, &bf);
            risf = af * bf;
            cout << "Il risultato e': " << risf << "\n\n";
            break;
        case 4:
            cout << "Divisione\n\n";
            InputDouble(&af, &bf);
            risf = af / bf;
            cout << "Il risultato e': " << risf << "\n";
            cout << "Il resto e': "<< risf - (int)(af / bf) << "\n\n";
            break;
        case 5:
            cout << "Fattoriale\n\n";
            cout << "Inserisci il termine";
            cin >> a;
            risultato = Fattoriale(a);
            cout << "\nIl risultato e': " << risultato << "\n\n";
            break;
        case 6:
            cout << "Radice Quadrata\n\n";
            cout << "Inserire il radicando: ";
            cin >> af;
            risf = sqrt(af);
            cout << "Il risultato e': " << risf << "\n\n";
            break;
        case 7:
            cout << "Controllo Radici Perfette\n";
            cout << "NB: SOLO INTERI POSITIVI\n\n";
            cout << "Inserire il radicando: ";
            cin >> a;
            cout << "Inserire l'indice di radice: ";
            cin >> b;
            risultato = RadiciPerfette(a, b);
            if (risultato == 0)
                cout << "La radice non e' perfetta";
            else 
                cout << "Il risultato e': " << risultato << "\n\n";
            break;
        case 8:
            cout << "Prova Divisibilita'\n\n";
            cout << "Inserire il termine: ";
            cin >> a;
//          ProvaDivisibilita(a);                                  DA RIVEDERE
            break;
        case 9:
            cout << "Conversione intera: Decimale --> Qualsiasi Base\n\n";
            cout << "Inserire il numero da convertire: ";
            cin >> a;
            cout << "Inserire la base: ";
            cin >> b;
//            Conversione(a, b);
            break;
        case 10:
            cout << "Elevazione a Potenza\n\n";
            InputDouble(&af, &bf);
            risf = pow(af, bf);
            cout << "Il risultato e': " << risf << "\n\n";
            break;
        case 11:
            cout << "Scomposizione in Fattori Primi\n\n";
            cout << "Inserire il numero da scomporre: ";
            cin >> a;
//            cout << Scomposizione(a);
            break;
        case 12:
            cout << "Equazioni di Secondo Grado\n\n";
//            EquazioniSecondoGrado();
            break;
        case 13:
            cout << "Sistemi a Due Incognite\n\n";
//            Sistemi();
            break;
        default:
            cout << "Funzione non ancora aggiunta";
    }
}

//Funzioni Extra

void InputDouble(double *af, double *bf){
    cout << "Inserire il primo termine: ";
    cin >> *af;
    cout << "Inserire il secondo termine: ";
    cin >> *bf;
    cout << endl;
}

bool segno(double a){
    bool ctrl = false;
    if (a < 0)
        ctrl = true;
    return ctrl;
}

void ListaFunzioni(){                               //case 0
    cout << "1-Addizione\n";
    cout << "2-Sottrazione\n";
    cout << "3-Moltiplicazione\n";
    cout << "4-Divisione\n";
    // MOLTE ALTRE DA FARE
    cout << "\n";
}

//Funzioni Principali

int Fattoriale(int a){                              //case 5
    if (a == 0)
        return 1;
    else 
        return (a * Fattoriale(--a));
}

int RadiciPerfette(int radicando, int indice){      //case 7
    int i, ris;
    for(i = 0; i <= radicando; i++)
    {
        ris = (int)(pow((double)i, (double)indice));
        if(ris == radicando)
            return i;
        else if (ris > radicando)
            return 0;
    }
}

int MCD(int a, int b){                              //case 16
    int resto;
    resto = a % b;
    if(resto == 0)
        return b;
    else
        return MCD(b, resto);
}