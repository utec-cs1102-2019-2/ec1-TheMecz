//
// Created by maxpo on 6/11/2019.
//

#include "Bicicleta.h"



void Bicicleta::avanzar() {
    cout<<"Avanzando: "<<endl;
    cout<<"Desde: "<<posX<<","<<posY;
    posX = posX + velocidadActual;
    cout<<"\nHasta: "<<posX<<","<<posY<<endl;
}
void Bicicleta::retroceder(){
    posX = posX - velocidadActual;
    cout<<"\nHasta: "<<posX<<","<<posY<<endl;
}
Bicicleta::Bicicleta() {
    srand(time(NULL));
    posX = 0;
    posY = 0;
    velocidadMinima = 0;
    velocidadMaxima = 137;
    velocidadActual = velocidadMinima + (rand()%(velocidadMaxima - velocidadMinima +1 ));

}