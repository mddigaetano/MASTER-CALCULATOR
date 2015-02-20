#include "header.h"                                 //header da me creato

int main(){
    //Dichiarazione variabili
    
    int S;                                          //selettore switch
    int a, b, c, risultato;                         //operatori int
    int i;                                          //contatore
    int x[3],y[3],z[3],TerN[3];                     //vettori per sistemi
    NumFra Risultati[3];                            //vettore per risultati frazionari
    double af, bf, risf;                            //operatori double
    bool ctrl;                                      //variabile controllo
    
    //Inizio operazioni
    
    ListaFunzioni();
    
    cout << "Inserire il numero corrispondente all'operazione da eseguire: ";
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
            ctrl = ProvaDivisibilita(a);
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
            InputSistemi(x,y,TerN);
            Sistemi(x,y,TerN,Risultati);
            StampaSistemi(Risultati);
            break;
        default:
            cout << "Funzione non ancora aggiunta";
    }
}