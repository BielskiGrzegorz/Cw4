#include "Analizator.HPP"
double Analizator::srednia (const Sygnal& sygnal) {
    double srednia = 0.0;
    for (int i = 0; i < sygnal.size(); i++) {
        srednia += sygnal[i].x;
    }
    if (sygnal.size() > 0) {
        srednia = srednia / sygnal.size();
    }
    return srednia;
}
double Analizator::minimum(const Sygnal& sygnal) {
    double minimum = 2;
    for ( int i=0; i<sygnal.size(); i++) {
        if (sygnal[i].x < minimum)
            minimum = sygnal[i].x;
    }
    return minimum;
}

double Analizator::maksimum(const Sygnal& sygnal) {
    double maksimum = -2;
    for ( int i=0; i<sygnal.size(); i++) {
        if (sygnal[i].x > maksimum)
            maksimum = sygnal[i].x;
    }
    return maksimum;
}

double Analizator::calka(const Sygnal& sygnal) {
    double calka = 0, dt = 0, dpole = 0;
    for (int i=1; i < sygnal.size()-1; i++)
    {
        dt = sygnal[i+1].x - sygnal[i].t;
        dpole = (sygnal[i].x + sygnal[i+1].x) * dt / 2;
        calka = calka + dpole;
    }
    return calka;
    Analizator::Analizator(const Sygnal& sygnal)
    {
        cout<<"srednia :"<<srednia(sygnal)<<endl<<"minimum :"<<minimum(sygnal)<<endl<<"maksimum :"<<maksimum(sygnal)<<endl<<"calka :"<<calka(sygnal)<<endl;
    }
}
