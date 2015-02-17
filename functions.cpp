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
    cout << "14-Sistemi a tre Incognite\n";
    cout << "15-Tavola Pitagorica\n";
    cout << "16-Massimo Comune Divisore\n";
    cout << "17-Minimo Comune Multiplo\n";
    cout << "18-Funzioni Trigonometriche\n";
    cout << "19-Numeri Complessi\n";
    cout << "20-Frequenza di Risonanza\n";
    cout << "\n";
}

//Funzioni Principali

int Fattoriale(int a){                              //case 5
    int risultato=1;                                //preferire iterazione a ricorsività
    for(;a != 0; a--)                               //per evitare stack overflow
        risultato *= a;
    return risultato;
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

bool ProvaDivisibilita(int a){
    int divisoreProva, i=0;
	for (divisoreProva = 2; divisoreProva < a; divisoreProva++)         //scorre il divisore da provare
		if (a % divisoreProva == 0){                                //se divisibile
			i++;
			cout << divisoreProva << endl << endl;              //stampa
		}
	if (i == 0)
		return true;
	else
		return false;
}

void Conversione(int numero, int base){
    int i, binario, vettore[100];
    for (i = 0; i < 100; i++)                   //azzeramento vettore
	vettore[i] = 0;
    i = 0;
    while (numero != 0){                        //finché non si arriva a zero
	vettore[i] = numero % base;             //memorizza testo
	numero /= base;                         //esegui la divisione
	i++;
    }
    i--;
    while (i >= 0){
	if (vettore[i] < 10)
            cout << vettore[i];                 //stampa vettore al contrario
	else if (vettore[i] == 10)              //stampa lettere esadecimali
            cout << "A";
	else if (vettore[i] == 11)
            cout << "B";
	else if (vettore[i] == 12)
            cout << "C";
	else if (vettore[i] == 13)
            cout << "D";
	else if (vettore[i] == 14)
            cout << "E";
        else if (vettore[i] == 15)
            cout << "F";
	i--;
    }
    cout << endl;
}