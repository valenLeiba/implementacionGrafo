#include <iostream>
#include "Inmueble.h"
#include "Coleccion_Inmuebles.h"
#include <string>

using namespace std;


int main()
{
Coleccion_Inmuebles coleccion;
Coleccion_Inmuebles coleccionPreciox;
float precioBuscado;
string buscarBarrio = "C";
string idBuscado;

    coleccion.agregar(Inmueble("casa1", 500, "A", "fea"));
    coleccion.agregar(Inmueble("casa2", 100, "A", "fea"));
    coleccion.agregar(Inmueble("casa3", 300, "A", "fea"));
    coleccion.agregar(Inmueble("casa4", 700, "A", "fea"));
    coleccion.agregar(Inmueble("casa5", 500, "B", "fea"));
    coleccion.agregar(Inmueble("casa6", 1000, "C", "fea"));
    coleccion.agregar(Inmueble("casa7", 1400, "A", "fea"));
    coleccion.agregar(Inmueble("casa8", 2000, "A", "fea"));
    coleccion.agregar(Inmueble("casa9", 2500, "A", "fea"));


    coleccion.mostrar();

   /* ///Consultar si existen inmuebles a la venta en un barrio dado
    if(coleccion.existe_barrio("B"))
        cout << "El barrio B existe." << endl;
    else
        cout << "El barrio C no existe." << endl;

    ///Este nos ayuda a hacer el eliminar
    if((coleccion.existe("casa4"))==true)
        cout << "La casa 4 existe." << endl;
    else
        cout << "La casa 4 no existe." << endl;

    */
    cin >> precioBuscado;
    system("CLS");
    cout << "Ingrese el id que quiere borrar:" << endl;
    cin >> idBuscado;
    coleccion.eliminar(idBuscado);
    cout << "La nueva lista queda asi:" << endl;
    coleccion.mostrar();

    ///FILTRAR POR PRECIO LISTO
    /*cout << "Ingrese el precio a buscar:" << endl;
    cin >> precioBuscado;

    coleccion.filtrar_por_precio(precioBuscado, coleccionPreciox);
    cout << "Los inmuebles menores a $" << precioBuscado << ":" << endl;
    coleccionPreciox.mostrar();*/

    return 0;
}
