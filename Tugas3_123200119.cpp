#include <iostream>
#include <iomanip>

using namespace std;

main(){

	int matkul, harian, uts, uas;
	int pass;
	float rerata;
	
	string username;
	
	cout << "Login Akun ==========" << endl;
	cout << "Username	: "; getline(cin,username);
	cout << "Password	: "; cin >> pass;
	cout << "=====================" << endl;
	
	if (username=="admin" && pass==123){
		cout << "Login berhasil!";
		cout << endl << endl;
		
		cout << "Input Nilai Mata Kuliah\n";
		cout << "1. Algoritma dan Pemrograman\n";
		cout << "2. Kalkulus\n";
		cout << "Pilih : "; cin >> matkul;
		if (matkul==1){
			cout << "Nilai Harian	: "; cin >> harian;
			cout << "Nilai UTS	: "; cin >> uts;
			cout << "Nilai UAS	: "; cin >> uas;
			cout << endl;
			
			rerata=(harian+uts+uas)/3;
			setprecision(4);
			if (rerata<80){
				cout << "Anda tidak lulus Algoritma dan Pemrograman dengan nilai " << rerata << endl;
			} else {
				cout << "Anda lulus Algoritma dan Pemrograman dengan nilai " << rerata << endl;
			}
		} else if (matkul==2){
			cout << "Nilai Harian	: "; cin >> harian;
			cout << "Nilai UTS	: "; cin >> uts;
			cout << "Nilai UAS	: "; cin >> uas;
			cout << endl;
				
			rerata=(harian+uts+uas)/3;
			setprecision(4);
			if (rerata<80){
				cout << "Anda tidak lulus Kalkulus dengan nilai " << rerata << endl;
			} else {
				cout << "Anda lulus Kalkulus dengan nilai " << rerata << endl;
			}
		} else {
			cout << "\nInput anda salah!" << endl;
		}
	} else if (username!="admin" && pass==123){
		cout << "Username anda salah!";
	} else if (username=="admin" && pass!=123){
		cout << "Password anda salah!";
	} else {
		cout << "Username dan Password anda salah!";
	}
}
	
//Dentang Canang Wardhana - 123200119
