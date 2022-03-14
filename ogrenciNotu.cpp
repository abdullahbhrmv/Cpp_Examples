#include <iostream>
#include <conio.h>
using namespace std;

class Ogr_notu{
	private:
		float soru_sayi, dogru_soru_sayi, ogr_notu;
		
	public:
		void GirdiAl(){
			cout << "Soru sayisini girin: ";
			cin >> soru_sayi;
			cout << "Dogru soru sayisi: ";
			cin >> dogru_soru_sayi;	
		}
		
		void Hesapla(){
			ogr_notu = 100 / soru_sayi;
			ogr_notu = ogr_notu * dogru_soru_sayi;	
		}
		
		void Goster(){
			cout << "Ogrencinin notu (100 uzerinden): " << ogr_notu;	
		}
};

int main(){
	Ogr_notu ornek;
	ornek.GirdiAl();
	ornek.Hesapla();
	ornek.Goster();
	getch();
	
	return 0;
}