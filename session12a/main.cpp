#include <iostream>
#include "Vehiculo.h"
#include "Bicicleta.h"
#include <vector>
#include "Bote.h"
using namespace std;

typedef int entero;
typedef float decimal;
typedef char caracter;


int main() {

    Bicicleta *b1 = new Bicicleta();
    Bote *b2 = new Bote();
    b1 -> avanzar();
    b1 -> avanzar();
    vector<Vehiculo> vehiculos;
    vehiculos.push_back(*b1);
    vehiculos.push_back(*b2);

    for(size_t i=0; i < vehiculos.size(); i++){
        Vehiculo v = vehiculos[i];
        v.avanzar();
    }

    return 0;
}