#ifndef ZLAB03_H
#define ZLAB03_H

#include <string>
using namespace std;


class Prostakat
{
protected:
    string nazwa;
    double bok1, bok2;
    bool poprawny;
    double obwod, pole;

    bool czyPoprawny(double bok1, double bok2);
    void obliczObwod();
    void obliczPole();
public:
    Prostakat(string n = "?", double a = 1, double b = 2);
    virtual ~Prostakat();

    bool czyPoprawny();
    const string& jakaNazwa();
    double podajPole();
    double podajObwod();
    bool zmienBoki(double a, double b);

    virtual string doTekstu();
};

#endif // ZLAB03_H
