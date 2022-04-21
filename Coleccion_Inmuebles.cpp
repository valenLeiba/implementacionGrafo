#include "Coleccion_Inmuebles.h"
#include <iostream>
#include <list>
#include <string>


Coleccion_Inmuebles::Coleccion_Inmuebles()
{
}

Coleccion_Inmuebles::~Coleccion_Inmuebles()
{
}

void Coleccion_Inmuebles::agregar(const Inmueble & nuevo)
{
    lista.push_back(nuevo); //O(1)

    //O(logn)
//    mapa[inmueble.obtener_identificador()] = inmueble;
  //  mapa.insert(make_pair<string, Inmueble>(inmueble.obtener_identificador(), (Inmueble) inmueble));
}

bool Coleccion_Inmuebles::eliminar(string id)
{
list<Inmueble>::const_iterator it = lista.begin();

    while((it!=lista.end()) && (id != it->obtener_identificador()))
        it++;
    if(it!=lista.end())
    {
        lista.erase(it);
    }
    return false;
}

bool Coleccion_Inmuebles::existe_barrio(string barrio) const
{
bool encontrado = false;
list<Inmueble>::const_iterator it = lista.begin();


    while(!encontrado && (it != lista.end()))
    {
        if(it->obtener_barrio()== barrio)
            encontrado = true;
        it++;
    }
    return encontrado;
}

void Coleccion_Inmuebles::filtrar_por_precio(float precio, Coleccion_Inmuebles & resultado) const
{
list<Inmueble>::const_iterator it = lista.begin();

    while((it!=lista.end()))
    {
        if(precio <= it->obtener_precio())
        {
            float nuevoPrecio = it->obtener_precio();
            string nuevoId = it->obtener_identificador();
            string nuevoBarrio = it->obtener_barrio();
            string nuevaDescripcion = it->obtener_descripcion();
            resultado.agregar(Inmueble(nuevoId, nuevoPrecio, nuevoBarrio, nuevaDescripcion));

        }

        it++;
    }
   // resultado.mostrar();
}

bool Coleccion_Inmuebles::existe(string id) const
{
   bool encontrado = false;

   list<Inmueble>::const_iterator it = lista.begin();
   while (!encontrado && (it != lista.end())) { //O(n = cantidad de inmuebles)
        if (id == it->obtener_identificador())
            encontrado = true;
        it++;
   }
   return encontrado;


//map<string, Inmueble>::const_iterator itm = mapa.find(id); // O(logn)
   //encontrado = (itm != mapa.end());
}

void Coleccion_Inmuebles::mostrar()
{
string ID;
float PRECIO;
string BARRIO;
string DESC;


    list<Inmueble>::const_iterator it = lista.begin();
    while((it != lista.end()))
    {
        ID = it->obtener_identificador();
        PRECIO = it->obtener_precio();
        BARRIO = it->obtener_barrio();
        DESC = it->obtener_descripcion();

        cout << "ID: " << ID << ";" << endl;
        cout << "PRECIO: " << PRECIO << ";" << endl;
        cout << "BARRIO: " << BARRIO << ";" << endl;
        cout << "DESCRIPCION: " << DESC << ";" << endl;
        cout << endl << "------------------------------------" << endl;
        it++;
    }
}

