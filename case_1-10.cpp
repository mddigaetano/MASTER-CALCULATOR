#include "header.h"                                 //header da me creato

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
