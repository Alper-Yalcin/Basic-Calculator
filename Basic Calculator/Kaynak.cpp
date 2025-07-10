#include <iostream>	

using namespace std;

int main() {
	int islem;
	int a, b;

	cout << "Lutfen yapmak istediginiz islemi seciniz:" << endl;
	cout << "1. Toplama" << endl;
	cout << "2. Cikarma" << endl;
	cout << "3. Carpma" << endl;
	cout << "4. Bolme" << endl;
	cin >> islem;

	if (islem == 1) {
		cout << "Lutfen toplamak istediginiz iki sayiyi giriniz: ";
		cin >> a >> b;
		cout << "Sonuc: " << a + b << endl;
	}
	else if (islem == 2) {
		cout << "Lutfen cikarmak istediginiz iki sayiyi giriniz: ";
		cin >> a >> b;
		cout << "Sonuc: " << a - b << endl;
	}
	else if (islem == 3) {
		cout << "Lutfen carpmak istediginiz iki sayiyi giriniz: ";
		cin >> a >> b;
		cout << "Sonuc: " << a * b << endl;
	}
	else if (islem == 4) {
		cout << "Lutfen bolmek istediginiz iki sayiyi giriniz: ";
		cin >> a >> b;
		if (b != 0) {
			cout << "Sonuc: " << static_cast<double>(a) / b << endl;
		} else {
			cout << "Hata: Bolen sifir olamaz!" << endl;
		}
	}
	else {
		cout << "Gecersiz islem secimi!" << endl;
	}

}
 