#pragma once
class Poligon
{
private:
	int brojTemena;
	float* xKoordinate;
	float* yKoordinate;
public:
	Poligon()
	{
		brojTemena = 0;
		xKoordinate = nullptr;
		yKoordinate = nullptr;
	}

	Poligon(int brTemena)
	{
		brojTemena = brTemena;
		xKoordinate = new float[brojTemena];
		yKoordinate = new float[brojTemena];
	}

	~Poligon()
	{
		delete[] xKoordinate;
		delete[] yKoordinate;
	}

	inline int getBrojTemena()
	{
		return brojTemena;
	}

	float izracunajObim();
	void ucitajTemena();
	void nadjiDveNajudaljenijeTacke();
	void prikaziTemena();
	void izbaciTeme(int brTem);
};

