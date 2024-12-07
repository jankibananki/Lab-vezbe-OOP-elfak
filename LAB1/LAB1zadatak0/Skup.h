#pragma once

using namespace std;

class Skup
{
private:
	int brojElemenataSkupa;
	int* nizElemenata;
public:
	Skup()
	{
		brojElemenataSkupa = 0;
		nizElemenata = nullptr;
	}

	Skup(int brEl)
	{
		brojElemenataSkupa = brEl;
		nizElemenata = new int[brojElemenataSkupa];
	}

	~Skup()
	{
		delete[] nizElemenata;
		nizElemenata = nullptr;
		brojElemenataSkupa = 0;
	}

	inline int getBrojElemenata()
	{
		return brojElemenataSkupa;
	}

	bool pripada(int element);
	void izbaciDuplikate();
	void ucitajElementeSkupa();
	void urediNerastuce();
	void prikazElemenataSkupa();
};

