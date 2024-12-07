#include "Skup.h"
#include <iostream>

using namespace std;

int main()
{
	Skup* skup = new Skup(10);

	cout << "Ucitaj elemente skupa: " << endl;
	skup->ucitajElementeSkupa();

	int broj;
	
	cout << "Unesi broj za proveru pripadnosti: " << endl;
	cin >> broj;

	if (skup->pripada(broj))
	{
		cout << "Uneti broj pripada skupu!" << endl;
	}
	else
	{
		cout << "Uneti broj ne pripada skupu!" << endl;
	}

	Skup* skup2 = new Skup(10);
	cout << "Unesi elemente novog skupa: " << endl;
	skup2->ucitajElementeSkupa();

	cout << "Prikaz elemenata unetog novog skupa: " << endl;
	skup2->prikazElemenataSkupa();

	skup2->izbaciDuplikate();
	cout << "Prikaz elemenata skupa nakon izbacivanja duplikata: " << endl;
	skup2->prikazElemenataSkupa();

	skup2->urediNerastuce();
	cout << "Prikaz elemenata skupa nakon uredjivanja u nerastucem redosledu: " << endl;
	skup2->prikazElemenataSkupa();
}