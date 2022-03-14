#include <iostream>
#include <conio.h>
using namespace std;

class sayi_Takas{
	private:
		int a, b;
		
	public:
		void GirdiAl(){
			cout << "1.sayiyi girin: ";
			cin >> a;
			cout << "2.sayiyi girin: ";
			cin >> b;
		}
		
		void Takas(){
			b = b - a;
			a = b + a;
			b = a - b;
		}
		
		void Goster(){
			cout << "Degistirildikden sonra 1.sayi: " << a << endl;
			cout << "Degistirildikden sonra 2.sayi: " << b << endl;
		}
};

int main(){
	
	sayi_Takas ornek;
	ornek.GirdiAl();
	ornek.Takas();
	ornek.Goster();
	getch();
	
	return 0;
}
