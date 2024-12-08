#pragma once
#include "String.h"

class Paragraph
{
private: 
	int maksimalanBrojStringova;
	int brojStringova;
	String* string;
public:
	Paragraph();
	Paragraph(int br );
	Paragraph(const Paragraph& other);
	~Paragraph();
	void dodajStringUParagraf(String s, int duzina);
	void prikazParagrafa(Paragraph paragraf);
	
	friend ostream& operator<<(ostream& os, const Paragraph& p)
	{
		for (int i = 0; i < p.brojStringova; i++)
		{
			os << p.string[i] << " ";
		}
		return os;
	}
};

