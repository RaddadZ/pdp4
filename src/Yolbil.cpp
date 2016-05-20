#include "Yolbil.hpp"

Yolbil::Yolbil(){
	// YAKITUYARI = 2;
	genelKilometre = 0;
	kilometreSifirla();
}

int Yolbil::gYAKITUYARI() const{
	return YAKITUYARI;
}

void Yolbil::kilometreEkle(double kilometre){
	genelKilometre += kilometre;
	yerelKilometre += kilometre;
}

void Yolbil::zamanEkle(double zaman){
	toplamSurmeZaman += zaman;
}
void Yolbil::kilometreSifirla(){
	ortHiz = 0; // km/saat
	ortYakit = 0; // litre
	yerelKilometre = 0; // km
	toplamSurmeZaman = 0; // saat cinsinden
}
double Yolbil::getYerelKM(){
	return yerelKilometre;
}

double Yolbil::getGenelKM(){
	return genelKilometre;
}

void Yolbil::ortHizHesapla(){
	// try {
	// 	if (toplamSurmeZaman == 0) throw MatHatasi("Zaman sifirdir, sifira bolunmez");
		ortHiz = yerelKilometre / toplamSurmeZaman;
	// }
	// catch(MatHatasi &err){
	// 	cout << "Zaman: " << err.mesaj() << "\n";
	// }
}