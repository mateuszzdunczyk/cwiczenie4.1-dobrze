#include "syngall.hpp"
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

void syngall::dodajProbke ( const Probka& p)

{
    _zmienne.push_back (p);
}

int syngall::iloscProbek() const
{


    return _zmienne.size();
}

Probka& syngall::operator[](int i) { return _zmienne[i];
}
 const  Probka& syngall::operator[] (int i)  const   {  return _zmienne[i];
}


std::ostream& operator<<(std::ostream& stream, const syngall& sygnal)
{
  for(int i=0;i<sygnal.iloscProbek();i++)
  stream << sygnal[i]<<endl; return stream;
}
