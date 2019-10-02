#include <iostream>
#include <time.h>
using namespace std;

typedef int type_entero;
typedef float type_decimal;
typedef double type_doble;
typedef char type_caracter;
template <class tipo>
void producto_de_matriz(tipo fila, tipo columna, tipo **matriz1, tipo **matriz2, tipo **matriz3);
template <class tipo>
void maximo_3x3(tipo maximo[], tipo **matriz3);
int main() {
    type_entero filas,columnas,maximo[100];
    cout<<"Digite el numero de filas: ";cin>>filas;
    cout<<"Digite el numero de columnas: ";cin>>columnas;
    type_entero **matriz1 = new type_entero*[filas];
    for(size_t i=0; i<filas; i++){
        matriz1[i] = new type_entero[columnas];
    }
    type_entero  **matriz2 = new type_entero*[filas];
    for(size_t i=0; i<filas; i++){
        matriz2[i] = new type_entero[columnas];
    }
    type_entero  **matriz3 = new type_entero*[filas];
    for(size_t i=0; i<filas; i++){
        matriz3[i] = new type_entero[columnas];
    }
    producto_de_matriz(filas, columnas, matriz1, matriz2, matriz3);

    return 0;
}
template <class tipo>
void producto_de_matriz(tipo fila, tipo columna, tipo **matriz1, tipo **matriz2, tipo **matriz3) {
    srand(NULL);
    type_entero r;
    //rellena matriz1
    for (size_t i = 0; i < fila; i++) {
        for(size_t j=0; j < columna; j++){
            r = rand() % 10;
            matriz1[i][j] = r;
        }
    }
    //rellena matriz 2
    for (size_t i = 0; i < fila; i++) {
        for(size_t j=0; j < columna; j++){
            r = rand() % 10;
            matriz2[i][j] = r;
        }
    }
    //rellena matriz 3
    for (size_t i = 0; i < fila; i++) {
        for(size_t j=0; j < columna; j++){
            matriz3[i][j] = matriz1[i][j]*matriz2[i][j];
        }
    }
    cout<<"\t";
    for(size_t j=1; j<=columna; j++){
        cout<< j<<"\t";
    }
    cout<<"\n";
    for (size_t i = 0; i < fila; i++) {
        cout<<i<<"|\t";
        for (size_t j = 0; j < columna; j++) {
            cout<<matriz3[i][j]<<"\t";
        }
        cout<<"\n";
    }
}

template <class tipo>
void maximo_3x3(tipo filas, tipo columnas, tipo maximo[],tipo **matriz3){
    tipo max=0;
    tipo num1, num2, mayor=0;
    num1 = filas/3;
    num2 = columnas/3;
    if(num1<num2){
        mayor =num2;
    }
    else {
        mayor = num1;
    }
    for(size_t k=1; k<=mayor; k++) {
        for (size_t i = 1*k; i <= 3*k ; i++) {
            for (size_t j = 1*k; j <= 3*k ; j++) {
                if (max < matriz3[i][j]) {
                    max = matriz3[i][j];
                }
            }
        }
        maximo[k] = max;
    }
    for(size_t k=1; k<=mayor; k++) {
        for (size_t i = 1*k; i <= 3*k ; i++) {
            for (size_t j = 1; j <= 3 ; j++) {
                if (max < matriz3[i][j]) {
                    max = matriz3[i][j];
                }
            }
        }
        maximo[k] = max;
    }
    for(size_t k=1; k<=mayor; k++) {
        for (size_t i = 1*k; i <= 3*k ; i++) {
            for (size_t j = 1*k; j <= 3*k ; j++) {
                if (max < matriz3[i][j]) {
                    max = matriz3[i][j];
                }
            }
        }
        maximo[k] = max;
    }
}