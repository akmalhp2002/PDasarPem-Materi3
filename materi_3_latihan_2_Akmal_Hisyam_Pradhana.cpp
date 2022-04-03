//Akmal Hisyam P. - 2113030019

#include <iostream>
using namespace std;

int main () {
	int ayat;
	
	cout<<"Masukkan Ayat Al-Ikhlas Keberapa Yang Anda Terjemahkan (1-4)"<<endl;
	cout<<"Ayat Ke-"; cin>>ayat;
	cout<<"--------"<<endl;
	
	switch (ayat) {
	
	case 1 :
		cout<<"Katakanlah (Muhammad), 'Dialah Allah, Yang Maha Esa.'"<<endl;
		break;
	case 2 :
		cout<<"Allah tempat meminta segala sesuatu."<<endl;
		break;
	case 3 :
		cout<<"(Allah) tidak beranak dan tidak pula diperanakkan."<<endl;
		break;
	case 4 :	
		cout<<"Dan tidak ada sesuatu yang setara dengan Dia."<<endl;
		break;
	default	:
		cout<<"Maaf, Surat Al Ikhlas Hanya 1-4 Ayat"<<endl;
		break;
}
	system ("pause");
	return 0;
	
}
