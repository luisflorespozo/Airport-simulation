// Class automatically generated by Dev-C++ New Class wizard

#include "coladeaviones.h" // class's header file

// class constructor
ColadeAviones::ColadeAviones(cavion **x, int tam2)
{tam=tam2;
lista=new cavion*[tam];
for(int i=0;i<tam;i++)
{
       (*(lista+i))=(*(x+i));
}
}

// class destructor
ColadeAviones::~ColadeAviones()
{
	// insert your code here
}
void ColadeAviones::mostrar()
{
for(int i=0;i<tam;i++)
{
               (*(lista+i))->mostrar();cout<<endl;
}
}
void ColadeAviones::eliminar(int pos, int tam2)
{cavion aux;
for(int i=pos;i<tam2-1;i++)
{

(*(lista+i))=(*(lista+i+1));
}
tam=tam-1;
}
bool ColadeAviones::eliminarSiguienteAvionEnEspera()
{ColadeAviones::eliminar(1,tam);}
bool ColadeAviones::eliminar(string codigo,int pos)
{
     if(pos>(tam-1))
     return 0;
     else
     {
          if(pos<tam)
          {string aux;
          aux=(*(lista+pos))->getCodigo();
                 if(codigo==aux)
                 {ColadeAviones::eliminar(pos,tam);
                 return 1;}
                 else
                 return eliminar(codigo,pos+1);

          }

     }
}     
bool ColadeAviones::ExtraerSiguienteAvion()
{(*(lista+1))->mostrar();
ColadeAviones::eliminarSiguienteAvionEnEspera();
}
bool ColadeAviones::OrdenarCola(hora,int)
{}
/*
bool ColadeAviones::BuscarAvionEnCola(cavion a, int pos)
{

     if(pos>(tam-1))
     return 0;
     else
     {
          if(pos<tam)
          {
                 if((*(lista+pos))==a)
                 {return pos;
                 (*(lista+pos))->mostrar();}
                 else
                 return BuscarAvionEnCola(a, pos+1);

          }
}

}
*/
