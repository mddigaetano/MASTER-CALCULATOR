#include "header.h"                                 //header da me creato

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