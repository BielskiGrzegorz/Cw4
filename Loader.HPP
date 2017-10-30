#ifndef Loader_HPP
#define Loader_HPP
#include "Sygnal.HPP"
#include <string>

class Loader
{
public:
    Loader();
    Sygnal wczytaj(std::string nazwa_pliku);
    void zapiszSygnal(Sygnal& sygnal,std::string nazwa_pliku);

};


#endif // Loader_HPP
