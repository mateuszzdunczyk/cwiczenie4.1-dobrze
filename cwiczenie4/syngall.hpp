#ifndef SYNGALL_HPP
#define SYNGALL_HPP
#include <vector>
#include "probkaa.hpp"
#include <string>


class syngall {
public:
void dodajProbke ( const Probka& p);
 int iloscProbek() const;
 Probka& operator[](int i);
 const Probka& operator[](int i) const;
 friend std::ostream& operator<<(std::ostream& stream, const syngall& sygnal);


private:
std::vector <Probka> _zmienne;
};

#endif
