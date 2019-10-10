#include <iostream>
#include <vector>
#include <ctime>

using namespace std;

typedef int type_entero;
typedef float type_decimal;
typedef char type_caracter;

void rellenar(vector<vector<type_entero>> &matriz){
    type_entero r;
    srand(time(nullptr));
    for(size_t i=0; i<matriz.size(); i++){
        for(size_t j=0; j<matriz[i].size(); j++){
            r= 1 + rand()%10;
            matriz[i][j] = r;
        }
    }
}
void sumar_filas(vector<vector<type_entero >> matriz, vector<type_entero> suma_filas){

    type_entero sumaF=0;
    for(size_t i=0; i<matriz.size(); i++){
        for(size_t j=0; j<matriz[i].size(); j++){
            sumaF += matriz[i][j];
        }
        suma_filas[i] = sumaF;
        sumaF = 0;
    }
}
void sumar_col(vector<vector<type_entero >> matriz, vector<type_entero> suma_col){

    type_entero sumaC=0;
    for(size_t i=0; i<matriz.size(); i++){
        for(size_t j=0; j<matriz[i].size(); j++){
            sumaC += matriz[j][i];
        }
        suma_col[i] = sumaC;
        sumaC = 0;
    }
}


type_entero main(){

    type_entero filas, col;
    cout<<"Digite el numero de filas: ";cin>>filas;
    cout<<"Digite el numero de columnas: ";cin>>col;
    vector<vector<type_entero>> matriz(filas, vector<type_entero>(col));
    vector<type_entero> suma_filas(filas);
    vector<type_entero> suma_col(col);
    rellenar(matriz);
    sumar_filas(matriz, suma_filas);
    sumar_col(matriz, suma_col);
}