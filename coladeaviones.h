// Class automatically generated by Dev-C++ New Class wizard

#ifndef COLADEAVIONES_H
#define COLADEAVIONES_H
#include "cavion.h" 
#include "avionbombero.h"
#include "aviondcarga.h"
#include "avionpasajeros.h"
#include <string.h>
// No description
class ColadeAviones:public cavion
{cavion **lista;
int tam;
	public:
		// class constructor
		ColadeAviones(cavion **x, int);
		// class destructor
		~ColadeAviones();
		void mostrar();
		void eliminar(int posicion,int tam);
		bool eliminarSiguienteAvionEnEspera();
		bool eliminar(string, int posinic);
		bool ExtraerSiguienteAvion();
		bool OrdenarCola(hora,int);
		bool BuscarAvionEnCola(cavion, int);
};

#endif // COLADEAVIONES_H
