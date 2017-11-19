#ifndef ANALIZATORSYGNALU_HPP
#define ANALIZATORSYGNALU_HPP
#include "syngall.hpp"
#include <iostream>

class analizatorsygnalu{
AnalizatorSygnalu();
public:
double dlugosc( const syngall& sygnal);
double minimum(const syngall& sygnal);
double maksimum(const syngall& sygnal);
double srednia(const syngall& sygnal);
double calka(const syngall& sygnal);
};


#endif
