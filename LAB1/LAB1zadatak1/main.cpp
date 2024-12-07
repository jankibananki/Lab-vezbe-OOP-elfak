#include "Student.h"
#include <iostream>

using namespace std;

int main()
{
	int maksBrojIsp;
	cout << "Unesite maksimalan broj ispita: " << endl;
	cin >> maksBrojIsp;
	Student Student1 = Student(maksBrojIsp);
	Student1.ucitajStudenta();
	Student1.dodajOcenu();
	Student1.prikazStudenta();

	Student* Student2 = new Student(maksBrojIsp);
	Student2->ucitajStudenta();
	Student2->dodajOcenu();
	Student2->prikazOcena();
	Student2->azurirajImeStudenta();
	Student2->prikazStudenta();


}