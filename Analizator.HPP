#ifndef analizator_HPP
#define analizator_HPP
#include "Sygnal.HPP"
class Analizator{
public:
    Analizator();
    double dlugosc(const Sygnal& sygnal);
    double minimum (const Sygnal& sygnal);
    double srednia(const Sygnal& sygnal);
    double calka(const Sygnal& sygnal);
};

#endif // analizator_HPP
