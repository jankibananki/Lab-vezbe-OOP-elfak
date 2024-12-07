#include "Student.h"
#include <iostream>
#include <cstring>


using namespace std;

void Student :: dodajOcenu() //od 5 do 10
{
	int br;
	cout << "Koliko novih ocena se unosi? " << endl;
	cin >> br;
	int ocena;
	
	for (int i = 0; i < br; i++)
	{
		cout << "Unesite novu ocenu: " << endl;
		cin >> ocena;
		while (ocena < 5 || ocena>10)
		{
			cout << "Ocena nije u odgovarajucem opsegu ocena! " << endl;
			cin >> ocena;
		}
			nizOcena[brojPolozenihIspita] = ocena;
			brojPolozenihIspita++;
			
	}
}

void Student::ucitajStudenta()
{
	cin.ignore();
	cout << "Unesite ime sudenta: " << endl;
	cin.getline(ime, 20);
	cout << "Unesite prezime studenta: " << endl;
	cin.getline(prezime, 30);
	cout << "Unesite broj indeksa studenta: " << endl;
	cin >> brojIndeksa;
	cout << "Unesite broj polozenih ispita: " << endl;
	cin >> brojPolozenihIspita;
	while (brojPolozenihIspita > maksimalniBrojIspita)
	{
		cout << "Broj polozenih ispita ne moze da bude veci od maksimalnog broja polozenih ispita!" << endl;
		cout << "Unesite ponovo: " << endl;
		cin >> brojPolozenihIspita;
	}
	cout << "Unos ocena za polozene ispite: " << endl;
	for (int i = 0; i < brojPolozenihIspita; i++)
	{
		cout << "ocena: " << endl;
		cin >> nizOcena[i];
		while (nizOcena[i] < 5 || nizOcena[i] >10)
		{
			cout << "Ocena nije u odgovarajucem opsegu! " << endl;
			cin >> nizOcena[i];
		}
	}
}

void Student::prikazOcena()//od najvece ka najmanjoj
{
	int pom;
	for (int i = 0; i < brojPolozenihIspita-1; i++)
	{
		for (int j = i+1; j < brojPolozenihIspita; j++)
		{
			if (nizOcena[j] >= nizOcena[i])
			{
				pom = nizOcena[i];
				nizOcena[i] = nizOcena[j];
				nizOcena[j] = pom;
			}
		}
	}
	cout << "Prikaz ocena: " << endl;
	for (int k = 0; k < brojPolozenihIspita; k++)
	{
		cout << nizOcena[k] << "\t";
	}
	cout << endl;
	
}

void Student::prikazStudenta()
{
	cout << "Ime:" << "\t" << ime << endl;
	cout << "Prezime: " << "\t" << prezime << endl;
	cout << "Broj Indeksa: " << "\t" << brojIndeksa << endl;
	cout << "Broj polozenih ispita: " << "\t" << brojPolozenihIspita << endl;
}

void Student::azurirajImeStudenta()
{
	char* novoIme = new char[20];
	cout << "Unesite novo ime studenta: " << endl;
	cin.ignore();
	cin.getline(novoIme, 20);
	ime = novoIme;
	char* novoPrezime = new char[30];
	cout << "Unesite novo prezime studenta: " << endl;
	cin.getline(novoPrezime, 30);
	prezime = novoPrezime;
}
