#include <iostream>
#include "organizm.h"
#include "ustawienia.h"
#include "generatorlosowy.h"
#include "sasiedztwo.h"
#include "student.h"
#include "zlab03.h"
#include "zlab06.h"

using namespace std;


void drukujOrganizm(const Organizm& o){
    cout << "licznikZycia: " << o.stanLicznikaZycia() << " licznikPosilkow: "
	<< o.stanLicznikaPosilkow() << "\nlimitPosilkow: " << o.limitPosilkow
	<< "kosztPotomka: " << o.kosztPotomka << "\ngłodny: " << o.glodny()
	<< " pąckujący: " << o.paczkujacy() << "\n\n";
}

void wyswietl(UstawieniaSymulacji& UST){
    cout << "Znak glon: " << UST.znakGlon << " zycieMin=" << UST.glonZycieMin << " zycieMax=" << UST.glonZycieMax << endl;
}

string nazwaRodzaju(RodzajMieszkanca rodzaj){
    switch(rodzaj){
        case GLON: return "GLON";
        case GRZYB: return "GRZYB";
        case BAKTERIA: return "BAKTERIA";
        case PUSTKA: return "PUSTKA";
        case SCIANA: return "SCIANA";
        case TRUP: return "TRUP";
        case NIEZNANE: return "NIEZNANE";
    }
}


int main()
{
    /*Lab 6*/
    Kwadrat k1;
    cout << k1.doTekstu() << endl;

    Kwadrat k2("Kwadrat", 3);
    cout << k2.doTekstu() << endl;

    Kwadrat k("Kwadrek", 4);
    Prostakat p("Prostak", 2, 4);

    Prostakat* wp = &p;
    cout << wp->doTekstu() << endl;

    wp = &k;
    cout << wp->doTekstu() << endl;

    Prostakat& wp2 = p;
    cout << wp2.doTekstu() << endl;

    Prostakat& wp3 = k;
    cout << wp3.doTekstu() << endl;

    /*Lab 5
    Sasiedztwo sas;
    sas.okreslSasiada(P, GLON);
    sas.okreslSasiada(PG, GRZYB);
    sas.okreslSasiada(G, GRZYB);
    sas.okreslSasiada(LG, GLON);
    sas.okreslSasiada(L, BAKTERIA);
    sas.okreslSasiada(LD, BAKTERIA);
    sas.okreslSasiada(D, GLON);
    sas.okreslSasiada(PD, PUSTKA);

    cout << "Przegląd sasiedztwa:\n";

    for(int i = 0; i < 8; i++){
        Polozenie p = static_cast<Polozenie>(i);

        RodzajMieszkanca r = sas.ktoJestSasiadem(p);

        cout << "polozenie=" << p << " rodzaj=" << nazwaRodzaju(r) << endl;
    }

    cout << endl << "Policzenie";*/

    /*Lab 4
    //1. Dostęp do obiektu klasy UstawieniaSymulacji
    UstawieniaSymulacji& UST1 = UstawieniaSymulacji::pobierzUstawienia();
    UstawieniaSymulacji& UST2 = UstawieniaSymulacji::pobierzUstawienia();
    UstawieniaSymulacji& UST3 = UstawieniaSymulacji::pobierzUstawienia();

    cout << "Pobieranie ustawień 3x\nUST1: "; wyswietl(UST1); cout << "UST2: "; wyswietl(UST2); cout << "UST3: "; wyswietl(UST3);

    cout << "\nZmiana wartości tylko 1x\n";
    UST2.glonZycieMax = 100;
    cout << "UST1: "; wyswietl(UST1); cout << "UST2: "; wyswietl(UST2); cout << "UST3: "; wyswietl(UST3);

    //2. Liczby losowe
    cout << "Liczby losowe typu int(0-10):";
    for(int i = 0; i < 10; i++){
        cout << GEN::losujOdZeroDo(10) << " ";
    }

    cout << "\nLiczby losowe typu long(-2-2):";
    for(int i = 0; i < 10; i++){
        cout << GEN::losujPomiedzy(-2L, 2L) << " ";
    }

    cout << "\nLiczby losowe typu unsigned short(2-6):";
    for(int i = 0; i < 10; i++){
        cout << GEN::losujPomiedzy((unsigned short)2, 6) << " ";
    }*/


    /*Lab 3
	//1. Test kreacji obiektów
	Organizm organizm1(8,3,2);
	Organizm organizm2 = organizm1;
	Organizm organizm3 (organizm1);
	cout << "Wynik testu kreacji obiektów:" << endl << endl;
	cout << "Organizm1:" <<endl;
	drukujOrganizm(organizm1);
	cout << "Organizm?" << endl;
	drukujOrganizm(organizm1);
	cout<<"Organizm3" << endl;
	drukujOrganizm(organizm2);
	
	//2. Test niezależności obiektów
	organizm1.posilek();
	organizm1.posilek();
	organizm2.posilek();
	organizm3.krokSymulacji();
	cout << "Wynik testu niezależności obiektów:"
	<< endl << endl;
	cout<<"Organizm1:"<<endl;
    drukujOrganizm(organizm1);
	cout<<"Organizm2" << endl; 
	drukujOrganizm(organizm2);
	cout<<"Organizm3" << endl;
	drukujOrganizm(organizm3);
	
	//3. Test symulacji
	Organizm organizm4 (8,3,2);
	cout << "Wynik testu symulacji:" <<endl<< endl;
    cout << "Stan poczatkowy:" << endl;
    drukujOrganizm (organizm4);
	for (int i=1; i<11; i++){
		organizm4.krokSymulacji();
		if (organizm4. paczkujacy()){
			organizm4.potomek();
			cout<<"---> Potomek" << endl;
		} else organizm4.posilek();
		
        cout<<"Po wykonaniu kroku symulacji:" << i << endl;
		drukujOrganizm (organizm4);
    }*/

    /*cout << numeric_limits<int>::min() << endl;
    cout << numeric_limits<long long>::min() << endl;

    int i1, i2;
    i1 = (int)(0.25);
    static_cast<int>(0.25);

    cout << i1 << ' ', i2;*/

    /* Referencje
    int a = 5;
    int& ref = a;

    cout << a << " " << ref << endl;
    a = -55;
    cout << &a << " " << &ref << endl;*/

    return 0;
}
