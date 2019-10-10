#include <iostream>
#include <vector>
#include <ctime>

using namespace std;

typedef int type_entero;
typedef float type_decimal;
typedef char type_caracter;

void multiplicacion(vector<vector<type_entero >> &matriz, type_entero n){

    for(size_t i=0; i<matriz.size(); i++){
        for(size_t j=0; j<matriz[i].size(); j++){
            matriz[i][j] *= n;
        }
    }
}
void traspuesta(vector<vector <type_entero>> &matriz1, vector<vector <type_entero>> &matriz2){
    for(size_t i=0; i<matriz1.size(); i++){
        for(size_t j=0; j <matriz1[i].size(); j++){
            matriz2[j][i] = matriz1[i][j];
        }
    }
}

void mostrar(vector<vector <type_entero>> matriz){
    cout<<endl;
    for(size_t i=0; i<matriz.size(); i++){
        for(size_t j=0; j<matriz[i].size(); j++){
            cout<<matriz[i][j]<<"\t";
        }
        cout<<"\n";
    }
}

type_entero main() {

    type_entero  filas, col,r,n;
    srand(time(nullptr));
    cout<<"Digite el numero de filas: ";cin>>filas;
    cout<<"Digite el numero de columnas: ";cin>>col;
    vector<vector<type_entero >> matriz(filas , vector<type_entero >(col));
    vector<vector<type_entero >> matriz1(col , vector<type_entero >(filas));
    for(size_t i=0; i<filas; i++){
        for(size_t j=0; j<col; j++){
            r = 20 + rand()%41;
            matriz[i][j] = r;
        }
    }
    mostrar(matriz);
    cout<<"Digite el valor escalar: "; cin>>n;
    multiplicacion(matriz, n);
    mostrar(matriz);
    traspuesta(matriz, matriz1);
    mostrar(matriz1);
    return 0;
}