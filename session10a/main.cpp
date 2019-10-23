#include <iostream>
#include "Computadora.h"
#include "mouse.h"
#include "teclado.h"
#include "Laboratorio.h"



int main() {
    Computadora *c= new Computadora();
    c->mostrar();
    return 0;
}