#include "Minesweeper.h"
#include <iostream>

using namespace std;

int main()
{
	int brojMina, ik, jk;
	char* ime1 = new char[20];
	Minesweeper m1 = Minesweeper();
	cout << "Koliko mina sadrzi ovo polje? " << endl;
	cin >> brojMina;
	for (int i = 0; i < brojMina; i++)
	{
		cout << "Unesite poziciju polja na kojem ce biti mina: " << endl;
		cin >> ik;
		cin >> jk;
		m1.ucitajRasporedMina(ik, jk);
	}
	cin.ignore();
	cout << "Kako ce se zvati ovo polje? " << endl;
	cin.getline(ime1, 20);
	m1.ucitajImePolja(ime1);
	cout << "Nakon unosa polje izgleda ovako: " << endl;
	m1.prikazMinskogPolja();

	cout << "Unesite poziciju za proveru: " << endl;
	cin >> ik; cin >> jk;
	if (m1.brojMinaOkoPolja(ik, jk) == -1)
	{
		cout << "Na ovom polju se nalazi mina! " << endl;
		m1.prikazMinskogPolja();
	}
	else
	{
		cout << "Broj mina oko ovog polja je: " << m1.brojMinaOkoPolja(ik, jk) << "." << endl;
	}


	int dimenzija2;
	cout << "Unesite dimenziju novog polja: " << endl;
	cin >> dimenzija2;
	Minesweeper* m2 = new Minesweeper(dimenzija2);
	cout << "Koliko mina sadrzi ovo polje? " << endl;
	cin >> brojMina;
	for (int i = 0; i < brojMina; i++)
	{
		cout << "Unesite poziciju polja na kojem ce biti mina: " << endl;
		cin >> ik;
		cin >> jk;
		m2->ucitajRasporedMina(ik, jk);
	}
	char* ime2 = new char[20];
	cin.ignore();
	cout << "Kako ce se zvati ovo polje? " << endl;
	cin.getline(ime2, 20);
	m2->ucitajImePolja(ime2);
	cout << "Nakon unosa polje izgleda ovako: " << endl;
	m2->prikazMinskogPolja();

	m2->izbaciRedoveIKoloneBezMina();

	delete m2;

	return 0;
}