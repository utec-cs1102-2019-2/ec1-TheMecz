//
// Created by maxpo on 6/11/2019.
//

#ifndef SESSION12A_BOTE_H
#define SESSION12A_BOTE_H

#include "Vehiculo.h"
#include <iostream>
#include <ctime>

using namespace std;

typedef int entero;
typedef float decimal;
typedef char caracter;

class Bote : public Vehiculo {
public:
    void avanzar();
    void retroceder();
    Bote();

};


#endif //SESSION12A_BOTE_H
