#include "zlab06.h"
#include<string>
#include<cmath>

using namespace std;


string Kwadrat::doTekstu()
{
    string napis = "";

    napis = "Kwadrat o nazwie " + nazwa + " bok=" + to_string(bok1);

    if(poprawny){
        napis += " obwod=" + to_string(obwod) + " pole=" + to_string(pole);
    }
    else napis += " !Figura niepoprawna.";

    return napis;
}

double Kwadrat::promienKolaWgPola()
{
    return sqrt(pole / pi);
}

double Kwadrat::promienOkreguWgObwodu()
{
    return obwod / (2*pi);
}

Obliczenia::~Obliczenia()
{

}
