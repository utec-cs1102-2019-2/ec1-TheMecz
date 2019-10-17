//
// Created by maxpo on 17/10/2019.
//

#include "Alumnos.h"

void Alumnos::setNombre(string nombre){
    this -> nombre = nombre;
}
string Alumnos::getNombre(){
    return this -> nombre ;
}

void Alumnos::setApellido(string apellido){
    this -> apellido = apellido;
}
string Alumnos::getApellido(){
    return this -> apellido;
}

void Alumnos::setEdad(entero edad){
    this -> edad = edad;
}
entero Alumnos::getEdad(){
    return this -> edad;
}

void Alumnos::setCreditos(entero creditos){
    this -> creditos = creditos;
}
entero Alumnos::getCreditos(){
    return this -> creditos;
}

void Alumnos::imprimir(){
    cout<<"Nombre: "<<this->getNombre()<<" "<<this->getApellido()<<endl;
    cout<<"Edad: "<<this->edad<<endl;
    cout<<"Creditos: "<<this->creditos<<endl;
    cout<<"-------------------------------------------------------------"<<endl;
}