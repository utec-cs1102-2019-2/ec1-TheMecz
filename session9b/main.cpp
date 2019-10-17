#include <iostream>
#include "Alumnos.h"
using namespace std;

int main(){


    Alumnos *venero = new Alumnos();
    Alumnos *alvaro = new Alumnos();

    venero->setNombre("Sergio");
    venero->setApellido("Venero");
    venero->setEdad(22);
    venero->setCreditos(21);

    alvaro->setNombre("Alvaro");
    alvaro->setApellido("Garcia");
    alvaro->setEdad(18);
    alvaro->setCreditos(20);

    venero->imprimir();
    alvaro->imprimir();

    return 0;
}