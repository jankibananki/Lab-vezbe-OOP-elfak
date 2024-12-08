#include "Minesweeper.h"
#include <iostream>

using namespace std;

void Minesweeper :: ucitajImePolja(char* ime)
{
	nazivPolja = ime;
}

int Minesweeper :: brojMinaOkoPolja(int red, int kolona)
{
	if (red < 0 || red >= dimenzijaMatrice || kolona < 0 || kolona >= dimenzijaMatrice)
	{
		return -2; //greska red i kolona su van dimenzija matrice
	}
	int brojMina = 0; 

	for (int i = 0; i < dimenzijaMatrice; i++)
	{
		for (int j = 0; j < dimenzijaMatrice; j++)
		{
			if (i >= 0 && i < dimenzijaMatrice && j >= 0 && j < dimenzijaMatrice)
			{
				if (matrica[red][kolona])
				{
					return -1;
				}
			}
		}
	}

	for (int i = -1; i <= 1; i++)
	{
		for (int j = -1; j < 1; j++)
		{
			if (matrica[red + i][kolona + j])
				brojMina++;
		}
	}

	return brojMina;
}

void Minesweeper :: ucitajRasporedMina(int ik, int jk)
{
	if (ik >= dimenzijaMatrice || jk >= dimenzijaMatrice)
	{
		cout << "Unete vrednosti su van polja! " << endl;
	}

	for (int i = 0; i < dimenzijaMatrice; i++)
	{
		for (int j = 0; j < dimenzijaMatrice; j++)
		{
			if (!matrica[ik][jk])
			{
				matrica[ik][jk] = true;
			}
		}
	}
}

void Minesweeper :: prikazMinskogPolja()
{
	for (int i = 0; i < dimenzijaMatrice; i++)
	{
		for (int j = 0; j < dimenzijaMatrice; j++)
		{
			if (matrica[i][j])
			{
				cout << "1 ";
			}
			else
				cout << "0 ";
		}
		cout << endl;
	}
	cout << "Naziv ovog minskog polja je: " << nazivPolja << endl;
}

void Minesweeper :: izbaciRedoveIKoloneBezMina()
{

	bool* redoviZaBrisanje = new bool[dimenzijaMatrice]();
	bool* koloneZaBrisanje = new bool[dimenzijaMatrice]();

	for (int i = 0; i < dimenzijaMatrice; ++i) {
		bool minaURedu = false;
		bool minaUKoloni = false;
		for (int j = 0; j < dimenzijaMatrice; ++j) {
			if (matrica[i][j]) 
				minaURedu = true;
			if (matrica[j][i]) 
				minaUKoloni = true;
		}
		if (!minaURedu) 
			redoviZaBrisanje[i] = true;
		if (!minaUKoloni) 
			koloneZaBrisanje[i] = true;
	}

	cout << "Polje nakon izbacivanja redova i kolona bez mina:\n";
	for (int i = 0; i < dimenzijaMatrice; ++i) {
		if (redoviZaBrisanje[i]) continue;
		for (int j = 0; j < dimenzijaMatrice; ++j) {
			if (koloneZaBrisanje[j]) continue;
			cout << (matrica[i][j] ? "1 " : "0 ");
		}
		cout << endl;
	}

	delete[] redoviZaBrisanje;
	delete[] koloneZaBrisanje;
}


