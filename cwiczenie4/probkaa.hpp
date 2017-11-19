#ifndef PROBKA_HPP
#define PROBKA_HPP // PEOBKA_HPP
#include <iostream>

class Probka {
    public:
 double t;
 double x;
 Probka();
 friend std::ostream& operator<<(std::ostream& stream,const Probka& probka)
 {
 stream<<probka.t <<" " <<probka.x  <<std::endl;
 return stream;
 }

 Probka(double _t,double _x);
};

#endif

