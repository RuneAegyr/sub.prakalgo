#include <iostream>

using namespace std;

int luas(){
	
	int r;
	float L;
	
	cout << "Jari - jari     : "; cin >> r;
	L = 3.14 * r * r;
	cout << "Luas Lingkaran adalah " << L << endl;
	
	return 0;
}

int kel(){
	
	int r;
	float K;
	
	cout << "Jari - jari     : "; cin >> r;
	K = 2 * 3.14 * r;
	cout << "Keliling Lingkaran adalah " << K << endl;
	
	return 0;
}

int vol(){
	
	int r,t;
	float V;
	
	cout << "Jari - jari     : "; cin >> r;
	cout << "Tinggi          : "; cin >> t;
	V = 3.14 * r * r * t;
	cout << "Volume Tabung adalah " << V << endl;
	
	return 0;
}

int main(){
	
	int pil;
	char pil2;
	
	cout << "Hitung Lingkaran ==========\n";
	cout << "1. Luas Lingkaran\n";
	cout << "2. Keliling Lingkaran\n";
	cout << "3. Volume Tabung\n";
	cout << "Pilih: "; cin >> pil;
	switch (pil){
		case 1:
			luas();
			break;
		case 2:
			kel();
			break;
		case 3:
			vol();
			break;
		default :
			cout << "Input Salah :)\n";
	}
	cout << "Ulangi program? (y/n) "; cin >> pil2; cout << endl;
	if(pil2=='y'){
		main();
	}else{
		cout << "Program selesai, Terima kasih :)\n\n";
	}
	
	system("pause");
	cin.get();
	return 0;
}

//123200119 - Dentang Canang Wardhana
