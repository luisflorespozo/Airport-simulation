// Class automatically generated by Dev-C++ New Class wizard

#ifndef AVIONPASAJEROS_H
#define AVIONPASAJEROS_H

#include "cavion.h" 
// No description
class avionPasajeros:public cavion
{private:
long cantidadPasajeros;
long kilosPpasajero;
	public:
		// class constructor
		avionPasajeros(string cod,coordenana n,hora h,long min,long pas,long equi);
		// class destructor
		~avionPasajeros();
		
		void mostrar();
};

#endif // AVIONPASAJEROS_H
