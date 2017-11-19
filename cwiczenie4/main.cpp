#include <iostream>
#include "probkaa.hpp"
#include "syngall.hpp"
#include "sygnalloader.hpp"
#include "analizatorsygnalu.hpp"
#include "windows.h"
using namespace std;

int main(int argc,char* argv[])
{

   if (argc != 2) {
 return -1;
}

string nazwa_pliku = argv[1];
analizatorsygnalu a1;
syngall s1;
sygnalloader sl1;
s1 = sl1.wczytajSygnal(nazwa_pliku);

sl1.zapiszSygnal(s1, "Plik.csv");

cout<< "srednia wynosi"<< a1.srednia(s1)<<endl;
cout<< "calka wynosi"<< a1.calka(s1)<<endl;
cout<< "dlugosc wynosi"<< a1.dlugosc(s1)<<endl;
cout<< "maximum wynosi"<< a1.maksimum(s1)<<endl;
cout<< "minimum wynosi"<< a1.minimum(s1)<<endl;

sl1.zapiszSygnal (s1, "nazwa.csv");
    cin.get();


return 0;
}
