//Akmal Hisyam P. - 2113030019
//If Majemuk
#include <iostream>
using namespace std;

int main () {
	
	int nilai;
	
	cout<<"Masukkan Nilai Anda : "; cin>>nilai;
	
	if (nilai >= 85 ) {
		cout<<"Selamat, Nilai Anda Adalah A"<<endl;
	}else if (nilai < 85 && nilai >= 75 ){
		cout<<"Selamat, Nilai Anda Adalah B+"<<endl;
	}else if (nilai < 75 && nilai >= 65 ) {
		cout<<"Nilai Anda Adalah B"<<endl;
	}else if (nilai < 65 && nilai >= 60 ) {
		cout<<"Nilai Anda Adalah C"<<endl;
	}else if (nilai < 60 ) {
		cout<<"Nilai Anda Adalah D"<<endl;
	}else {
		cout<<"Silahkan Ulangi Kembali"<<endl;
	}

	system ("pause");
	return 0;
}
