#include "Sygnal.HPP"

void Sygnal::dodajProbke(const Probka& p)
{
    probki.push_back(p);

}
int Sygnal::iloscProbek()
{
    return Probka.size();

}
Probka& Sygnal::operator[](int i)
{
    return probki[i];
}
