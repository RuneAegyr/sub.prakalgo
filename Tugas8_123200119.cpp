#include <iostream>

using namespace std;

double luas(double r){
	return 3.14 * r * r;
}

double kel(double r){
	return 2 * 3.14 * r;
}

double vol(double r,double t){
	return 3.14 * r * r * t;
}

int main(){
	
	int pil;
	double r,t;
	char pil2;
	
	do{
		cout << "Hitung Lingkaran ==========\n";
		cout << "1. Luas Lingkaran\n";
		cout << "2. Keliling Lingkaran\n";
		cout << "3. Volume Tabung\n";
		cout << "Pilih: "; cin >> pil;
		switch (pil){
			case 1:
				cout << "Jari - jari     : "; cin >> r;
				cout << "Luas Lingkaran adalah " << luas(r) << endl;
				break;
			case 2:
				cout << "Jari - jari     : "; cin >> r;
				cout << "Keliling Lingkaran adalah " << kel(r) << endl;
				break;
			case 3:
				cout << "Jari - jari     : "; cin >> r;
				cout << "Tinggi          : "; cin >> t;
				cout << "Volume Tabung adalah " << vol(r,t) << endl;
				break;
			default :
				cout << "Input Salah :)\n";
		}
		cout << "Ulangi program? (y/n) "; cin >> pil2; cout << endl;
	}while(pil=='y');
	
	system("pause");
	cin.get();
	return 0;
}

//123200119 - Dentang Canang Wardhana
