#include <iostream>
#include <conio.h>
using namespace std;

class Calisan{
	private:
		int calisanMaas, gunlukCalSaat, aylikCalisSaat;
		
	public:
		void MaasAl(){
			cout << "Calisanin Maasini giriniz: " << endl;
			cin >> calisanMaas;
			cout << "Aylik calisanin saati: " << endl;
			cin >> aylikCalisSaat;
		};
		
		void MaasEkle(){
			if (calisanMaas < 5000){
				calisanMaas += 100;
				cout << "Calisan maasina 100 tl eklendi: " << calisanMaas << endl;
			}
			else{
				cout << "Calisanin maasi: " << calisanMaas << endl;
			}
			
		};
		
		void SaatEkle(){
			if (aylikCalisSaat > 1100){
				calisanMaas += 75;
				cout << "Calisan maasina 75 tl eklendi: " << calisanMaas << endl;
			}
			else{
				cout << "Calisan maasi: " << calisanMaas << endl;
			}
		};
		
};

int main(){
	
	Calisan ornek;
	ornek.MaasAl();
	ornek.MaasEkle();
	ornek.SaatEkle();
	getch();
	
	return 0;
}
