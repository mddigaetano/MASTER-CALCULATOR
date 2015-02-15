#include "header.h"                                 //header da me creato

//Funzioni Extra

void InputDouble(double *af, double *bf){
    cout << "Inserire il primo termine: ";
    cin >> *af;                                     //inserimento con puntatore
    cout << "Inserire il secondo termine: ";
    cin >> *bf;                                     //inserimento con puntatore
    cout << endl;
}

bool segno(double a){
    bool ctrl = false;
    if (a < 0)                                      //controllo segno
        ctrl = true;
    return ctrl;
}

void ListaFunzioni(){                               //case 0
    cout << "1-Addizione\n";
    cout << "2-Sottrazione\n";
    cout << "3-Moltiplicazione\n";
    cout << "4-Divisione\n";
    cout << "5-Fattoriale\n";
    cout << "6-Radici Quadrate\n";
    cout << "7-Controllo Radici Perfette\n";
    cout << "8-Prova Divisibilita'\n";
    cout << "9-Conversione intera: Decimale --> Base fino a 16\n";
    cout << "10-Elevazione a Potenza\n";
    cout << "11-Scomposizione in Fattori Primi\n";
    cout << "12-Equazioni di Secondo Grado\n";
    cout << "13-Sistemi a Due Incognite\n";
    // MOLTE ALTRE DA FARE
    cout << "\n";
}

//Funzioni Principali

int Fattoriale(int a){                              //case 5
	int i;
	if (a == 0)                                 //controllo caso estremo
            a = 1;
        else
            for (i = a-1; i > 1; i--)               //calcolo iterativo
		a = a * i;
        return a;
}

int RadiciPerfette(int radicando, int indice){      //case 7
    int i, ris;
    for(i = 0; i <= radicando; i++){                //ciclo per trovare valore risultato
        ris = (int)(pow((double)i, (double)indice));
        if(ris == radicando)                        //prova di verifica
            return i;
        else if (ris > radicando)                   //controllo esistenza la radice perfetta
            return 0;
    }
}

int MCD(int a, int b){                              //case 16
    int resto;
    while(true){
        resto = a % b;                              //calcolo resto
        if(resto == 0){                             //controllo divisibilità
            return b;
            break;                                  //uscita dal ciclo
        }
        else{
            a = b;                                  //shift valori
            b = resto;
        }
    }
}