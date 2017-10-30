#ifndef Probka_HPP
#define Probka_HPP
#include <iostream>

class Probka
{
    public:
    double t,x;
    Probka();
    Probka(double t, double x);
    friend std::ostream& operator<<(std::ostream& stream,const Probka& probka );
};

#endif // Probka_HPP
