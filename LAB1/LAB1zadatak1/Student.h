#pragma once
class Student
{
private:
	char* ime;
	char* prezime;
	int brojIndeksa;
	int maksimalniBrojIspita;
	int brojPolozenihIspita;
	int* nizOcena;
public:

	/*Student()
	{
		ime = nullptr;
		prezime = nullptr;
		brojIndeksa = 0;
		maksimalniBrojIspita = 0;
		brojPolozenihIspita = 0;
		nizOcena = nullptr;
	}*/
	//default konstruktor
	Student(int maksBrIsp) : maksimalniBrojIspita(maksBrIsp), brojPolozenihIspita(0)
	{
		ime = new char[20];
		prezime = new char[30];
		nizOcena = new int[maksimalniBrojIspita];
	}
	//konstruktor koji setuje maksimalni broj ispita

	/*Student(char* i, char* p, int brInd, int maksIsp, int brPol, int* ocene)
	{
		ime = i;
		prezime = p;
		brojIndeksa = brInd;
		maksimalniBrojIspita = maksIsp;
		brojPolozenihIspita = brPol;
		nizOcena = ocene;
	}*/
	//konstruktor s parametrima

	~Student()
	{
		delete[] ime;
		delete[] prezime;
		delete[] nizOcena;
	}
	//destruktor

	inline int getBrojIndeksa()
	{
		return brojIndeksa;
	}

	inline int getBrojPolozenihIspita()
	{
		return brojPolozenihIspita;
	}

	void dodajOcenu(); //od 5 do 10
	void ucitajStudenta();
	void prikazOcena();//od najvece ka najmanjoj
	void prikazStudenta();
	void azurirajImeStudenta();

};

