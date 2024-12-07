#include "Poligon.h"
#include <cmath>
#include <iostream>

using namespace std;

float Poligon::izracunajObim()
{
	float stranica, obim = 0;
	for (int i = 0; i < brojTemena-1; i++)
	{
		stranica = sqrt(pow(abs(xKoordinate[i] - xKoordinate[i + 1]), 2) + pow(abs(yKoordinate[i] - yKoordinate[i + 1]), 2));
		obim += stranica;
	}
	stranica = sqrt(pow(abs(xKoordinate[brojTemena-1] - xKoordinate[0]), 2) + pow(abs(yKoordinate[brojTemena-1] - yKoordinate[0]), 2));
	//kako bi se nasla duzina izmedju poslednjeg i prvog temena
	obim += stranica;
	return obim;
}

void Poligon::ucitajTemena()
{
	for (int i = 0; i < brojTemena; i++)
	{
		cout << "Unesi X koordinatu temena broj " << i << ":" << endl;
		cin >> xKoordinate[i];
		cout << "Unesi Y koordinatu temena broj " << i << ":" << endl;
		cin >> yKoordinate[i];
	}
}

void Poligon::nadjiDveNajudaljenijeTacke()
{
	float najveceRastojanje = 0, stranica;
	int teme1=0, teme2=0;

	for (int i = 0; i < brojTemena - 1; i++)
	{
		for (int j = i + 1; j < brojTemena; j++)
		{
			stranica = sqrt(pow(abs(xKoordinate[i] - xKoordinate[j]), 2) + pow(abs(yKoordinate[i] - yKoordinate[j]), 2));
			if (stranica >= najveceRastojanje)
			{
				najveceRastojanje = stranica;
				teme1 = i;
				teme2 = j;
			}
		}
	}
	cout << "Dva najudaljenija temena su teme broj " << teme1 << "sa koordinatama: X=" << xKoordinate[teme1] << ", Y=" << yKoordinate[teme1] << " i teme " << teme2 << "sa koordinatama: X=" << xKoordinate[teme2] << ", Y=" << yKoordinate[teme2] << " ." << endl;
}

void Poligon::prikaziTemena()
{
	for (int i = 0; i < brojTemena; i++)
	{
		cout << "Teme broj " << i << " ,koordinate: X=" << xKoordinate[i] << " ,Y=" << yKoordinate[i] << " ." << endl;
	}
}

void Poligon::izbaciTeme(int brTem)
{
	brojTemena--;
	for (int i = brTem; i < brojTemena; i++)
	{
		xKoordinate[i] = xKoordinate[i + 1];
		yKoordinate[i] = yKoordinate[i + 1];
	}
}
