#include "header.h"                                 //header da me creato

int main(){
    //Dichiarazione variabili
    
    int S;                                          //selettore switch
    int a, b, risultato;                            //operatori int
    double af, bf, risf;                            //operatori double
    
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
//          ProvaDivisibilita(a);                                  DA RIVEDERE
            break;
        case 9:
            cout << "Conversione intera: Decimale --> Base fino a 16\n";
            cout << "NB: SOLO POSITIVI\n\n";
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
            cout << "Scomposizione in Fattori Primi\n";
            cout << "NB: SOLO INTERI POSITIVI\n\n";
            cout << "Inserire il numero da scomporre: ";
            cin >> a;
//            cout << Scomposizione(a);
            break;
        case 12:
            cout << "Equazioni di Secondo Grado\n\n";
            //INPUT ESTERNO ALLA FUNZIONE!!!!
//            EquazioniSecondoGrado();
            break;
        case 13:
            cout << "Sistemi a Due Incognite\n\n";
            //INPUT ESTERNO ALLA FUNZIONE!!!!
//            Sistemi();
            break;
        default:
            cout << "Funzione non ancora aggiunta";
    }
}
