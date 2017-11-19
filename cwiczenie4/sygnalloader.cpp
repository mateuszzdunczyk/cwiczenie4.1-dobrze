#include "sygnalloader.hpp"
#include <string>
#include <iostream>
#include <fstream>
#include <sstream>


using namespace std;

syngall sygnalloader::wczytajSygnal (std::string nazwaPliku)
{
    ifstream plik (nazwaPliku);
    string line;
    syngall sn;
    while (getline(plik,line))
{
    stringstream aa(line);
    cout<<line<<endl;
    double _t, _x;
    aa>>_t;
    aa.ignore();
    aa>>_x;
    cout<<_t<<endl;
    cout<<_x<<endl;
    sn.dodajProbke (Probka( _t,_x));
}

plik.close();

return sn;
}

void sygnalloader::zapiszSygnal (syngall& sygnal, std::string nazwaPliku)
{
   ofstream plik (nazwaPliku);

   for (int i=0;i<sygnal.iloscProbek();i++)
   {
       plik<<sygnal[i].t <<" "<<sygnal[i].x<< endl;
   }
   plik.close();
}
