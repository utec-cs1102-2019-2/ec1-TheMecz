#include "Tablero.h"


Tablero::Tablero(size_t filas, size_t columnas) {
    this->filas = filas;
    this->columnas = columnas;
    for(size_t i=0; i<filas; i++){
        vector<Bloque> filas;
        for(size_t j=0;j<columnas; j++){
            Bloque *bloque = new Bloque();
            fila.push_back(*bloque);
        }
        this->bloques.push_back(filas);
    }
}

void Tablero::instalar_minas() {
    entero a;
    entero b;
    srand(time(NULL));
    for(size_t i=0; i<10 ; i++){
        a = rand()%filas;
        b = rand()%columnas;
    this->bloques[a][b].es_mina = true;
    }
}

void Tablero::mostrar() {
    cout<<"Cantidad de filas "<<this->filas<<endl;
    cout<<"Cantidad de column "<<this->columnas<<endl;
    for(size_t i=0; i<this->filas; i++){

        for(size_t j=0; j<this->columnas; j++){
            if(bloques[i][j].es_mina == true){
                cout<<"*";
            }else{
                cout<<bloques[i][j].minas;
            }
        }
        cout<<endl;
    }
}