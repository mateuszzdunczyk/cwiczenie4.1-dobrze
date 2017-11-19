#ifndef SYGNALLOADER_HPP
#define SYGNALLOADER_HPP
#include "syngall.hpp"
#include <string>


class sygnalloader {

public:
sygnalloader(){}
syngall wczytajSygnal (std::string nazwaPliku);
void zapiszSygnal (syngall& sygnal, std::string nazwaPliku);



};

#endif
