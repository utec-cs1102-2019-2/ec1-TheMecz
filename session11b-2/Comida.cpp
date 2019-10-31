//
// Created by maxpo on 31/10/2019.
//

#include "Comida.h"

Comida::Comida(string pnombre, int pcantidad) {
    m_nombre = pnombre;
    m_Cantidad = pcantidad;
}
Comida::~Comida() {

}

int Comida::getCantidad(){
    return m_Cantidad;
}

int Comida::getNombre() {
    return m_nombre;
}