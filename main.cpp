#include <stdlib.h>
#include <iostream>
#include <math.h>
#include <complex>
#include <string.h>
using namespace std;

struct s_modphi
{
    double mod;
    double phi;
}; typedef s_modphi mf;

int fat(int a);
int radp(int a, int b);
int prvdsb(int a);
int convdb(int a, int b);
int scmp(int a);
void esg(void);
void sislin(void);
void sis3(void);
void tavpit(void);
void MCD(void);
void mcm(void);
void trigon(void);
void numcom(void);
void rison(void);
int main(void)
{
	int S, a, b, ris;
	double af, bf, risf;
		cout << "Calcolatrice__________by Amedeo Di Gaetano" << endl << endl;
		cout << "1-Addizione;" << endl << "2-Sottrazione;" << endl << "3-Moltiplicazione;" << endl
			<< "4-Divisione;" << endl;
		cout << "5-Fattoriale;" << endl << "6-Radice Quadrata;" << endl << "7-Radici Perfette;" <<
			endl << "8-Prova Divisibilita';" << endl;
		cout << "9-Conversione Decimale/altra base;" << endl << "10-Elevazione a Potenza;" << endl
			<< "11-Scomposizione in Fattori Primi;" << endl;
		cout << "12-Equazioni di secondo grado;" << endl << "13-Sistemi Lineari;" << endl <<
			"14-Sistemi a tre incognite;" << endl;
		cout << "15-Tavola Pitagorica;" << endl << "16-Massimo Comune Divisore;" << endl <<
			"17-Minimo Comune Multiplo;" << endl << "18-Funzioni Trigonometriche;" <<endl<< "19-Numeri Complessi;"<< endl<<"20-Frequenza di Risonanza;"<<endl;
		cout << "Inserire il numero corrispondente all'operazione da eseguire: ";
		cin >> S;
		cout << endl;
		switch (S)
		{
		case 1:
			{
				cout << "Addizione" << endl << endl;
				cout << "Inserire il primo termine: ";
				cin >> af;
				cout << endl << "Inserire il secondo termine: ";
				cin >> bf;
				risf = af + bf;
				cout << endl << "Il risultato e' uguale a: " << risf << endl << endl;
				break;
			}
		case 2:
			{
				cout << "Sottrazione" << endl << endl;
				cout << "Inserire il primo termine: ";
				cin >> af;
				cout << endl << "Inserire il secondo termine: ";
				cin >> bf;
				risf = af - bf;
				cout << endl << "Il risultato e': " << risf << endl << endl;
				break;
			}
		case 3:
			{
				cout << "Moltiplicazione" << endl << endl;
				cout << "Inserire il primo termine: ";
				cin >> af;
				cout << endl << "Inserire il secondo termine: ";
				cin >> bf;
				risf = af * bf;
				cout << endl << "Il risultato e': " << risf << endl << endl;
				break;
			}
		case 4:
			{
				cout << "Divisione" << endl << endl;
				cout << "Inserire il primo termine: ";
				cin >> af;
				cout << endl << "Inserire il secondo termine: ";
				cin >> bf;
				risf = af / bf;
				cout << endl << "Il risultato e': " << risf << endl << endl;
				break;
			}
		case 5:
			{
				cout << "Fattoriale" << endl << endl;
				cout << "Inserire il termine: ";
				cin >> a;
				ris = fat(a);
				cout << endl << "Il risultato e': " << ris << endl << endl;
				break;
			}
		case 6:
			{
				cout << "Radice Quadrata" << endl << endl;
				cout << "Inserire il radicando: ";
				cin >> af;
				risf = sqrt(af);
				cout << endl << "Il risultato e': " << risf << endl << endl;
				break;
			}
		case 7:
			{
				cout << "Radici Perfette" << endl << endl;
				cout << "Inserire il radicando: ";
				cin >> a;
				cout << endl << "Inserire l'indice di radice: ";
				cin >> b;
				ris = radp(a, b);
				if (ris != 0)
				{
					cout << endl << "Il risultato e': " << ris << endl << endl;
				}
				break;
			}
		case 8:
			{
				cout << "Prova Divisibilita'" << endl << endl;
				cout << "Inserire il termine: ";
				cin >> a;
				ris = prvdsb(a);
				if (ris == 0)
				{
					cout << endl << "Il numero inserito e' primo" << endl << endl;
				}
				break;
			}
		case 9:
			{
				cout << "Conversione Decimale/altra base" << endl << endl;
				cout << "Inserire il numero da convertire: ";
				cin >> a;
				cout << endl << "Inserire la base: ";
				cin >> b;
				cout << endl << "Il risultato e': ";
				ris = convdb(a, b);
				cout << endl;
				break;
			}
		case 10:
			{
				cout << "Elevazione a potenza" << endl << endl;
				cout << "Inserire la base: ";
				cin >> af;
				cout << endl << "Inserire l'esponente: ";
				cin >> bf;
				risf = pow(af, bf);
				cout << endl << "Il risultato e': " << risf << endl << endl;
				break;
			}
		case 11:
			{
				cout << "Scomposizione in fattori primi" << endl << endl;
				cout << "Inserire il numero da scomporre: ";
				cin >> a;
				cout << endl;
				ris = scmp(a);
				cout << endl << endl;
				break;
			}
		case 12:
			{
				cout << "Equazioni di secondo grado" << endl << endl;
				esg();
				cout << endl << endl;
				break;
			}
		case 13:
			{
				cout << "Sistemi Lineari" << endl << endl;
				sislin();
				cout << endl;
				break;
			}
		case 14:
			{
				cout << "Sistemi a tre incognite" << endl << endl;
				sis3();
				cout << endl << endl;
				break;
			}
		case 15:
			{
				cout << "Tavola Pitagorica" << endl << endl;
				tavpit();
				cout << endl << endl;
				break;
			}
		case 16:
			{
				cout << "Massimo Comune Divisore" << endl << endl;
				MCD();
				cout << endl << endl;
				break;
			}
		case 17:
			{
				cout << "Minimo Comune Multiplo" << endl << endl;
				mcm();
				cout << endl << endl;
				break;
			}
		case 18:
			{
				cout << "Funzioni Trigonometriche" << endl << endl;
				trigon();
				cout << endl << endl;
				break;
			}
		case 19:
			{
				cout << "Numeri Complessi" << endl << endl;
				numcom();
				cout << endl << endl;
				break;
			}
                case 20:
                        {
                                cout<<"Frequenza di Risonanza"<<endl<<endl;
                                rison();
                                cout<<endl<<endl;
                                break;
                        }
		default:
                        {
			    cout << "Inserito numero errato" << endl << endl;
                        }
		}

}

int fat(int a)
{
	int ris, i;
	ris = a;
	for (i = 1; i < a; i++)
	{
		ris = ris * i;
	}
	if (a == 0)
	{
		ris = 1;
	}
	return ris;
}

int radp(int a, int b)
{
	int i, I, iter, ris;
	I = 1;
	iter = 0;
	while (iter == 0)
	{
		I++;
		ris = I;
		for (i = 1; i < b; i++)
		{
			ris = ris * I;
		}
		if (ris == a)
		{
			iter = 1;
			return I;
		}
		if (ris > a)
		{
			iter = 1;
			cout << endl << "La radice non e' perfetta" << endl << endl;
			return 0;
		}
	}
}

int prvdsb(int a)
{
	int divis, i;
	i = 0;
	for (divis = 2; divis < a; divis++)
	{
		if (a % divis == 0)
		{
			i++;
			cout << divis << endl << endl;
		}
	}
	if (i == 0)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}

int convdb(int a, int b)
{
	int i, bin, v[100];
	for (i = 0; i < 100; i++)
	{
		v[i] = 0;
	}
	i = 0;
	while (a != 0)
	{
		v[i] = a % b;
		a = a / b;
		i++;
	}
	i--;
	while (i >= 0)
	{
		if (v[i] < 10)
		{
			cout << v[i];
		}
		else if (v[i] == 10)
		{
			cout << "A";
		}
		else if (v[i] == 11)
		{
			cout << "B";
		}
		else if (v[i] == 12)
		{
			cout << "C";
		}
		else if (v[i] == 13)
		{
			cout << "D";
		}
		else if (v[i] == 14)
		{
			cout << "E";
		}
		else if (v[i] == 15)
		{
			cout << "F";
		}
		i--;
	}
	cout << endl;
	return 0;
}

int scmp(int a)
{
	int prime, divis, i, I;
	for (prime = 2; prime <= a; prime++)
	{
		i = 0;
		for (divis = prime - 1; divis > 1; divis--)
		{
			if (prime % divis == 0)
			{
				i++;
			}
		}
		if (i == 0)
		{
			while (a % prime == 0)
			{
				a = a / prime;
				cout << a << "     " << prime << endl;
			}
		}
	}
}

void esg(void)
{
	int a, b, c, x, A, i, I, ix1, ix2;
	double D, x1, x2;
	cout << "Inserisci il valore del coefficiente a: ";
	cin >> a;
	cout << endl << "Inserisci il valore del coefficiente b: ";
	cin >> b;
	cout << endl << "Inserisci il valore del coefficiente c: ";
	cin >> c;
	cout << endl;
	I = 0;
	if (a != 0)
	{
		D = b * b - 4 * a * c;
		cout << "D= " << D << endl;
		if (D < 0)
		{
			cout << "L'equazione non ammette soluzione reali";
		}
		else
		{
			x1 = ((b * -1) - sqrt(D));
			ix1 = (int)x1;
			A = 2 * a;
			if (ix1 % A == 0)
			{
				cout << "x1= " << ix1 / A << endl;
			}
			else
			{
				i = A;
				while (I == 0)
				{
					i--;
					if (ix1 % i == 0 && A % i == 0)
					{
						ix1 /= i;
						A /= i;
						I++;
						if (ix1 < 0 && A < 0)
						{
							ix1 *= -1;
							A *= -1;
						}
					}
				}
				cout << "x1= " << ix1 << "/" << A << endl;
			}
			x2 = ((b * -1) + sqrt(D));
			ix2 = (int)x2;
			A = 2 * a;
			if (ix2 % A == 0)
			{
				cout << "x2= " << ix2 / A << endl;
			}
			else
			{
				i = A;
				while (I == 1)
				{
					i--;
					if (ix2 % i == 0 && A % i == 0)
					{
						ix2 /= i;
						A /= i;
						I++;
						if (ix2 < 0 && A < 0)
						{
							ix2 *= -1;
							A *= -1;
						}
					}
				}
				cout << "x2= " << ix2 << "/" << A << endl;
			}
		}
	}
	else
	{
		if (b == 0 && c == 0)
		{
			cout << "Equazione indeterminata" << endl;
		}
		else
		{
			if (b = 0)
			{
				cout << "Equazione impossibile" << endl;
			}
			else
			{
				x = (c * -1) / b;
			}
		}
	}
}

void sislin(void)
{
	int x1, x2, y1, y2, tn1, tn2, D, Dx, Dy, x, y, i, I;
	I = 0;
	cout << "Inserisci il primo coefficiente di x: ";
	cin >> x1;
	cout << endl << "Inserisci il secondo coefficiente di x: ";
	cin >> x2;
	cout << endl << "Inserisci il primo coefficiente di y: ";
	cin >> y1;
	cout << endl << "Inserisci il secondo coefficiente di y: ";
	cin >> y2;
	cout << endl << "Inserisci il primo termine noto: ";
	cin >> tn1;
	cout << endl << "Inserisci il secondo termine noto: ";
	cin >> tn2;
	D = (x1 * y2) - (x2 * y1);
	cout << endl << "D= " << D;
	if (D != 0)
	{
		if (D < 0)
		{
			i = D * -1;
		}
		else
		{
			i = D;
		}
		Dx = (tn1 * y2) - (tn2 * y1);
		cout << endl << "Dx= " << Dx;
		Dy = (x1 * tn2) - (x2 * tn1);
		cout << endl << "Dy= " << Dy;
		if (Dx % D == 0)
		{
			x = Dx / D;
			cout << endl << "x= " << x;
		}
		else
		{
			while (I == 0)
			{
				i--;
				if (D % i == 0 && Dx % i == 0)
				{
					D /= i;
					Dx /= i;
					I++;
					if (D < 0 && Dx < 0)
					{
						D *= -1;
						Dx *= -1;
					}
				}
			}
			cout << endl << "x= " << Dx << "/" << D;
		}
		D = (x1 * y2) - (x2 * y1);
		if (D < 0)
		{
			i = D * -1;
		}
		else
		{
			i = D;
		}
		if (Dy % D == 0)
		{
			y = Dy / D;
			cout << endl << "y= " << y << endl << endl;
		}
		else
		{
			while (I == 1)
			{
				i--;
				if (D % i == 0 && Dy % i == 0)
				{
					D = D / i;
					Dy = Dy / i;
					I++;
					if (D < 0 && Dx < 0)
					{
						D *= -1;
						Dx *= -1;
					}
				}
			}
			cout << endl << "y= " << Dy << "/" << D << endl << endl;
		}
	}
	else
	{
		cout << endl << endl << "Il sistema e' impossibile";
	}
}

void sis3(void)
{
	int x1, x2, x3, y1, y2, y3, z1, z2, z3, tn1, tn2, tn3, D, Dx, Dy, Dz, x, y, z, i, I;

	I = 0;

	cout << "Inserisci il primo coefficiente di x: ";
	cin >> x1;

	cout << endl << "Inserisci il secondo coefficiente di x: ";
	cin >> x2;

	cout << endl << "Inserisci il terzo coefficiente di x: ";
	cin >> x3;

	cout << endl << "Inserisci il primo coefficiente di y: ";
	cin >> y1;

	cout << endl << "Inserisci il secondo coefficiente di y: ";
	cin >> y2;

	cout << endl << "Inserisci il terzo coefficiente di y: ";
	cin >> y3;

	cout << endl << "Inserisci il primo coefficiente di z: ";
	cin >> z1;

	cout << endl << "Inserisci il secondo coefficiente di z: ";
	cin >> z2;

	cout << endl << "Inserisci il terzo coefficiente di z: ";
	cin >> z3;

	cout << endl << "inserisci il primo termine noto: ";
	cin >> tn1;

	cout << endl << "inserisci il secondo termine noto: ";
	cin >> tn2;

	cout << endl << "Inserisci il terzo termine noto: ";
	cin >> tn3;

	D = (x1 * y2 * z3) + (y1 * z2 * x3) + (z1 * x2 * y3) - ((z1 * y2 * x3) + (x1 * z2 * y3) +
															(y1 * x2 * z3));
	cout << endl << "D= " << D;

	if (D != 0)
	{

		if (D < 0)
		{
			i = D * -1;
		}
		else
		{
			i = D;
		}

		Dx = (tn1 * y2 * z3) + (y1 * z2 * tn3) + (z1 * tn2 * y3) - ((z1 * y2 * tn3) +
																	(tn1 * z2 * y3) +
																	(y1 * tn2 * z3));
		cout << endl << "Dx= " << Dx;

		Dy = (x1 * tn2 * z3) + (tn1 * z2 * x3) + (z1 * x2 * tn3) - ((z1 * tn2 * x3) +
																	(x1 * z2 * tn3) +
																	(tn1 * x2 * z3));
		cout << endl << "Dy= " << Dy;

		Dz = (x1 * y2 * tn3) + (y1 * tn2 * x3) + (tn1 * x2 * y3) - ((tn1 * y2 * x3) +
																	(x1 * tn2 * y3) +
																	(y1 * x2 * tn3));
		cout << endl << "Dz= " << Dz;

		if (Dx % D == 0)
		{
			x = Dx / D;
			cout << endl << "x= " << x;
		}
		else
		{
			while (I == 0)
			{
				i--;
				if (D % i == 0 && Dx % i == 0)
				{
					D = D / i;
					Dx = Dx / i;
					I++;
					if (Dx < 0 && D < 0)
					{
						Dx = Dx * -1;
						D = D * -1;
					}
				}
			}
			cout << endl << "x= " << Dx << "/" << D;
		}

		D = (x1 * y2 * z3) + (y1 * z2 * x3) + (z1 * x2 * y3) - ((z1 * y2 * x3) + (x1 * z2 * y3) +
																(y1 * x2 * z3));

		if (D < 0)
		{
			i = D * -1;
		}
		else
		{
			i = D;
		}

		if (Dy % D == 0)
		{
			y = Dy / D;
			cout << endl << "y= " << y;
		}
		else
		{
			while (I == 1)
			{
				i--;
				if (D % i == 0 && Dy % i == 0)
				{
					D = D / i;
					Dy = Dy / i;
					I++;
					if (Dy < 0 && D < 0)
					{
						Dy = Dy * -1;
						D = D * -1;
					}
				}
			}
			cout << endl << "y= " << Dy << "/" << D;
		}

		D = (x1 * y2 * z3) + (y1 * z2 * x3) + (z1 * x2 * y3) - ((z1 * y2 * x3) + (x1 * z2 * y3) +
																(y1 * x2 * z3));

		if (D < 0)
		{
			i = D * -1;
		}
		else
		{
			i = D;
		}

		if (Dz % D == 0)
		{
			z = Dz / D;
			cout << endl << "z= " << z << endl << endl;
		}
		else
		{
			while (I == 2)
			{
				i--;
				if (D % i == 0 && Dz % i == 0)
				{
					D = D / i;
					Dz = Dz / i;
					I++;
					if (Dz < 0 && D < 0)
					{
						Dz = Dz * -1;
						D = D * -1;
					}
				}
			}
			cout << endl << "z= " << Dz << "/" << D << endl << endl;
		}
	}
	else
	{
		cout << endl << "Il sistema e' impossibile" << endl;
	}

}

void tavpit(void)
{
	int R, C, a;
	cout << "Inserisci il numero di fattori per lato: ";
	cin >> a;
	a++;
	cout << endl << endl;
	int tav[a][a];
	for (R = 0; R < a; R++)
	{
		for (C = 0; C < a; C++)
		{
			tav[R][C] = R * C;
		}
	}
	for (R = 1; R < a; R++)
	{
		for (C = 1; C < a; C++)
		{
			cout << tav[R][C] << "  ";
		}
		cout << endl << endl;
	}
}

void MCD(void)
{
	int a, b, r;
	cout << "Inserisci il primo termine: ";
	cin >> a;
	cout << endl << "Inserisci il secondo termine: ";
	cin >> b;
	cout << endl;
	if (b == 0)
	{
		cout << "Il risultato e' uguale a: " << a << endl << endl;
	}
	else
	{
		r = a % b;
		while (r != 0)
		{
			a = b;
			b = r;
			r = a % b;
		}
		cout << "Il risultato e' uguale a: " << b << endl << endl;
	}
}

void mcm(void)
{
	int a, b, i, I = 0;
	cout << "Inserisci il primo termine: ";
	cin >> a;
	cout << endl << "Inserisci il secondo termine: ";
	cin >> b;
	i = a + 1;
	cout << endl;
	while (I == 0)
	{
		i++ ;
		if (i % a == 0 && i % b == 0)
		{
			I++;
			cout << "Il risultato e' uguale a: " << i;
		}
	}
}

void trigon(void)
{
    double a=0,ris=0;
    char v[5];
    cout<<"Inserire il termine: ";
    cin>>a;
    cout<<"\nInserire la sigla della funzione da eseguire: ";
    cin>>v;
    cout<<endl;
    if (strcmp(v,"sin")==0)
    {
        ris=sin(a*M_PI/180);
    }
    if (strcmp(v,"cos")==0)
    {
        ris=cos(a*M_PI/180);
    }
    if (strcmp(v,"tan")==0)
    {
        ris=tan(a*M_PI/180);
    }
    if (strcmp(v,"asin")==0)
    {
        ris=asin(a)*180/M_PI;
    }
    if (strcmp(v,"acos")==0)
    {
        ris=acos(a)*180/M_PI;
    }
    if (strcmp(v,"atan")==0)
    {
        ris=atan(a)*180/M_PI;
    }
    cout<<"Il risultato e' uguale a: "<<ris;
}

void numcom(void)
{
    char v[8];
    double a,b;
    complex <double> a1;
    mf b1;
    
    cout<<"Inserire la forma che si vuole ottenere(a+bj oppure mod<phi): ";
    cin>>v;
    cout<<endl;
    if (strcmp(v,"a+bj")==0)
    {
        cout<<"Inserire il modulo: ";
        cin>>b1.mod;
        cout<<"Inserire la fase: ";
        cin>>b1.phi;
        cout<<endl<<"La forma richiesta e': "<<b1.mod*(cos(b1.phi*M_PI/180))<<" + "<<b1.mod*(sin(b1.phi*M_PI/180))<<" j";
    }
    else if (strcmp(v,"mod<phi")==0)
    {
        cout<<"Inserire la parte reale: ";
        cin>>a;
        cout<<"Inserire la parte immaginaria: ";
        cin>>b;
        a1 = std::complex<double>(a,b);
        cout<<endl<<"La forma richiesta e': "<< abs(a1) <<" < "<< (arg(a1)*180)/M_PI;
    }
    else
    {
        cout<<"Inserita forma errata";
    }
}
void rison (void)
{
     double l,c,o;
     cout<<"Inserire l'induttanza: ";
     cin>>l;
     cout<<"Inserire la capacita'";
     cin>>c;
     o=1/sqrt(l*c);
     cout<<endl<<"La risonanza e': "<<o<< endl;
     cout<<"La frequenza e': "<<o/(2*M_PI);
}