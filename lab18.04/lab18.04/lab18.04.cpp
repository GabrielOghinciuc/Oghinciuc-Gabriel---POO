#include "pch.h"
#include <iostream>
using namespace System;
using namespace std;
class Pers {
private:
    friend double operator+(Pers&, double);
    friend double operator+(double, Pers&);
public:
    char nume[20];
    double salariu;
    Pers(char* n = "Anonim ", double s = 0) :salariu(s) { strcpy(nume, n); }
    double operator+(Pers&);
    double operator+=(double);
};
double operator+(Pers& p, double spor) { return p.salariu + spor; }
double operator+(double, Pers&)
{
    return 0.0;
}
double operator+(Pers& p, double spor) { return p.salariu + spor; }
double Pers::operator+(Pers& p) { return p.salariu + salariu; }
double Pers::operator+=(double spor) { return salariu += spor; }

int main()
{
    double spor = 10;
    Pers p1("Popa Ion", 1), p2 = Pers("Popa Elena", 1) , p3("Adamescu Virgil",3), p4;
    cout << endl;
    cout << "Dupa Spor" << p3.nume << "ar avea" << p3 + spor;
    p3 += spor;
    cout <<"\n" << p3.nume << "chiar are acum" << p3.salariu << "lei";
    cout << "\nFamilia" << p1.nume << "are" << p1 + p2 << "lei\n";
    cout << "\n" << p4.nume << p4 + p2;
    getchar();
    return 0;
}