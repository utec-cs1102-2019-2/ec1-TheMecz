//
// Created by maxpo on 20/11/2019.
//

#ifndef SESSION14_JUEGO_H
#define SESSION14_JUEGO_H

#include "Baraja.h"
#include <iostream>
#include <vector>
#include "Baraja.h"
#include "Carta.h"

using namespace std;

class Juego {
public:
    Baraja *baraja;
    vector<Carta> cartas;
    Juego();
    void start();
    void mostrar();
    bool esPocker();
};


#endif //SESSION14_JUEGO_H
