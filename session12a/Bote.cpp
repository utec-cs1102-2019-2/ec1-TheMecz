//
// Created by maxpo on 6/11/2019.
//

#include "Bote.h"

void Bote::avanzar() {
    cout<<"Avanzando: "<<endl;
    cout<<"Desde: "<<posX<<","<<posY;
    posX = posX + velocidadActual;
    cout<<"\nHasta: "<<posX<<","<<posY<<endl;
}
void Bote::retroceder(){
    posX = posX - velocidadActual;
    cout<<"\nHasta: "<<posX<<","<<posY<<endl;
}
Bote::Bote() {
    srand(time(NULL));
    posX = 0;
    posY = 0;
    velocidadMinima = 0;
    velocidadMaxima = 250;
    velocidadActual = velocidadMinima + (rand()%(velocidadMaxima - velocidadMinima +1 ));

}