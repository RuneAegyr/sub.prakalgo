#include <iostream>

using namespace std;

int main()
{
	int N,M,pilih,n,m;

	cout << "Perkalian & Perpangkatan=====" << endl;
	cout << "1. Perkalian" << endl;
	cout << "2. Perpangkatan" << endl;
	cout << "Pilih : "; cin >> pilih;

	switch(pilih){
		case 1 :
			cout << "Input angka N : "; cin >> N;
			cout << "Input angka M : "; cin >> M;
			cout << "Hasil " << N << " X " << M << endl;
			
			n = N;
			m = 0;
			
			while(m<=M){
				m++;
				if(m<M){
					n = N + n;
					cout << N << " x ";
				} else if(m == M){
					cout << N << " = " << n << endl;
				}
			}
		break;
		case 2 :
			cout << "Input angka N : "; cin >> N;
			cout << "Input angka M : "; cin >> M;
			cout << "Hasil " << N << " ^ " << M << endl;
			
			n = N;
			m = 0;
			
			while(m<=M){
				m++;
				if(m<M){
					n = N * n;
					cout << N << " x ";
				} else if(m == M){
					cout << N << " = " << n << endl;
				}
			}
		break;
		default :
			cout  << "salah input!" << endl;
	}

	cout << "\nTerima kasih :)" << endl;

	return 0;
}
