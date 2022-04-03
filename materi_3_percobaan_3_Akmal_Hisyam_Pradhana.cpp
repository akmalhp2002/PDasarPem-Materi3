#include <iostream>
using namespace std;

int main () {
	
	int sila;
	
	cout<<"Masukkan Sila Ke :"; cin>>sila;
	
	switch (sila) {
		
		case 1 : cout<<"Ketuhanan Yang Maha Esa"<<endl; break;
		case 2 : cout<<"Kemanusiaan Yang Adil Dan Beradap"<<endl; break;
		case 3 : cout<<"Persatuan Indonesia"<<endl; break;
		case 4 : cout<<"Kerakyatan Yang Dipimpin Oleh Kebijaksanaan Dalam Permusyarawatan Perwakilan"<<endl; break;
		case 5 : cout<<"Keadilan Sosial Bagi Seluruh Rakyat Indonesia"<<endl; break;	
		default : cout<<"Tidak Ada"<<endl; break;
		
	}
	
	
	system ("pause");
	return 0;
}
