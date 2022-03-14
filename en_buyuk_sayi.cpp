#include <iostream>
#include <conio.h>
using namespace std;

class buyuk{
	public:
	void GirdiAl(){
		cout << "3 sayi giriniz:"<<endl;
		cin >>x>>y>>z;
	};
	
	void hesapla(){
		int sonuc;
		
		sonuc = ((x>y)&&(x>z)?x:(y>x)&&(y>z)?y:z);
		cout << "En buyuk sayi: " <<sonuc;
	};
	
	private:
		int x, y, z;
};

int main(){
	
	buyuk ornek;
	ornek.GirdiAl();
	ornek.hesapla();
	getch();
	
	return 0;
}


