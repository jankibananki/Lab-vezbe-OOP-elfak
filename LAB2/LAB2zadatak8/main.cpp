#include "String.h"
#include "Paragraph.h"
#include <iostream>

using namespace std;

int main()
{
	/*int duzina;
	cout << "Unesi duzinu stringa: " << endl;
	cin >> duzina;
	cin.ignore();
	String* string1=new String(duzina);
	string1->ucitajString(duzina);
	cout << "Unesi duzinu podstringa: " << endl;
	int duzinaPodstringa;
	cin >> duzinaPodstringa;
	cin.ignore();
	String* podstring= new String(duzinaPodstringa);
	podstring->ucitajString(duzinaPodstringa);
	char* podstringniz = new char[duzinaPodstringa];
	strcpy(podstringniz, podstring->getNiz());
	int pozicija;

	if (string1->pozicijaPodstringa(podstringniz) != -1)
	{
		pozicija = string1->pozicijaPodstringa(podstringniz);
		cout << "Pozicija podstringa je: " << pozicija << endl; // ili pozicija + 1 ako se ne gleda od nule
	}
	else
		cout << "Podstring nije pronadjen!" << endl;


	string1 = podstring;

	cout << "Prikazi string nakon primene operatora dodele: " << endl;
	string1->prikaziString();

	*/
	cout << "Unesite duzinu prvog stringa: " << endl;
	int duzina1;
	cin >> duzina1;
	cin.ignore();
	String* prviString = new String(duzina1);
	prviString->ucitajString(duzina1);
	cout << "Unesite duzinu drugog stringa: " << endl;
	int duzina2;
	cin >> duzina2;
	cin.ignore();
	String* drugiString = new String(duzina2);
	drugiString->ucitajString(duzina2);
	String* treciString = new String(duzina1 + duzina2);
	//treciString->nadoveziStringove(prviString, drugiString);
	*treciString = *prviString + *drugiString;
	cout << "Prikazi nadovezane stringove: " << endl;
	//treciString->prikaziString();
	cout << *treciString<<endl;
	treciString->konvertujPrvoUVeliko();
	cout << "Prikazi string nakon konvertovanja prvog slova u veliko: "<<endl;
	//treciString->prikaziString();
	cout << *treciString<<endl;
	treciString->konvertujUVeliko();
	cout << "Prikazi string nakon konvertovanja u veliko: " << endl;
	//treciString->prikaziString();
	cout << *treciString<<endl;
	cout << "Unesite zahtevanu duzinu za prosiravanje stringa: " << endl;
	int zahtevanaDuzina;
	cin >> zahtevanaDuzina;
	cin.ignore();
	cout << "Unesite karakter kojim cete prosiriti string: " << endl;
	char karakter;
	cin >> karakter;
	treciString->PadRight(zahtevanaDuzina, karakter);
	cout << "Nakon primene funkcije PadRight string izgleda ovako: " << endl << *treciString << endl;
	delete prviString;
	delete drugiString;
	delete treciString;
	
	cout << "Unesite maksimalan broj Stringova: " << endl;
	int maksBrojStringova;
	cin >> maksBrojStringova;
	Paragraph* paragraf = new Paragraph(maksBrojStringova);
	cout << "Unesite duzinu prvog stringa: " << endl;
	int d1, d2;
	cin >> d1;
	cin.ignore();
	//cout << "Unesite prvi String: " << endl;
	String* str1 = new String(d1);
	//cin >> *str1;
	str1->ucitajString(d1);
	cout << "Unesite duzinu drugog stringa: " << endl;
	cin >> d2;
	cin.ignore();
	//cout << "Unesite drugi string: " << endl;
	String* str2 = new String(d2);
	//cin >> *str2;
	str2->ucitajString(d2);
	paragraf->dodajStringUParagraf(*str1,d1);
	paragraf->dodajStringUParagraf(*str2,d2);
	cout << "Nakon dodavanja stringova u paragraf, paragraf izgleda ovako: " << endl;
	paragraf->prikazParagrafa(*paragraf);
	//cout << *paragraf;
}