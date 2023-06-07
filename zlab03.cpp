#include <iostream>
#include "zlab03.h"

/*ZLab03::ZLab03()
{

}*/

bool Prostakat::czyPoprawny(double bok1, double bok2)
{
    return bok1 > 0 && bok2 > 0;
}

void Prostakat::obliczObwod()
{
    obwod = 2 * (bok1 + bok2);
}

void Prostakat::obliczPole()
{
    pole = bok1 * bok2;
}

Prostakat::Prostakat(string n, double a, double b) : nazwa(n)
{
    poprawny = czyPoprawny(a, b);

    if(poprawny){
        bok1 = a;
        bok2 = b;

        obliczObwod();
        obliczPole();
    }
    else{
        bok1 = bok2 = obwod = pole = 0;
    }
}

Prostakat::~Prostakat()
{
    std::cout << "Prostokąt " << nazwa << " znika" << std::endl;
}

bool Prostakat::czyPoprawny()
{
    return poprawny;
}

const std::string &Prostakat::jakaNazwa()
{
    return nazwa;
}

double Prostakat::podajPole()
{
    return pole;
}

double Prostakat::podajObwod()
{
    return obwod;
}

bool Prostakat::zmienBoki(double a, double b)
{
    if(czyPoprawny(a,b)){
        poprawny = true;
       bok1 = a;
       bok2 = b;
       obliczPole();
       obliczObwod();

       return true;
    }

    return false;
}

std::string Prostakat::doTekstu()
{
    std::string napis = "";

    napis = "Prostakąt o nazwie " + nazwa + " bok1=" + to_string(bok1) + " bok2=" + to_string(bok2);

    if(poprawny){
        napis += " obwod=" + to_string(obwod) + " pole=" + to_string(pole);
    }
    else napis += " !Figura niepoprawna.";

    return napis;
}
