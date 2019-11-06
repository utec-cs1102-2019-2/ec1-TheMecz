//
// Created by maxpo on 6/11/2019.
//

#ifndef SESSION12A_BICICLETA_H
#define SESSION12A_BICICLETA_H

#include "Vehiculo.h"
#include <ctime>
#include <iostream>
using namespace std;
typedef int entero;
typedef float decimal;
typedef char caracter;
class Bicicleta : public Vehiculo {
public:
    void avanzar();
    void retroceder();
    Bicicleta();
};


#endif //SESSION12A_BICICLETA_H
