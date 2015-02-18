#include "header.h"

bool esistonoSoluzioniReali(int a,int b,int c) {
    if (calcolaDelta(a,b,c)<0)
        return false;
    else
        return true;
}

float calcolaDelta(int a,int b,int c) {
    float delta;
    delta = (b*b)+(-4*a*c);
    return delta;
}

NumFra calcolaSoluzione1(int a,int b,int c) {
    NumFra risultato;
    risultato.numeratore = (-b+sqrt((int)calcolaDelta(a,b,c)));
    risultato.denominatore = 2*a;
    risultato = Semplifica(risultato);
    return risultato;
}

NumFra calcolaSoluzione2(float a,float b,float c) {
    NumFra risultato;
    risultato.numeratore = (-b-sqrt((int)calcolaDelta(a,b,c)));
    risultato.denominatore = 2*a;
    if(risultato.numeratore % risultato.denominatore)
        risultato = Semplifica(risultato);
    return risultato;
}