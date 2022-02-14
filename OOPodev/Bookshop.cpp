#include "Bookshop.h"

BookShop::BookShop(string name, string yazar, string tur, string sayfa, int stok, int fiyat) {
	BookShop::setName(name);
	BookShop::setYazar( yazar);
	BookShop::setTur(tur);
	BookShop::setSayfa(sayfa);
	BookShop::setStok(stok);
	BookShop::setFiyat(fiyat);
}

// set fonksiyonlarý ile;
// Pointerlara dinamik olarak yer ayýrttýk. 
// Girdileri, Pointerlarýn tuttuðu dinamik belleðe yerleþtirdik.
void BookShop::setName(string name) {
	BookShop::kitapAdi = new string;
	*kitapAdi = name;
}
void BookShop::setYazar(string yazar) {
	BookShop::kitapYazari = new string;
	*kitapYazari = yazar;
}
void BookShop::setTur(string tur) {
	BookShop::kitapTur = new string;
	*kitapTur = tur;
}
void BookShop::setSayfa(string sayfa) {
	BookShop::kitapSayfa = new string;
	*kitapSayfa = sayfa;
}
void BookShop::setStok(int stok) {
	BookShop::kitapStok = new int;
	if (stok >= 0) {
		*kitapStok = stok;
	}
	else {
		*kitapStok = 0;
	}
}
void BookShop::setFiyat(int fiyat) {
	BookShop::kitapFiyat = new int;
	if (fiyat >= 0) {
		*kitapFiyat = fiyat;
	}
	else {
		*kitapFiyat = 0;
	}
}
void BookShop::setAlim(int alim) {
	BookShop::kitapAlimAdedi = new int;
	*kitapAlimAdedi = alim;
}

// get fonksiyonlarý ile deðiþkenleri geri döndürdük.
string BookShop::getName() {
	return *kitapAdi;
}
string BookShop::getYazar() {
	return *kitapYazari;
}
string BookShop::getTur() {
	return *kitapTur;
}
string BookShop::getSayfa() {
	return *kitapSayfa;
}
int BookShop::getStok() {
	return *kitapStok;
}
int BookShop::getFiyat() {
	return *kitapFiyat;
}
int BookShop::getAlim() {
	return *kitapAlimAdedi;
}
int BookShop::getFatura() {
	if (*kitapStok >= *kitapAlimAdedi) {
		*kitapStok -= *kitapAlimAdedi; //
		return ((*kitapAlimAdedi) * (*kitapFiyat));
	}
	else {
		return 1; // Eðer stokta almak istediðiniz miktarda kitap yoksa "1 döndürecek".
	}
}

void BookShop::showInfos() {
	cout << " Kitap adý: " << getName() << endl;
	cout << " Kitap yazarý: " << getYazar() << endl;
	cout << " Kitap türü: " << getTur() << endl;
	cout << " Kitap sayfa sayýsý: " << getSayfa() << endl;
	cout << " Kitap stok adedi: " << getStok() << endl;
	cout << " Kitap fiyatý: " << getFiyat() << endl;
}
void BookShop::showFatura() {
	if (getFatura() == 1) {
		cout << "\tMaalesef iþleminiz yapýlamýyor!\n\tÝstediðiniz miktarda ürün stoklarýmýzda yok." << endl;
	}
	else {
		cout << " Aldýðýnýz kitap: " << *kitapAdi << endl;
		cout << " Toplam tutar: " << getFatura() << " TL" << endl;
	}
}

// Belleði boþalttýk.
BookShop::~BookShop() {
	delete kitapAdi;
	delete kitapYazari;
	delete kitapTur;
	delete kitapSayfa;
	delete kitapStok;
	delete kitapFiyat;
}

// Kalýtýlan sýnýflar
Roman::Roman(){}
Roman::Roman(string name, string yazar, string tur, string sayfa, int stok, int fiyat) {
	tur = "Roman";
	Roman::setName(name);
	Roman::setYazar(yazar);
	Roman::setTur(tur);
	Roman::setSayfa(sayfa);
	Roman::setStok(stok);
	Roman::setFiyat(fiyat);
}
Tarih::Tarih(){}
Tarih::Tarih(string name, string yazar, string tur, string sayfa, int stok, int fiyat) {
	tur = "Tarih";
	Tarih::setName(name);
	Tarih::setYazar(yazar);
	Tarih::setTur(tur);
	Tarih::setSayfa(sayfa);
	Tarih::setStok(stok);
	Tarih::setFiyat(fiyat);
}
Bilim::Bilim(){}
Bilim::Bilim(string name, string yazar, string tur, string sayfa, int stok, int fiyat) {
	tur = "Bilim";
	Bilim::setName(name);
	Bilim::setYazar(yazar);
	Bilim::setTur(tur);
	Bilim::setSayfa(sayfa);
	Bilim::setStok(stok);
	Bilim::setFiyat(fiyat);
}
Din::Din(){}
Din::Din(string name, string yazar, string tur, string sayfa, int stok, int fiyat) {
	tur = "Din";
	Din::setName(name);
	Din::setYazar(yazar);
	Din::setTur(tur);
	Din::setSayfa(sayfa);
	Din::setStok(stok);
	Din::setFiyat(fiyat);
}