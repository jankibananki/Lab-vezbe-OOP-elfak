#pragma once
#include <string.h>
#include <iostream>
using namespace std;
class String
{
private:
	int duzinaStringa;
	char* niz;
public:
	String();
	String(int duzina);
	String(const String& other);
	~String();
	inline int getDuzinaStringa() const
	{
		return duzinaStringa;
	}
	const char* getNiz() const;
	int pozicijaPodstringa(const char* podstring) const;
	void ucitajString(int duzina);
	void prikaziString();
	
	String& operator=(const String& other) {

		if (this != &other)
		{
			delete[] niz;
			duzinaStringa = other.duzinaStringa;
			niz = new char[duzinaStringa + 1];
			strcpy(niz, other.niz);
			return*this;
		}
		else
		{
			return*this;
		}
	}

	String& operator+(const String& other) const;
	
	//String nadoveziStringove(String* str1, String* str2);
	void konvertujPrvoUVeliko();
	void konvertujUVeliko();
	void PadRight(int zahtevanaDuzina, char prosledjeniKarakter);
	
	friend std::istream& operator>>(std::istream& is, String& str) {
		is >> str.niz;
		str.duzinaStringa = strlen(str.niz);
		return is;
	}

	friend std::ostream& operator<<(std::ostream& os, const String& str) {
		os << str.niz;
		return os;
	}
};

