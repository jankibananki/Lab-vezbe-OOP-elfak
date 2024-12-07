#include "Image.h"
#include <iostream>

using namespace std;

int main()
{
	int vel;
	cout << "Unesite dimenziju matrice: " << endl;
	cin >> vel;
	Image i1 = Image(vel);
	cout << "Unesi sadrzaj prve slike: " << endl;
	i1.ucitajSliku();
	cout << "Prikaz unete slike: " << endl;
	i1.prikaziSliku();
	i1.invertujSliku();
	cout << "Nakon invertovanja, slika izgleda ovako: " << endl;
	i1.prikaziSliku();

	int vel2;
	cout << "Unesite dimenziju nove matrice: " << endl;
	cin >> vel2;
	Image* i2 = new Image(vel2);
	cout << "Unesite novu matricu: " << endl;
	i2->ucitajSliku();
	cout << "Prikaz unete slike: " << endl;
	i2->crop();
	cout << "Nakon secenja, slika izgleda ovako: " << endl;
	i2->prikaziSliku();

	delete i2;
	
	return 0;
}