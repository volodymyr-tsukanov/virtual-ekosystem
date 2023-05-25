#include "srodowisko.h"



Srodowisko::Srodowisko(unsigned int _wiersze, unsigned int _kolumny) : wiersze(_wiersze), kolumny(_kolumny), liczbaNisz(_wiersze * _kolumny)
{
    nisza = new Nisza*[wiersze];

    for(unsigned int i = 0; i < wiersze; i++){
        nisza[i] = new Nisza[kolumny];
    }
}

Srodowisko::~Srodowisko()
{
    for(unsigned int i = 0; i < wiersze; i++){
        delete[] nisza[i];
    }

    delete[] nisza;
}
