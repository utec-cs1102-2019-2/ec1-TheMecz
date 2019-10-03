#include<iostream>
#include <vector>
#include <cmath>
#include <ctime>
#include <cstring>

using namespace std;

typedef int type_entero;
typedef float type_decimal;
typedef double type_doble;
typedef char type_caracter;

template <class tipo>
void crear_matriz(tipo filas, tipo columnas, tipo altura ,type_entero ***matriz);
void pedir_datos(type_entero filas, type_entero columnas, type_entero altura);

int main(){
    type_entero  filas, columnas, altura;
    pedir_datos(filas, columnas, altura);
    type_entero ***matriz1;
    crear_matriz(filas, columnas, altura, matriz1);
    return 0;
}

void pedir_datos(type_entero filas, type_entero columnas, type_entero altura){
    cout<<"Digite el número de filas: "; cin>>filas;
    cout<<"Digite el número de columnas: "; cin>>columnas;
    cout<<"Digite la altura: "; cin>>altura;
}
template <class tipo>
void crear_matriz(tipo filas, tipo columnas,tipo altura, type_entero ***matriz){

    ***matriz = new type_entero *[filas];
    for(size_t i=0; i<filas; i++){
        matriz[i] = new type_entero[columnas];
        for(size_t j=0; j<altura; j++){
            matriz[i][j] = new type_entero *[altura];

        }
    }
}
