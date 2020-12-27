#include <iostream>
using namespace std;
int main(){
	int banyakAngka;
	cout << "Masukkan banyak angka : "; cin >> banyakAngka;
	int zz[banyakAngka], max = -9999999, min = 9999999;
	for (int n=0; n<banyakAngka; n++){
		cout << "Angka ke-" << n+1 << " : "; cin >> zz[n];
	}
	cout << "\n\n_____Hasil_____\n";
	cout << "Deret       : ";
	for (int m=0; m<banyakAngka; m++){
		cout << zz[m] << " ";
	}
	cout << "\nMaksimum    : ";
	for (int nn=0; nn<banyakAngka; nn++){
		if (zz[nn] > max){
			max = zz[nn];
		}
		if (zz[nn] < min){
			min = zz[nn];
		}
	}
	cout << max;
	cout << "\nMinimum     : " << min;
	cout << "\nRata-rata   : ";
	double total = 0, rata;
	for (int mm=0; mm<banyakAngka; mm++){
		total += zz[mm];
	}
	rata = (total/banyakAngka)*1.0;
	cout << rata;
	int selisih, max1 = -9999999, selisih1;
	cout << "\nSelisih Max : ";
	for (int nm=0; nm<banyakAngka-1; nm++){
		selisih = zz[nm] - zz[nm+1];
		if (selisih<0){
			selisih*(-1);
		}
		if (selisih>max1){
			max1 = selisih;
		}
	}
	cout << max1 << endl;
	system("pause");
	return 0;
}

//123200119 - Dentang Canang Wardhana
