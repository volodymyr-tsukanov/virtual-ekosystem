#ifndef ZLAB06_H
#define ZLAB06_H
#include "zlab03.h"

#include <iostream>
#include <string>
using namespace std;

class Obliczenia{
protected:
    const double pi = 3.14;
public:
    virtual double promienKolaWgPola() = 0;
    virtual double promienOkreguWgObwodu() = 0;
    virtual ~Obliczenia();
};

class Kwadrat : public Prostakat, public Obliczenia
{
public:
    Kwadrat(string nazwa = "?", double bok = 0):Prostakat(nazwa, bok, bok){}

    ~Kwadrat(){
        cout << "Kwadrat: " << nazwa << "konczy dzialanie" << endl;
    }

    double promienKolaWgPola();
    double promienOkreguWgObwodu();

    string doTekstu();
};

#endif // ZLAB06_H
