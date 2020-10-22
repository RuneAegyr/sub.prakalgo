#include <iostream>

using namespace std;

int main()
{
	int u1, u2, u3, u4;
	int b1, b2, b3, b4, btotal;

	cout << "Umur Ayah	: "; cin >> u1;
	cout << "Umur ibu 	: "; cin >> u2;
	cout << "Umur Anak 1	: "; cin >> u3;
	cout << "Umur Anak 2	: "; cin >> u4;

	//Ayah
	if (u1 <= 12) {
		b1 = 15000;
	} else if (u1 > 12 && u1 <= 20) {
		b1 = 20000;
	} else if (u1 > 20) {
		b1 = 30000;
	}

	//Ibu
	if (u2 <= 12) {
		b2 = 15000;
	} else if (u2 > 12 && u2 <= 20) {
		b2 = 20000;
	} else if (u2 > 20) {
		b2 = 30000;
	}

	//Anak 1
	if (u1 <= 12) {
		b3 = 15000;
	} else if (u3 > 12 && u3 <= 20) {
		b3 = 20000;
	} else if (u3 > 20) {
		b3 = 30000;
	}

	//Anak 2
	if (u4 <= 12) {
		b4 = 15000;
	} else if (u4 > 12 && u4 <= 20) {
		b4 = 20000;
	} else if (u4 > 20) {
		b4 = 30000;
	}

	btotal = (b1+b2+b3+b4)*30;

	cout << "Tagihan satu bulan adalah Rp." << btotal;

	return 0;
}
