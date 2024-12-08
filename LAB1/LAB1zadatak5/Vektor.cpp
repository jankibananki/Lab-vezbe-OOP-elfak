#include "Vektor.h"
#include <iostream>
#include <cmath>

using namespace std;

void Vektor :: urediNeopadajuce()
{
	for (int i = 0; i < dimenzijaVektora - 1; i++) {
		int maxIndex = i;
		for (int j = i + 1; j < dimenzijaVektora; j++) {
			if (nizPodataka[j] > nizPodataka[maxIndex]) {
				maxIndex = j;
			}
		}
		// Zamena najvećeg elementa s trenutnim
		int temp = nizPodataka[i];
		nizPodataka[i] = nizPodataka[maxIndex];
		nizPodataka[maxIndex] = temp;
	}
}

int Vektor :: skalarniProizvod(Vektor v2)
{
	int rezultat = 0;
	if (dimenzijaVektora != v2.dimenzijaVektora)
	{
		return -1;
	}
	else
	{
		for (int i = 0; i < dimenzijaVektora; i++)
		{
			rezultat += nizPodataka[i] * v2.nizPodataka[i];
		}
	}
	return rezultat;
}

int Vektor :: najbliziSrednjojVrednosti()
{
	int zbir = 0;
	int indeks= 0;
	float srednjaVrednost, najmanjaRazlika=100;

	for (int i = 0; i < dimenzijaVektora; i++)
	{
		zbir += nizPodataka[i];
	}
	
	srednjaVrednost = static_cast<float>(zbir) / dimenzijaVektora;

	for (int i = 0; i < dimenzijaVektora; i++)
	{
		if (abs(nizPodataka[i] - srednjaVrednost) < najmanjaRazlika)
		{
			najmanjaRazlika = abs(nizPodataka[i] - srednjaVrednost);
			indeks = i;
		}
	}
	return indeks;
}
