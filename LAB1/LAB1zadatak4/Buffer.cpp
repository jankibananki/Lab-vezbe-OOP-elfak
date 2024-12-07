#include "Buffer.h"
#include <iostream>

using namespace std;

void Buffer :: push(int podatak)
{
	if (brojTrenutnoUpisanihElemenata < velicina)
	{
		nizPodataka[brojTrenutnoUpisanihElemenata] = podatak;
		brojTrenutnoUpisanihElemenata++;
	}
	else
	{
		cout << "Podatak se ne moze dodati na buffer, buffer je pun! " << endl;
	}
}

int Buffer :: pop()
{
	
	if (brojTrenutnoUpisanihElemenata == 0) {
		cout << "Buffer je prazan!" << endl;
		return -1; 
	}
	brojTrenutnoUpisanihElemenata--;
	return nizPodataka[brojTrenutnoUpisanihElemenata];
}

void Buffer :: prikazSadrzaja()
{
	for (int i = 0; i < brojTrenutnoUpisanihElemenata; i++)
	{
		cout << nizPodataka[i] << " ";
	}
	cout << endl;
}

void Buffer :: duplirajVelicinu()
{
	velicina = velicina * 2;
}

void Buffer :: izbaciNezauzetaMesta()
{
	int* noviNiz = new int[brojTrenutnoUpisanihElemenata];
	for (int i = 0; i < brojTrenutnoUpisanihElemenata; i++)
	{
		noviNiz[i] = nizPodataka[i];
	}
	delete[] nizPodataka;
	velicina = brojTrenutnoUpisanihElemenata;
	nizPodataka = new int[velicina];
	for (int j = 0; j < velicina; j++)
	{
		nizPodataka[j] = noviNiz[j];
	}
}