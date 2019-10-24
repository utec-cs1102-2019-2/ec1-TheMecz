//
// Created by maxpo on 24/10/2019.
//

#include "Persona.h"

string Persona ::getNombre() {
    return this ->Nombre;
}

Persona::Persona(string nombre, int edad, string DNI, string nacionalidad) {
    this->Nombre = nombre;
    this->Edad = edad;
    this->DNI = DNI;
    this->Nacionalidad = nacionalidad;
}

void Persona ::mostrar() {
    cout<<"-----------------Persona-----------------"<<endl;
    cout<<"Nombre:\t"<<this->Nombre<<endl;
    cout<<"Edad:\t"<<this->Edad<<endl;
    cout<<"DNI:\t"<<this->DNI<<endl;
    cout<<"Nacionalidad:\t"<<this->Nacionalidad<<endl;
}