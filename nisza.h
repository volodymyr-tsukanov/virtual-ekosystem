#ifndef NISZA_H
#define NISZA_H
#include "sasiedztwo.h"
#include "mieszkaniec.h"


class Nisza
{
    Mieszkaniec* lokator;

public:
    Nisza();
    Nisza(Nisza& innaNisza);
    ~Nisza();

    Nisza& operator=(Nisza& innaNisza);

    void przyjmijLokatora(Mieszkaniec* lokatorBezdomny);

    Mieszkaniec* oddajLokatora();

    bool zajeta() const { return lokator != nullptr; }

    RodzajMieszkanca ktoTuMieszka(){
        return zajeta() ? lokator->kimJestes() : PUSTKA;
    }

    bool lokatorZywy() const;

    char jakiSymbol() const;

private:
    ZamiarMieszkanca aktywujLokatora(Sasiedztwo sasiedztwo){
        return lokator->wybierzAkcje(sasiedztwo);
    }

    Mieszkaniec* wypuscPotomka(){
        return lokator->dajPotomka();
    }

    void przyjmijZdobycz(Mieszkaniec* ofiara){
        lokator->przyjmijZdobycz(ofiara);
    }
};

#endif // NISZA_H
