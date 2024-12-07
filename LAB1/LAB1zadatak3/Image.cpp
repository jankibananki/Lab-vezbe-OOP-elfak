#include "Image.h"
#include <iostream>

using namespace std;

void Image :: invertujSliku()
{
	for (int i = 0; i < dimenzijaMatrice; i++)
	{
		for (int j = 0; j < dimenzijaMatrice; j++)
		{
			if (matrica[i][j] == 0)
			{
				matrica[i][j] = 1;
			}
			else
				matrica[i][j] = 0;
		}
	}
}

void Image :: ucitajSliku()
{
	for (int i = 0; i < dimenzijaMatrice; i++)
	{
		for (int j = 0; j < dimenzijaMatrice; j++)
		{
			cin >> matrica[i][j];
			while (matrica[i][j] != 0 && matrica[i][j] != 1)
			{
				cout << "Uneli ste neodgovarajuci element! Pokusajte ponovo! " << endl;
				cin >> matrica[i][j];
			}
		}
	}
	cin.ignore();
	cout << "Unesite lokaciju prethodno unesene slike: " << endl;
	cin.getline(lokacija, 20);
}

void Image :: prikaziSliku()
{
	for (int i = 0; i < dimenzijaMatrice; i++)
	{
		for (int j = 0; j < dimenzijaMatrice; j++)
		{
			cout << matrica[i][j] << " ";
		}
		cout << endl;
	}

	cout << "Na lokaciji: " << lokacija << endl;

}

void Image :: crop()
{
	int s;
	cout << "Unesite duzinu na koju skracujete sliku: " << endl;
	cin >> s;
	while (s > dimenzijaMatrice)
	{
		cout << "Uneta dimenzija je veca od prvobitne dimenzije matrice, pokusajte ponovo! " << endl;
		cin >> s;
	}
	int** novaMatrica = new int* [s];
	for (int i = 0; i < s; i++)
	{
		novaMatrica[i] = new int[s];
	}
	for (int i = 0; i < s; i++)
	{
		for (int j = 0; j < s; j++)
		{
			novaMatrica[i][j] = matrica[i][j];
		}
	}
	dimenzijaMatrice = s;
	for (int k = 0; k < dimenzijaMatrice; k++)
	{
		for (int l = 0; l < dimenzijaMatrice; l++)
		{
			matrica[k][l] = novaMatrica[k][l];
		}
	}
}
