#include "Vektor.h"
#include <iostream>

using namespace std;

int main()
{
	int dim1, dim2, el;
	cout << "Unesi dimenziju prvog vektora: " << endl;
	cin >> dim1;
	Vektor v1 = Vektor(dim1);
	cout << "Unesi vektor: " << endl;
	for (int i = 0; i < dim1; i++)
	{
		cin >> el;
		v1.setKtiElementVektora(i, el);
	}
	v1.urediNeopadajuce();
	cout << "Prikaz vektora nakon unosa i uredjivanja: " << endl;
	for (int i = 0; i < dim1; i++)
	{
		cout << v1.getKtiElemenetVektora(i)<< " ";
	}
	cout << endl;

	cout << "Unesi dimenziju drugog vektora: " << endl;
	cin >> dim2;
	Vektor* v2 = new Vektor(dim2);
	cout << "Unesi vektor: " << endl;
	for (int i = 0; i < dim2; i++)
	{
		cin >> el;
		v2->setKtiElementVektora(i, el);
	}
	int najbliziSrednjoj;
	najbliziSrednjoj=v2->najbliziSrednjojVrednosti();
	cout << "Element najblizi srednjoj vrednosti je element sa indeksom " << najbliziSrednjoj << " i njegova vrednost je " << v2->getKtiElemenetVektora(najbliziSrednjoj) << endl;

	Vektor* v3 = new Vektor(dim2);
	int proizvod1, proizvod2;
	cout << "Unesi vektor: " << endl;
	for (int i = 0; i < dim2; i++)
	{
		cin >> el;
		v3->setKtiElementVektora(i, el);
	}

	proizvod1 = v2->skalarniProizvod(*v3);
	if (proizvod1 != -1)
	{
		cout << "Skalarni proizvod vektora 2. i 3. je: " << proizvod1 << endl;
	}
	else
	{
		cout << "Skalarni proizvod ovih vektora nije moguce izracunati jer nisu istih dimenzija!";
	}

	proizvod2 = v1.skalarniProizvod(*v3);

	if (proizvod2 != -1)
	{
		cout << "Skalarni proizvod vektora 1. i 3. je: " << proizvod2 << endl;
	}
	else
	{
		cout << "Skalarni proizvod ovih vektora nije moguce izracunati jer nisu istih dimenzija!";
	}

	delete v2;
	delete v3;//problem sa curenjem memorije, ostalo radi.

	return 0;
}