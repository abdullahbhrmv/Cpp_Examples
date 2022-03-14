#include <iostream>
#include <conio.h>

using namespace std;

class HesapMakinesi{
	
	private:
		int hsp_mak, a, b, sonuc;
		
	public:
		void GirdiAl(){
			cout << "a nin degerini girin: ";
			cin >> a;
			cout << "b nin degerini girin: ";
			cin >> b;
			cout << "\n1-Toplama\n2-Cikarma\n3-Carpma\n4-Bolmen\n";
			cout << "\nIslem yapmak istediginiz sayiyi girin: ";
			cin >> hsp_mak;
		}
		
		void islem(){
			switch(hsp_mak){
				case 1:
					cout << "\nToplama islemini sectiniz.\n";
					sonuc = a + b;
					break;
				case 2:
					cout << "\nCikarma islemini sectiniz.\n";
					sonuc = a - b;
					break;
				case 3:
					cout << "\nCarpma islemini sectiniz.\n";
					sonuc = a * b;
					break;
				case 4:
					cout << "\nBolme islemini sectiniz.\n";
					sonuc = a / b;
					break;
				default:
					sonuc = 0;
					break;
			}
			cout << "a va b nin degeri: " << sonuc;
		}
};

int main(){
	HesapMakinesi ornek;
	ornek.GirdiAl();
	ornek.islem();
	getch();
	
	return 0;
}