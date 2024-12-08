#pragma once
class Vektor
{
private:
	int dimenzijaVektora;
	int* nizPodataka;
public:
	Vektor()
	{
		dimenzijaVektora = 0;
		nizPodataka = nullptr;
	}

	Vektor(int dim)
	{
		dimenzijaVektora = dim;
		nizPodataka = new int[dimenzijaVektora];
	}

	~Vektor()
	{
		delete[] nizPodataka;
	}

	inline void setKtiElementVektora(int k, int element)
	{
		nizPodataka[k] = element;
	}

	inline int getKtiElemenetVektora(int k) const
	{
		return nizPodataka[k];
	}

	void urediNeopadajuce();
	int skalarniProizvod(Vektor v2);
	int najbliziSrednjojVrednosti();
};

