//
// Created by maxpo on 30/10/2019.
//

#ifndef SESSION11A_TABLERO_H
#define SESSION11A_TABLERO_H

#include <iostream>
#include <vector>
#include "Bloque.h"
#include <ctime>
using namespace std;

class Tablero {
private:
    int filas;
    int columnas;
    int puntaje;
    vector<vector<Bloque>> bloques;
public:
    Tablero(int filas, int columnas);
    void instalar_minas();
    void mostrar();
};


#endif //SESSION11A_TABLERO_H
