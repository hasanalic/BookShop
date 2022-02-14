#include <iostream>
#include "Bookshop.h"
#include <map>
using namespace std;

struct AccountData   // hesap verilerinin tutulmasý.
{
	string systemNickName;
	string systemEmailAddress;
	string systemPassword;
	string systemCreditCard;
	int systemBirth[3];
};

void loginToAccount(AccountData *ptr)  // hesaba giriþ fonksiyonu.
{
	string nick, email, password, creditCard;
	std::cout << " Kullanýcý adýnýz: "; cin >> nick;
	std::cout << " E-posta adresiniz: "; cin >> email;
	std::cout << " Þifreniz: "; cin >> password;
	std::cout << " Kredi kartý numaranýz: "; cin >> creditCard;
	std::cout << endl;
	// kontrol ifadesi
	if (nick == ptr->systemNickName && email == ptr->systemEmailAddress && password == ptr->systemPassword && creditCard == ptr->systemCreditCard) {
		std::cout << "\tHesaba giriþ yaptýnýz..." << endl << endl;
	}
	else {
		std::cout << "\tGirilen bilgiler yanlýþ!" << endl;
	}
}

void newAccount(AccountData *ptr)   //yeni hesap oluþturma fonksiyonu.
{
	std::cout << " Kullanýcý adýnýz: "; cin >> ptr->systemNickName;
	std::cout << " E-posta adresiniz: "; cin >> ptr->systemEmailAddress;
	std::cout << " Þifreniz: "; cin >> ptr->systemPassword;
	std::cout << " Kredi kartý numaranýz: "; cin >> ptr->systemCreditCard;
	std::cout << " Doðum tarihiniz (Örn: 12 3 1956): "; cin >> ptr->systemBirth[0] >> ptr->systemBirth[1] >> ptr->systemBirth[2];
	std::cout << endl;
	std::cout << " Hesabýnýz baþarýlý bir þekilde oluþturuldu!\n Hesabýnýza giriniz..." << endl << endl;
}

void mainScreen(AccountData test_data) // Ana ekran fonksiyonu.
{
	int tercih;
	std::cout << "\n\t\t KÝTAP MAÐZASINA HOÞGELDÝNÝZ!" << endl << endl;
	std::cout << "\tHesabýnýza girmek için 1'e basýnýz.\n\tEðer hesabýnýz yoksa yeni hesap açmak için 2'ye basýnýz.";
	cin >> tercih; std::cout << endl;

	if (tercih == 1) {
		loginToAccount(&test_data); // Hesaba giriþ yapma.
	}
	else if (tercih == 2) {
		newAccount(&test_data); // Yeni hesap oluþturma.
		loginToAccount(&test_data); // Hesaba giriþ yapma.
	}
	else {
		std::cout << "HATA!\nYalnýzca yukarýdaki sayýlardan birini giriniz...";
	}
}

int main()
{
	setlocale(LC_ALL, "Turkish");

	AccountData data = { "0","0","0","0",{0,0,0} }; // Sistemde default olarak bu þekilde saklý.

	// Nesneleri oluþturma iþlemi.
	Roman* obj1 = new Roman[5];
	Tarih* obj2 = new Tarih[5];
	Bilim* obj3 = new Bilim[5];
	Din* obj4 = new Din[5];

	int nesne_sayisi = 20; // Oluþturulacak nesne sayýsý.

	mainScreen(data); // Ana ekran

	// NESNELERÝ DÜZENLEME
	std::cout << "\n   UYGULAMAYA KÝTAP EKLEME " << endl << endl;
	for (int i = 0; i < nesne_sayisi; i++) {
		string ad, yazar, sayfa;
		int stok, fiyat;
		std::cout << " *** ROMANLAR ***" << endl;
		std::cout << " Kitabýn adý: "; cin >> ad; obj1[i].setName(ad);
		std::cout << " Kitabýn yazarý: "; cin >> yazar; obj1[i].setYazar(yazar); obj1[i].setTur("roman");
		std::cout << " Kitabýn sayfasý: "; cin >> sayfa; obj1[i].setSayfa(sayfa);
		std::cout << " Kitabýn stok sayýsý: "; cin >> stok; obj1[i].setStok(stok);
		std::cout << " Kitabýn fiyatý: "; cin >> fiyat; obj1[i].setFiyat(fiyat); std::cout << endl << endl;
		std::cout << " *** TARÝH KÝTAPLARI ***" << endl;
		std::cout << " Kitabýn adý: "; cin >> ad; obj2[i].setName(ad);
		std::cout << " Kitabýn yazarý: "; cin >> yazar; obj2[i].setYazar(yazar); obj2[i].setTur("tarih");
		std::cout << " Kitabýn sayfasý: "; cin >> sayfa; obj2[i].setSayfa(sayfa);
		std::cout << " Kitabýn stok sayýsý: "; cin >> stok; obj2[i].setStok(stok);
		std::cout << " Kitabýn fiyatý: "; cin >> fiyat; obj2[i].setFiyat(fiyat); std::cout << endl << endl;
		std::cout << " *** BÝLÝM KÝTAPLARI ***" << endl;
		std::cout << " Kitabýn adý: "; cin >> ad; obj3[i].setName(ad);
		std::cout << " Kitabýn yazarý: "; cin >> yazar; obj3[i].setYazar(yazar); obj3[i].setTur("bilim");
		std::cout << " Kitabýn sayfasý: "; cin >> sayfa; obj3[i].setSayfa(sayfa);
		std::cout << " Kitabýn stok sayýsý: "; cin >> stok; obj3[i].setStok(stok);
		std::cout << " Kitabýn fiyatý: "; cin >> fiyat; obj3[i].setFiyat(fiyat); std::cout << endl << endl;
		std::cout << " *** DÝN KÝTAPLARI ***" << endl;
		std::cout << " Kitabýn adý: "; cin >> ad; obj4[i].setName(ad);
		std::cout << " Kitabýn yazarý: "; cin >> yazar; obj4[i].setYazar(yazar); obj4[i].setTur("din");
		std::cout << " Kitabýn sayfasý: "; cin >> sayfa; obj4[i].setSayfa(sayfa);
		std::cout << " Kitabýn stok sayýsý: "; cin >> stok; obj4[i].setStok(stok);
		std::cout << " Kitabýn fiyatý: "; cin >> fiyat; obj4[i].setFiyat(fiyat); std::cout << endl << endl;
	}

	// KÝTAP BÝLGÝLERÝ
	std::cout << " *** ROMANLAR ***" << endl;
	for (int i = 0; i < nesne_sayisi; i++) {
		obj1[i].showInfos(); std::cout << endl;
	}
	std::cout << endl;
	std::cout << " *** TARÝH KÝTAPLARI ***" << endl;
	for (int i = 0; i < nesne_sayisi; i++) {
		obj2[i].showInfos(); std::cout << endl;
	}
	std::cout << endl;
	std::cout << " *** BÝLÝM KÝTAPLARI ***" << endl;
	for (int i = 0; i < nesne_sayisi; i++) {
		obj3[i].showInfos(); std::cout << endl;
	}
	std::cout << endl;
	std::cout << " *** DÝN KÝTAPLARI ***" << endl;
	for (int i = 0; i < nesne_sayisi; i++) {
		obj4[i].showInfos(); std::cout << endl;
	}
	std::cout << endl;

	// Nesneleri container'a atama iþlemi.
	map<int, Roman> blok1;
	map<int, Tarih> blok2; 
	map<int, Bilim> blok3;
	map<int, Din> blok4;
	for (int i = 0; i < 5; i++) {
		blok1[i] = obj1[i];
		blok2[i] = obj2[i];
		blok3[i] = obj3[i];
		blok4[i] = obj4[i];
	}

	// Nesnelerin silinmesi.
	delete[] obj1;
	delete[] obj2;
	delete[] obj3;
	delete[] obj4;

	return 0;
}