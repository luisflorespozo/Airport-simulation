// Class automatically generated by Dev-C++ New Class wizard

#include "avionpasajeros.h" // class's header file

// class constructor
avionPasajeros::avionPasajeros(string cod,coordenana n,hora h,long min,long pas,long equi)
:cavion(cod,n,h,min)
{
cantidadPasajeros=pas;
kilosPpasajero=equi;
}

// class destructor
avionPasajeros::~avionPasajeros()
{

}

void avionPasajeros::mostrar()
{
cavion::mostrar();
cout<<"cantidad de Pasajeros:       "<<cantidadPasajeros<<endl;
cout<<"kilos Por Pasajero:          "<<kilosPpasajero<<endl;
}
