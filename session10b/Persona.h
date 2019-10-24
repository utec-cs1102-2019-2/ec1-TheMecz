//
// Created by maxpo on 24/10/2019.
//

#ifndef SESSION10B_PERSONA_H
#define SESSION10B_PERSONA_H
#include <iostream>

using namespace std;

class Persona {
private:
    string Nombre;
    int Edad;
    string DNI;
    string Nacionalidad;

public:
    Persona(string nombre, int edad, string DNI, string nacionalidad);
    string getNombre();
    void mostrar();

};


#endif //SESSION10B_PERSONA_H
