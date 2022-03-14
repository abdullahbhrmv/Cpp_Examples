#include <iostream>
#include <conio.h>
using namespace std;

class tersi{
	
	public:		
		void GirdiAl(){
			cout << "Sayi giriniz: "<<endl;
			cin >> a;
		};
		
		void hesapla(){
			while (a > 0){
				d = a % 10;
				ters = (ters*10)+d;
				a /= 10;
			}
		};
		
		void Goster(){
			cout << "Sayinin tersi: " << ters << endl;
		};
		
		private:
			int a, d, ters=0;
};

int main(){
	
	tersi ornek;
	ornek.GirdiAl();
	ornek.hesapla();
	ornek.Goster();
	getch();
	
	return 0;
}

