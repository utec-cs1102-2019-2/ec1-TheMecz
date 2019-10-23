//
// Created by maxpo on 23/10/2019.
//

#ifndef SESSION10A_COMPUTADORA_H
#define SESSION10A_COMPUTADORA_H
#include <iostream>
#include <stdlib.h>
#include "teclado.h"
#include "mouse.h"

using namespace std;

class Computadora {
private:
    teclado *teclado = new teclado();
    mouse *mouse = new mouse();
public:

    void mostrar();
};


#endif //SESSION10A_COMPUTADORA_H
