#include "Poligon.h"
#include <iostream>

using namespace std;

int main()
{
	int t1;
	float o1;
	cout << "Unesi proizvoljan broj temena za poligon: " << endl;
	cin >> t1;
	Poligon p1 = Poligon(t1);
	p1.ucitajTemena();
	o1 = p1.izracunajObim();
	cout << "Obim unetog poligona je " << o1 << " ." << endl;

	int t2,ti;
	float o2;
	cout << "Unesi proizvoljan broj temena za novi poligon: " << endl;
	cin >> t2;
	Poligon* p2 = new Poligon(t2);
	p2->ucitajTemena();
	p2->prikaziTemena();
	cout << "Unesi broj temena koje se izbacuje: " << endl;
	cin >> ti;
	p2->izbaciTeme(ti);
	cout << "Prikaz temena nakon izbacivanja: " << endl;
	p2->prikaziTemena();
	p2->nadjiDveNajudaljenijeTacke();

	delete p2;
	
	return 0;
}
