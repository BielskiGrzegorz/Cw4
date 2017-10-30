#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include "Probka.HPP"
#include "Analizator.HPP"
#include "Loader.HPP"
#include "Sygnal.HPP"


using namespace std;

int main(int argc, char*argv[])
{
    if(argc !=2)
    {
        return -1;
    }
    Sygnal sygnal = Loader.wczytaj(agrv[1]);
    Loader.zapiszSygnal(sygnal,"out.csv");
    Analizator(sygnal);

    return 0;
}
