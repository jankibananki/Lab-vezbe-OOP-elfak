#pragma once
class Image
{
private:
	int dimenzijaMatrice;
	int** matrica;
	char* lokacija;
public:
	Image()
	{
		dimenzijaMatrice = 0;
		matrica = nullptr;
		lokacija = nullptr;
	}

	Image(int vel)
	{
		dimenzijaMatrice = vel;
		matrica = new int*[dimenzijaMatrice];
		for (int i = 0; i < dimenzijaMatrice; i++)
		{
			matrica[i] = new int[dimenzijaMatrice]();
		}
		lokacija = new char[20];
	}

	~Image()
	{
		for(int i=0; i<dimenzijaMatrice; i++)
			{
				delete[] matrica[i];
			}
		delete[] matrica;
		delete[] lokacija;
	}

	inline int getDimenzijaMatrice()
	{
		return dimenzijaMatrice;
	}

	void invertujSliku();
	void ucitajSliku();
	void prikaziSliku();
	void crop();

};

