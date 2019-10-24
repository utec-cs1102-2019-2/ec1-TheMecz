#include <iostream>
#include "Persona.h"
#include "Alumno.h"

int main() {
    Persona *juanito = new Persona("Juanito",21,"74299901","Peruano");
    juanito -> mostrar();
    Alumno *alvaro = new Alumno("Alvaro", 19, "123", "Peruano", "454");
    alvaro ->mostrarAlumno();
    return 0;
}