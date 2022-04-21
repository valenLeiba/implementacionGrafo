#ifndef COLECCIONINMUEBLES_H
#define COLECCIONINMUEBLES_H

#include "Inmueble.h"

#include <map>
#include <set>
#include <list>

using namespace std;

class Coleccion_Inmuebles
{
    public:
        Coleccion_Inmuebles();

        virtual ~Coleccion_Inmuebles();

        bool existe(string id) const; // listo

        void filtrar_por_precio(float precio, Coleccion_Inmuebles & resultado) const;

        bool existe_barrio(string barrio) const; // listo

        void agregar(const Inmueble & nuevo); // listo

        bool eliminar(string id);

        void mostrar(); // listo

    private:

        list<Inmueble> lista;
        //set<Inmueble, ComparadorInmuebles> conjunto;
        //map<string, Inmueble> mapa;
};

#endif // COLECCIONINMUEBLES_H
