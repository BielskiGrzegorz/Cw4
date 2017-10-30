#include "Loader.HPP"
Sygnal Loader::wczytaj()
{
    Sygnal tablica;
    ifstream plik(nazwa_pliku);
    string linia;
    while(getline(plik,linia))
    {

        double x, t;
        stringstream ss(linia);
        ss>>t;
        ss.ignore();
        ss>>x;
        Probka probka1(t,x);
        tablica.dodajProbke(probka1);
        //cout<<x<<" "<<t<<endl;
    }
    plik.close();
    return tablica;

}
void Loader::zapiszSygnal(Sygnal& sygnal,string nazwa_pliku)
{
  ofstream zapis(nazwa_pliku);
    for(int i=0;i<sygnal.size();i++)
    {
        zapis<<sygnal[i].x<<" "<<sygnal[i].t<<endl;
    }
    zapis.close();

}
