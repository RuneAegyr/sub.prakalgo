#include <iostream>

using namespace std;

main(){
	
	int pil,p,l,t,m,n;
	
	cout << "Gambar Bangun Datar ===========\n";
	cout << "1. Kotak bolong\n";
	cout << "2. Segitiga\n";
	cout << "Pilih : "; cin >> pil;
	cout << endl;
	
	switch(pil){
		case 1 :
			cout << "Panjang : "; cin >> p;
			cout << "Lebar   : "; cin >> l;
			for(m=1;m<=p;m++){
				for(n=1;n<=l;n++){
					if(m==1||m==p||n==1||n==l){
						cout << "* ";
					}else{
						cout << "  ";
					}	
				}
				cout << endl;
			}
			break;
		case 2 :
			cout << "Tinggi : "; cin >> t;
			for(m=1;m<=t;m++){
				p=t-1;
				l=m;
				for(n=1;n<=l;n++){
					if(n==1){
						cout << m << " ";
					}else{
						cout << m+p << " ";
						m=m+p;
						p--;
					}
				}
				m=l;
				cout << endl;
			}
			break;
		default :
			cout << "Input anda salah!\n";
	}
	cout << endl;
	
	system("pause");
	cin.get();
	return 0;
}

//123200119 - Dentang Canang Wardhana
