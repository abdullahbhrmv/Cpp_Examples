#include <iostream>
#include <conio.h>
using namespace std;

class Saat{
	private:
		int sa, dk, sn;
		
	public:
		void GirdiAl(){
			cout << "Saati girin: ";
			cin >> sa;
			cout << "Dakikayi girin: ";
			cin >> dk;
			cout << "Saniyeyi girin: ";
			cin >> sn;	
		}
		
		void Goster(){
			cout << "Saat: " << sa<<":" << dk<<":" << sn<<":";
		}
};

int main(){
	Saat ornek;
	ornek.GirdiAl();
	ornek.Goster();
	getch();
	
	return 0;
}