//Direttive pre-processore

#include <stdlib.h>         //libreria comandi standard
#include <iostream>         //input/output c++
#include <math.h>           //funzioni matematiche
#include <string.h>         //funzioni per le stringhe

using namespace std;        //per non scrivere "std::" sui comandi delle librerie senza .h

struct s_NumeriFrazionari{         //dichiarazione struttura per numeri frazionari espressi "numeratore/denominatore"
    int numeratore;
    int denominatore;
}; typedef s_NumeriFrazionari NumFra;  //dichiarazione tipo variabile derivato

//Prototipi Funzioni

int Fattoriale(int a);
int RadiciPerfette(int radicando, int indice);
bool ProvaDivisibilita(int a, bool ctrl);
void Conversione(int numero, int base);
void Scomposizione(int a);
void EquazioniSecondoGrado(int a,int b,int c,NumFra Risultati[]);
void Sistemi2(int x[],int y[],int TerminiNoti[],NumFra Risultati[]);
void Sistemi3(int x[],int y[],int z[],int TerminiNoti[],NumFra Risultati[]);
void TavolaPitagorica(int a);
int MCD(int a, int b);
int MinimoComuneMultiplo(int a, int b);
double FunzioniTrigonometriche(double a,char v[]);

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

int main(){
    //Dichiarazione variabili
    
    int S;                                          //selettore switch
    int a, b, c, risultato;                         //operatori int
    int i;                                          //contatore
    int x[3],y[3],z[3],TerN[3];                     //vettori per sistemi
    char funz[5];                                   //vettore per funz. trigon.
    NumFra Risultati[3];                            //vettore per risultati frazionari
    double af, bf, risf;                            //operatori double
    bool ctrl, fine=true;                           //variabile controllo e uscita programma
    
    //Inizio operazioni
    
    cout << "MASTER-CALCULATOR_____________by Amedeo Di Gaetano\n\n";
    
    ListaFunzioni();
    
    while(fine){
    
    cout << "\n\nInserire il numero corrispondente all'operazione da eseguire: ";
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
            cout << "Sottrazione\n\n";
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
            cout << "Fattoriale\n";
            cout << "NB: SOLO INTERI POSITIVI\n\n";
            cout << "Inserisci il termine: ";
            cin >> a;
            risultato = Fattoriale(a);
            cout << "\nIl risultato e': " << risultato << "\n\n";
            break;
        case 6:
            cout << "Radice Quadrata\n\n";
            cout << "NB: SOLO POSITIVI\n\n";
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
            cout << "Prova Divisibilita'\n";
            cout << "NB: SOLO INTERI POSITIVI\n\n";
            cout << "Inserire il termine: ";
            cin >> a;
            ctrl = ProvaDivisibilita(a,true);
            if(ctrl)
                cout << "\nIl numero e' primo";
            break;
        case 9:
            cout << "Conversione intera: Decimale --> Base fino a 16\n";
            cout << "NB: SOLO POSITIVI\n\n";
            cout << "Inserire il numero da convertire: ";
            cin >> a;
            cout << "Inserire la base: ";
            cin >> b;
            Conversione(a, b);
            break;
        case 10:
            cout << "Elevazione a Potenza\n\n";
            InputDouble(&af, &bf);
            risf = pow(af, bf);
            cout << "Il risultato e': " << risf << "\n\n";
            break;
        case 11:
            cout << "Scomposizione in Fattori Primi\n";
            cout << "NB: SOLO INTERI POSITIVI\n\n";
            cout << "Inserire il numero da scomporre: ";
            cin >> a;
            Scomposizione(a);
            break;
        case 12:
            cout << "Equazioni di Secondo Grado\n";
            cout << "NB: SOLO INTERI\n\n";
            cout << "Inserire il coefficiente a: ";
            cin >> a;
            cout << "Inserire il coefficiente b: ";
            cin >> b;
            cout << "Inserire il coefficiente c: ";
            cin >> c;
            EquazioniSecondoGrado(a, b, c, Risultati);
            break;
        case 13:
            cout << "Sistemi a Due Incognite\n";
            cout << "NB: SOLO INTERI\n\n";
            InputSistemi2(x,y,TerN);
            Sistemi2(x,y,TerN,Risultati);
            StampaSistemi2(Risultati);
            break;
        case 14:
            cout << "Sistemi a Tre Incognite\n";
            cout << "NB: SOLO INTERI\n\n";
            InputSistemi3(x,y,z,TerN);
            Sistemi3(x,y,z,TerN,Risultati);
            StampaSistemi3(Risultati);
            break;
        case 15:
            cout << "Tavola Pitagorica\n";
            cout << "NB: SOLO INTERI POSITIVI\n\n";
            cout << "Inserire il numero di fattori per lato: ";
            cin >> a;
            TavolaPitagorica(++a);
            break;
        case 16:
            cout << "Massimo Comune Divisore\n";
            cout << "NB: SOLO INTERI\n\n";
            cout << "Inserisci il primo termine: ";
            cin >> a;
            cout << "Inserisci il secondo termine: ";
            cin >> b;
            cout << "Il risultato e': " << MCD(a,b);
            break;
        case 17:
            cout << "Minimo Comune Multiplo\n";
            cout << "NB: SOLO INTERI; DIVERSI DA ZERO\n\n";
            cout << "Inserisci il primo termine: ";
            cin >> a;
            cout << "Inserisci il secondo termine: ";
            cin >> b;
            cout << "Il risultato e': " << MinimoComuneMultiplo(a,b);
            break;
        case 18:
            cout << "Funzioni Trigonometriche\n";
            cout << "NB: SOLO VALORI IN GRADI\n\n";
            cout << "Inserire il termine: ";
            cin >> af;
            cout << "\nInserire la funzione da eseguire (anteporre \"a\" per funzioni inverse):\n";
            cout << "Seno --> sin\n";
            cout << "Coseno --> cos\n";
            cout << "Tangente --> tan\n\n";
            cin >> funz;
            cout << "Il risultato e': " << FunzioniTrigonometriche(af,funz);
            break;
        default:
            cout << "Fine programma";
            fine = false;
    }
    }
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

bool ProvaDivisibilita(int a,bool ctrl){
    int divisoreProva, i=0;
	for (divisoreProva = 2; divisoreProva < a; divisoreProva++)         //scorre il divisore da provare
		if (a % divisoreProva == 0 && ctrl){                                //se divisibile
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

void Scomposizione(int a){                                  //case 11
    int prime;
    for (prime = 2; prime <= a; prime++){                   //ricerca numeri primi
    	if (ProvaDivisibilita(prime,false)){                      //controllo numeri primi
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
    cout << "0-Lista Funzioni\n";
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
    cout << "14-Sistemi a Tre Incognite\n";
    cout << "15-Tavola Pitagorica\n";
    cout << "16-Massimo Comune Divisore\n";
    cout << "17-Minimo Comune Multiplo\n";
    cout << "18-Funzioni Trigonometriche\n";
    cout << "Per terminare inserire un numero diverso\n";
}

NumFra Semplifica(NumFra num){                              //funzione di semplifica per le frazioni
    int MaCoDi = MCD(num.numeratore,num.denominatore);      //calcolo MCD
    num.numeratore /= MaCoDi;
    num.denominatore /= MaCoDi;
    if(num.numeratore <0 && num.denominatore <0){           //controllo segni
        num.numeratore *= -1;
        num.denominatore *= -1;
    }
    return num;
}

void StampaFrazioni(NumFra num){                            //semplice stampa di frazioni
    if(num.numeratore % num.denominatore == 0)              //se è apparente stampa intero
        cout << num.numeratore / num.denominatore;
    else
        cout << num.numeratore << "/" << num.denominatore;
}

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

void InputSistemi2(int x[],int y[],int TerN[]){
    int i;
    for(i=0;i<2;i++){
        cout << "Inserisci il " << i+1 <<"° coefficiente di x: ";
        cin >> x[i];
        cout << "Inserisci il " << i+1 <<"° coefficiente di y: ";
        cin >> y[i];
        cout << "Inserisci il " << i+1 <<"° termine noto: ";
        cin >> TerN[i];
    }
}

void CalcoloSistemi2(int x[],int y[],int TerN[],NumFra Risultati[]){
    if(Determinante2(x,y)){
        Risultati[0].denominatore = Determinante2(x,y);                 //assegna D ai denomin.
        Risultati[1].denominatore = Determinante2(x,y);
        cout << "D = " << Risultati[0].denominatore << endl;            //stampa D
        Risultati[0].numeratore = Determinante2(TerN,y);                //assegna Dx al numer.
        cout << "Dx = " << Risultati[0].numeratore << endl;             //stampa Dx
        Risultati[1].numeratore = Determinante2(x,TerN);                //assegna Dy al numer.
        cout << "Dy = " << Risultati[1].numeratore << endl;             //stampa Dy
        Risultati[0] = Semplifica(Risultati[0]);
        Risultati[1] = Semplifica(Risultati[1]);
    }
    else
        cout << "Le soluzioni del sistema non sono determinabili";
}

int Determinante2(int V1[],int V2[]){
    return (V1[0]*V2[1])-(V1[1]*V2[0]);
}

void StampaSistemi2(NumFra Risultati[]){
    cout << "X = ";
    StampaFrazioni(Risultati[0]);
    cout << endl << "Y = ";
    StampaFrazioni(Risultati[1]);
}

void InputSistemi3(int x[],int y[],int z[],int TerN[]){
    int i;
    for(i=0;i<2;i++){
        cout << "Inserisci il " << i+1 <<"° coefficiente di x: ";
        cin >> x[i];
        cout << "Inserisci il " << i+1 <<"° coefficiente di y: ";
        cin >> y[i];
        cout << "Inserisci il " << i+1 <<"° coefficiente di z: ";
        cin >> z[i];
        cout << "Inserisci il " << i+1 <<"° termine noto: ";
        cin >> TerN[i];
    }
}

void CalcoloSistemi3(int x[],int y[],int z[],int TerN[],NumFra Risultati[]){
    if(Determinante3(x,y,z)){    
        Risultati[0].denominatore = Determinante3(x,y,z);           //assegna D al den.
        Risultati[1].denominatore = Determinante3(x,y,z);
        Risultati[1].denominatore = Determinante3(x,y,z);
        cout << "D = " << Risultati[0].denominatore << endl;        //stampa D
        Risultati[0].numeratore = Determinante3(TerN,y,z);          //assegna Dx al num.
        cout << "Dx = " << Risultati[0].numeratore << endl;         //stampa Dx
        Risultati[1].numeratore = Determinante3(x,TerN,z);          //assegna Dy al num.
        cout << "Dy = " << Risultati[1].numeratore << endl;         //stampa Dy
        Risultati[2].numeratore = Determinante3(x,y,TerN);          //assegna Dz al num.
        cout << "Dz = " << Risultati[2].numeratore << endl;         //stampa Dz
        Risultati[0] = Semplifica(Risultati[0]);
        Risultati[1] = Semplifica(Risultati[1]);
        Risultati[2] = Semplifica(Risultati[2]);
    }
    else
        cout << "Le soluzioni del sistema non sono determinabili";
}

int Determinante3(int V1[],int V2[],int V3[]){
    return ((V1[0]*V2[1]*V3[2])+(V1[2]*V2[0]*V3[1])+(V1[1]*V2[2]*V3[0]))-
           ((V1[2]*V2[1]*V3[0])+(V1[0]*V2[2]*V3[1])+(V1[1]*V2[0]*V3[2]));
}

void StampaSistemi3(NumFra Risultati[]){
    cout << "X = ";
    StampaFrazioni(Risultati[0]);
    cout << endl << "Y = ";
    StampaFrazioni(Risultati[1]);
    cout << endl << "Z = ";
    StampaFrazioni(Risultati[2]);
}