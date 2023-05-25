#ifndef SASIEDZTWO_H
#define SASIEDZTWO_H

#include "ustawienia.h"


class Sasiedztwo
{
    RodzajMieszkanca sasiad[3][3];

    RodzajMieszkanca* elementWewnetrzny(Polozenie polozenie);

    static Polozenie losujPolozenie();

public:
    Sasiedztwo(RodzajMieszkanca rodzj = NIEZNANE);

    void okreslSasiada(Polozenie polozenie, RodzajMieszkanca rodzaj);

    RodzajMieszkanca ktoJestSasiadem(Polozenie polozenie);

    unsigned short ile(RodzajMieszkanca rodzaj) const;

    Polozenie losujSasiada(RodzajMieszkanca rodzaj);

    static void zmienindeksWgPolozenia(Polozenie polozenie, long& wiersz, long& kolumna);
    static void zmienindeksWgPolozenia(Polozenie polozenie, unsigned int& wiersz, unsigned int& kolumna);
};

#endif // SASIEDZTWO_H
