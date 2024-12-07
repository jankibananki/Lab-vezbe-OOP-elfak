#include "Buffer.h"
#include <iostream>

using namespace std;

int main()
{
	int n, m, vel;
	cout << "Unesi velicinu buffera: " << endl;
	cin >> vel;
	Buffer buf1 = Buffer(vel);
	cout << "Unesi broj elemenata koji se upisuju: " << endl;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		buf1.push(i);
	}

	Buffer* buf2 = new Buffer(vel);
	for (int i = 0; i < n; i++)
	{
		buf2->push(buf1.pop());
	}

	for (int i = n-1; i >= 0; i--)
	{
		buf1.push(i);
	}

	cout << "Unesi broj elemenata koji se izbacuju: " << endl;
	cin >> m;

	for (int i = 0; i < m; i++)
	{
		buf1.pop();
	}

	cout << "Prikaz prvog buffera: " << endl;
	buf1.prikazSadrzaja();
	cout << "a broj trenutrno upisanih elemenata je: " << buf1.getBrojTrenutnoUpisanihElemenata() << "." << endl;

	cout << "Prikaz drugog buffera: " << endl;
	buf2->prikazSadrzaja();
	cout << "a broj trenutrno upisanih elemenata je: " << buf2->getBrojTrenutnoUpisanihElemenata() << "." << endl;

	delete buf2;

	return 0;

}