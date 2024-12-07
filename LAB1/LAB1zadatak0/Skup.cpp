#include "Skup.h"
#include <iostream>

using namespace std;

bool Skup::pripada(int element)
{
	int p = 0;
	for (int i = 0; i < brojElemenataSkupa; i++)
	{
		if (element == nizElemenata[i])
		{
			p++;
		}
	}
	
	if (p > 0)
	{
		return true;
	}
	else
		return false;
}

void Skup::izbaciDuplikate() {

	if (brojElemenataSkupa <= 1) {
		cout << "Skup nema duplikata! " << endl;  // Nema duplikata ako je skup prazan ili ima samo jedan element
	}

	int j = 0;
	for (int i = 1; i < brojElemenataSkupa; ++i) {
		bool duplikat = false;
		for (int k = 0; k < j; ++k) {
			if (nizElemenata[i] == nizElemenata[k]) {
				duplikat = true;
				break;
			}
		}
		if (!duplikat) {
			nizElemenata[j++] = nizElemenata[i];
		}
	}
	brojElemenataSkupa = j;
}

void Skup :: ucitajElementeSkupa()
{

	for (int i = 0; i < brojElemenataSkupa; i++)
	{
		cin >> nizElemenata[i];
	}

}

void Skup::urediNerastuce()
{
	for (int i = 0; i < brojElemenataSkupa - 1; i++) {
		int maxIndex = i;
		for (int j = i + 1; j < brojElemenataSkupa; j++) {
			if (nizElemenata[j] > nizElemenata[maxIndex]) {
				maxIndex = j;
			}
		}
		// Zamena najvećeg elementa s trenutnim
		int temp = nizElemenata[i];
		nizElemenata[i] = nizElemenata[maxIndex];
		nizElemenata[maxIndex] = temp;
	}
}

void Skup::prikazElemenataSkupa()
{
	for (int i = 0; i < brojElemenataSkupa; i++)
	{
		cout << nizElemenata[i] << " ";
	}
	cout << endl;
}
