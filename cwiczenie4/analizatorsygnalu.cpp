#include "analizatorsygnalu.hpp"
#include <iostream>
#include "syngall.hpp"
#include "sygnalloader.hpp"

using namespace std;

double analizatorsygnalu::minimum (const syngall& sygnal)
{
    double min=10000;
    for (int i=0;i<sygnal.iloscProbek();i++)
    {
        if(sygnal[i].x<min){
            min=sygnal[i].x;
        }
    }return min;
}
double analizatorsygnalu::maksimum (const syngall& sygnal)
{
    double max=-10000;
    for (int i=0;i<sygnal.iloscProbek();i++)
    {
        if(sygnal[i].x>max){
            max=sygnal[i].x;
        }
    }return max;
}


double analizatorsygnalu::dlugosc (const syngall& sygnal)
{double a=-100000;

double u=100000;

double d;

   for(int i=0;i<sygnal.iloscProbek();i++)
   {

       if(sygnal[i].x>a)
        {
        a=sygnal[i].x;
       }
       if(sygnal[i].x<u)
        {
        u =sygnal[i].x;
       }


}
d=a-u;
return d;
}

double analizatorsygnalu::srednia (const syngall& sygnal)
{ double o=0;
    for (int i=0;i<sygnal.iloscProbek();i++)
        { o=o+sygnal[i].x;  }
   if(sygnal.iloscProbek()>0)
    {
       o=o/sygnal.iloscProbek();
   }
       double oblicz_Srednia;
return o;

}

double analizatorsygnalu::calka(const syngall& sygnal)
{
    double dt1, dpole1, calka;
    for (int i = 0; i <= (sygnal.iloscProbek()) -1; i++)
    {
     dt1 = sygnal[i + 1].t - sygnal[i].t;
     dpole1 = (sygnal[i].x + sygnal[i + 1].x) * dt1 / 2;
    calka = calka + dpole1;
    }
   return calka;

}

