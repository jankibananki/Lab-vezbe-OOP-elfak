#include "String.h"
#include <iostream>

using namespace std;

String::String()
{
	duzinaStringa = 0;
	niz = nullptr;
}

String::String(int duzina)
{
	this->duzinaStringa = duzina;
	niz = new char[duzinaStringa + 1];//zbog null terminatora
	niz[duzinaStringa] = '\0';
}

String::String(const String& other)
{
	duzinaStringa = other.duzinaStringa;
	niz = new char[duzinaStringa + 1]; // +1 za null terminator
	strcpy(niz, other.niz);
}

String::~String()
{
	delete[] niz;
}

int String::pozicijaPodstringa(const char* podstring) const
{
	if (niz == nullptr || podstring == nullptr) {
		return -1; // Greška: null pointer
	}

	for (int i = 0; i <= duzinaStringa - strlen(podstring); i++) {
		if (strncmp(niz + i, podstring, strlen(podstring)) == 0) {
			return i;
		}
	}
	return -1;
}

void String::ucitajString(int duzina) 
{
	cout << "Unesi string: " << endl;
	/*for (int i = 0; i < duzina; i++)
	{
		cin >> niz[i];
	}*/
	cin.getline(niz, duzina+1);
}



String& String::operator+(const String& other) const
{
	String* rezultat=new String(duzinaStringa+other.duzinaStringa+1);
	char* noviNiz = new char[duzinaStringa + other.duzinaStringa + 2];
	strcpy(noviNiz, niz);
	strcat(noviNiz, " ");
	strcat(noviNiz, other.niz);
	rezultat->niz = noviNiz;
	rezultat->duzinaStringa = duzinaStringa + other.duzinaStringa + 1;
	return *rezultat;
}

void String::prikaziString()
{
	cout << niz << endl;
}

const char* String::getNiz() const {
	return niz;
}

void String::konvertujPrvoUVeliko()
{
	if (duzinaStringa > 0)
	{
		if (niz[0] >= 65 && niz[0] <= 90)
		{
			niz[0] = niz[0];
		}
		else
			niz[0] = niz[0] - 32;
	}
}

void String::konvertujUVeliko()
{
	for (int i = 0; i < duzinaStringa; i++)
	{
		if (niz[i] == ' ')
			niz[i] = ' ';
		else
		{
			if (niz[i] >= 65 && niz[i] <= 90)
			{
				niz[i] = niz[i];
			}
			else
				niz[i] = niz[i] - 32;
		}
	}
}

/*String String::nadoveziStringove(String* str1, String* str2)
{
	String rezultat;
	rezultat = *str1 + *str2;
	niz = rezultat.niz;
	duzinaStringa = rezultat.duzinaStringa;
	return rezultat;
}*/

void String::PadRight(int zahtevanaDuzina, char prosledjeniKarakter)
{
	if (duzinaStringa < zahtevanaDuzina)
	{
		char* noviNiz = new char[zahtevanaDuzina + 1];
		strcpy(noviNiz, niz);
		for (int i = duzinaStringa; i < zahtevanaDuzina; i++)
		{
			noviNiz[i] = prosledjeniKarakter;
		}
		noviNiz[zahtevanaDuzina] = '\0';
		delete[] niz;
		niz = noviNiz;
		duzinaStringa = zahtevanaDuzina;
	}
}

