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
void Scomposizione(int a);
void EquazioniSecondoGrado(int a,int b,int c,NumFra Risultati[]);
void Sistemi2(int x[],int y[],int TerminiNoti[],NumFra Risultati[]);
void Sistemi3(int x[],int y[],int z[],int TerminiNoti[],NumFra Risultati[]);
void TavolaPitagorica(int a);
int MCD(int a, int b);
int MinimoComuneMultiplo(int a, int b);
double FunzioniTrigonometriche(double a,char v[]);
//void NumeriComplessi();                             DA FARE
//void Risonanza(double induttanza, double capacita); DA FARE

//Prototipi Funzioni Extra

void InputDouble(double *af, double *bf);
bool segno(double a);
void ListaFunzioni();
NumFra Semplifica(NumFra num);
void StampaFrazioni(NumFra num);

//Prototipi EquazioniSecondoGrado

bool esistonoSoluzioniReali(int a,int b,int c);
float calcolaDelta(int a,int b,int c);
NumFra calcolaSoluzione1(int a,int b,int c);
NumFra calcolaSoluzione2(float a,float b,float c);

//Prototipi Sistemi2

void InputSistemi2(int x[],int y[],int TerN[]);

void CalcoloSistemi2(int x[],int y[],int TerN[],NumFra Risultati[]);
    int Determinante2(int V1[],int V2[]);
void StampaSistemi2(NumFra Risultati[]);

//Prototipi Sistemi3

void InputSistemi3(int x[],int y[],int z[],int TerN[]);

void CalcoloSistemi3(int x[],int y[],int z[],int TerN[],NumFra Risultati[]);
    int Determinante3(int V1[],int V2[],int V3[]);
void StampaSistemi3(NumFra Risultati[]);