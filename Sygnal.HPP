#ifndef Sygnal_HPP
#define Sygnal_HPP
#include <iostream>
#include <string>
#include <vector>
#include "Probka.HPP"
#include "Loader.HPP"
#include "Analizator.HPP"
class Sygnal{
std::vector<Probka> probki;
public:
    Sygnal();
    void dodajProbke(const Probka& p);
    int iloscProbek();
    Probka& operator[](int i);
    friend std::ostream& operator<< (std::ostream& stream, const Sygnal& sygnal)
};

#endif // sygnal_HPP
