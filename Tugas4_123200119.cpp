#include <iostream>

using namespace std;

int main()
{
	int N,M,pilih,n,m; //n = hasil

	cout << "Perkalian & Perpangkatan=====" << endl;
	cout << "1. Perkalian" << endl;
	cout << "2. Perpangkatan" << endl;
	cout << "Pilih : "; cin >> pilih;

	switch(pilih){
		case 1 :
			cout << "Input angka N : "; cin >> N;
			cout << "Input angka M : "; cin >> M;
			cout << "Hasil " << N << " X " << M << endl;
			
			n = M;
			m = 0;
			
			while(m<=N){
				m++;
				if(m<N){
					n = M + n;
					cout << M << " x ";
				} else if(m == N){
					cout << M << " = " << n << endl;
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
	
	system("pause");
	cin.get();
	return 0;
}

//123200119 - Dentang Canang Wardhana
