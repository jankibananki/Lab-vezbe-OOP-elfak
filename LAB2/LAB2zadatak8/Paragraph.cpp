#include "Paragraph.h"
#include "String.h"
#include <iostream>

using namespace std;

Paragraph::Paragraph()
{
	maksimalanBrojStringova = 0;
	brojStringova = 0;
	string = nullptr;
}

Paragraph::Paragraph(int br)
{
	maksimalanBrojStringova = br;
	brojStringova = 0;
	string = nullptr;
}

Paragraph::Paragraph(const Paragraph& other)
{
	maksimalanBrojStringova = other.maksimalanBrojStringova;
	brojStringova = other.brojStringova;
	string = new String();
	string = other.string;
}

Paragraph::~Paragraph()
{
		delete[] string;
}


void Paragraph::dodajStringUParagraf(String s, int duzina)
{
	if (brojStringova < maksimalanBrojStringova)
	{
		string[brojStringova] = String(duzina);
		string[brojStringova] = s;
	}
	else
	{
		cout << "Paragraf je pun!";
	}
}

void Paragraph::prikazParagrafa(Paragraph paragraf)
{
	for (int i = 0; i < brojStringova; i++)
	{
		string[i].prikaziString();
		cout << endl;
	}
}


