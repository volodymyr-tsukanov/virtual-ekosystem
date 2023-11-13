#include <iostream>
#include <fstream>
#include "organizm.h"
#include "osobniki.h"
#include "srodowisko.h"
#include "ustawienia.h"
#include "generatorlosowy.h"
#include "sasiedztwo.h"

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
    Srodowisko ekoSystem = Srodowisko::czytajZPliku("start.txt");

    ofstream plikWynikowy("symulacja.txt");
    if(!plikWynikowy.is_open()) return 1;
    string stanSymulacji;

    unsigned long i = 0;

    do{
        system("clear");
        cout << "Krok symulacji: " << i << endl;
        plikWynikowy << "Krok symulacji: " << i << endl;
        stanSymulacji= ekoSystem.doTekstu();

        cout << endl << stanSymulacji << endl;
        plikWynikowy << stanSymulacji << endl;
        cin.ignore(1);
        ekoSystem++;
        i++;
    } while(i < 200 && !ekoSystem);

    cout << endl;
    plikWynikowy.close();
	

    return 0;
}
