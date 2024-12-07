#pragma once
class Buffer
{
private:
	int velicina;
	int* nizPodataka;
	int brojTrenutnoUpisanihElemenata;
public:

	Buffer()
	{
		velicina = 0;
		brojTrenutnoUpisanihElemenata = 0;
		nizPodataka = nullptr;
	}

	Buffer(int vel)
	{
		velicina = vel;
		brojTrenutnoUpisanihElemenata = 0;
		nizPodataka = new int[velicina];
	}

	~Buffer()
	{
		delete[] nizPodataka;
	}

	inline int getBrojTrenutnoUpisanihElemenata()
	{
		return brojTrenutnoUpisanihElemenata;
	}

	void push(int podatak);
	int pop();
	void prikazSadrzaja();
	void duplirajVelicinu();
	void izbaciNezauzetaMesta();
};

