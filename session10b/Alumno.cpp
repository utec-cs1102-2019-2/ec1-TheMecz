//
// Created by maxpo on 24/10/2019.
//

#include "Alumno.h"

#include <utility>
#include "Persona.h"

Alumno :: Alumno(string nombre, int edad, string DNI, string nacionalidad, string codigo) : Persona(nombre, edad, DNI, nacionalidad) {
    this ->Codigo = codigo;
}

void Alumno ::mostrarAlumno(){
    this -> mostrar();
    cout<<"Codigo:\t"<<this->Codigo<<endl;
}