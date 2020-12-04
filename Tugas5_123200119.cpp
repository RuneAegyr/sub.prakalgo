#include <iostream>
#include <conio.h>

using namespace std;

main(){
	
	int pil,p,l,t,m,n,a,b;
	
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
					}else
						cout << "  ";
				}
				cout << endl;
			}
			break;
		case 2 :
			cout << "Tinggi : "; cin >> t;
			for(m=1;m<=t;m++){
				a=t-1;
				b=m;
				for(n=1;n<=b;n++){
					if(n==1){
						cout << m << " ";
					}else{
						cout << m+a << " ";
						m=m+a;
						a--;
					}
				}
				m=b;
				cout << endl;
			}
			break;
		default :
			cout << "Input anda salah\n";
	}
	cout << endl;
	
	system("pause");
	cin.get();
	return 0;
}
