#pragma once
class Minesweeper
{
private:
	int dimenzijaMatrice;
	bool** matrica;
	char* nazivPolja;
public:
	Minesweeper()
	{
		dimenzijaMatrice = 10;
		matrica = new bool*[10];
		for (int i = 0; i < dimenzijaMatrice; i++)
		{
			matrica[i] = new bool[10];
		}
		for (int i = 0; i < dimenzijaMatrice; i++)
		{
			for (int j = 0; j < dimenzijaMatrice; j++)
			{
				matrica[i][j] = false;
			}
		}
		nazivPolja = new char[100];
	}

	Minesweeper(int dim)
	{
		dimenzijaMatrice = dim;
		matrica = new bool* [dim];
		for (int i = 0; i < dimenzijaMatrice; i++)
		{
			matrica[i] = new bool[10];
		}
		for (int i = 0; i < dimenzijaMatrice; i++)
		{
			for (int j = 0; j < dimenzijaMatrice; j++)
			{
				matrica[i][j] = false;
			}
		}
		nazivPolja = new char[100];
	}

	~Minesweeper()
	{
		for (int i = 0; i < dimenzijaMatrice; i++)
		{
			delete[] matrica[i];
		}

		delete[] matrica;
		delete[] nazivPolja;
	}

	inline int getDimenzijaPolja()
	{
		return dimenzijaMatrice;
	}

	void ucitajImePolja(char* ime);
	int brojMinaOkoPolja(int red, int kolona);
	void ucitajRasporedMina(int ik, int jk);
	void prikazMinskogPolja();
	void izbaciRedoveIKoloneBezMina();

};

