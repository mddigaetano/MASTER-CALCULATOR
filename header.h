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
}; typedef s_ModuloPhi ModF;  //dichiarazione tipo variabile derivato

struct s_NumeriFrazionari{         //dichiarazione struttura per numeri frazionari espressi "numeratore/denominatore"
    int numeratore;
    int denominatore;
}; typedef s_NumeriFrazionari NumFra;  //dichiarazione tipo variabile derivato

//Prototipi Funzioni

int Fattoriale(int a);
int RadiciPerfette(int radicando, int indice);
bool ProvaDivisibilita(int a);
void Conversione(int numero, int base);
//int Scomposizione(int a);                           DA FARE
//void EquazioniSecondoGrado(int a,int b,int c);      DA FARE
//void Sistemi(x[],y[],*Risultati[]);                 DA FARE
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