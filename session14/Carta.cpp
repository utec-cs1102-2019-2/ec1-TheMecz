//
// Created by maxpo on 20/11/2019.
#include "Carta.h"
Carta::Carta(int numero, string palo) {
    this->numero = numero;
    this->palo = palo;
}

void Carta::mostrar() {
    cout<<numero<<" "<<palo<<endl;
}