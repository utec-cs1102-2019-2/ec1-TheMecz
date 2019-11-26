//
// Created by maxpo on 20/11/2019.
//

#ifndef SESSION14_PALO_H
#define SESSION14_PALO_H

#include <iostream>
#include <vector>
#include "Carta.h"
using namespace std;
class Palo {
public:
    string nombre;
    string color;
    vector<Carta> cartas;

    Palo(string nombre, string color);

};


#endif //SESSION14_PALO_H
