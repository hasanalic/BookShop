#ifndef BOOKSHOP_H_
#define BOOKSHOP_H_
#include <iostream>
using namespace std;

class BookShop
{
public:
	BookShop(string name, string yazar, string tur, string sayfa, int stok, int fiyat); // Constructor
	BookShop() = default;

	// set Fonksiyonlarý
	void setName(string name);
	void setYazar(string yazar); 
	void setTur(string tur);
	void setSayfa(string sayfa);
	void setStok(int stok); 
	void setFiyat(int fiyat); 
	void setAlim(int alim); 

	// get Fonksiyonlarý
	string getName();
	string getYazar();
	string getTur();
	string getSayfa();
	int getStok();
	int getFiyat();
	int getAlim();
	int getFatura();

	void showInfos(); // Kitapla ilgili tüm bilgileri gösterir.
	void showFatura(); // Alýnan kitabýn faturasý.

	bool operator ==(BookShop test) // Operator overloading (fiyatlarý karþýlaþtýrýr.)
	{
		if (*kitapFiyat == test.getFiyat()) {
			return true;
		}
		else {
			return false;
		}
	}

	~BookShop(); // Destructor
	
private:
	string* kitapAdi;
	string* kitapYazari;
	string* kitapTur;
	string* kitapSayfa;
	int* kitapStok;
	int* kitapFiyat;
	int* kitapAlimAdedi;
};

class Roman :public BookShop
{
public:
	Roman();
	Roman(string name, string yazar, string tur, string sayfa, int stok, int fiyat);
};

class Tarih :public BookShop
{
public:
	Tarih();
	Tarih(string name, string yazar, string tur, string sayfa, int stok, int fiyat);
};

class Bilim :public BookShop
{
public:
	Bilim();
	Bilim(string name, string yazar, string tur, string sayfa, int stok, int fiyat);
};

class Din :public BookShop
{
public:
	Din();
	Din(string name, string yazar, string tur, string sayfa, int stok, int fiyat);
};


#endif