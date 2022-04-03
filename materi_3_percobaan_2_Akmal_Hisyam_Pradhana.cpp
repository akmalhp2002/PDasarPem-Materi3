#include <iostream>
using namespace std;

int main () {
	string username = "akmal", password = "123", temp_username, temp_password;
	
	cout<<"Masukkan Username : "; cin>>temp_username;
	cout<<"Masukkan Password : "; cin>>temp_password;
	
	if (temp_username == username){
		if (temp_password == password){
			cout<<"Selamat Anda Berhasil Login"<<endl;
		}else {
			cout<<"Password anda salah"<<endl;	
		}
	
	
	}else{
		cout<<"Maaf Username & Password Anda Salah"<<endl;
	}
	
	
	system ("pause");
	return 0;
}
