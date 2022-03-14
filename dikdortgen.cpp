#include <iostream>
#include <conio.h>
using namespace std;

class Dikdortgen{
	
	public:		
		void GirdiAl(){
			cout << "Uzun kenari girin: "<<endl;
			cin >> a;
			cout << "Kisa kenari girin: "<<endl;
			cin >> b;
		};
		
		void Hesapla(){
			sonuc = a * b;
		};
		
		void Goster(){
			cout << "Dikdorgen alani: " << sonuc << endl;
		};
		
		private:
			int a, b, sonuc=0;
};

int main(){
	
	Dikdortgen ornek;
	ornek.GirdiAl();
	ornek.Hesapla();
	ornek.Goster();
	getch();
	
	return 0;
}
