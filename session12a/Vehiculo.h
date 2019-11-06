//
// Created by maxpo on 6/11/2019.
//

#ifndef SESSION12A_VEHICULO_H
#define SESSION12A_VEHICULO_H

using namespace std;

typedef int entero;
typedef float decimal;
typedef char caracter;
class Vehiculo {
private:

public:
    entero velocidadMaxima;
    entero velocidadMinima;
    entero velocidadActual;
    entero posX;
    entero posY;
    void avanzar();
    void retroceder();


};


#endif //SESSION12A_VEHÍCULO_H
