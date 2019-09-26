#include <iostream>
#include <ctime>
#include <vector>
#include <string.h>

using namespace std;
typedef int type_entero;
void imprimir(type_entero filas, type_entero columnas, type_entero *matrix[]);
int main(){

    type_entero  filas = 0;
    type_entero columnas = 0;
    cin>>filas;
    cin>>columnas;
    type_entero **matrix = nullptr;
    matrix = new type_entero *[filas];
    for(size_t i=0; i<filas; i++){
        matrix[i] = new int[columnas];
        for(size_t j=0; j<columnas; j++){
            matrix[i][j] = rand()%100;
        }
    }
    imprimir(filas, columnas, matrix);
    delete [] matrix;
    matrix = nullptr;
    return 0;
}

void imprimir(type_entero filas, type_entero columnas, type_entero *matrix[]){
    for(size_t i=0; i<filas; i++){
        for(size_t j=0; j<columnas; j++){
            cout<< matrix[i][j]<<"\t";
        }
        cout <<"\n";
    }
}