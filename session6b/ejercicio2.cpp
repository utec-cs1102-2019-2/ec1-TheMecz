#include <iostream>
#include <ctime>
#include <vector>
#include <string.h>

using namespace std;
typedef int type_entero;

type_entero calcular_promedio(type_entero n, type_entero notas[]);
void nota_mayor(type_entero n, type_entero notas[]);
int main(){
    srand(time(nullptr));
    type_entero n;
    do{
        cout<<"Ingrese la cantidad de alumnos: ";cin>>n;
    }while(n>=15);

    type_entero *notas = new type_entero[n];
    for(size_t i=0; i<n; i++){
        notas[i] = rand()%21;
    }
    cout<<"Promedio: "; calcular_promedio(n,notas);
    cout<<"La nota mayor es: "; nota_mayor(n,notas);

    delete [] notas;
    notas = nullptr;
    return 0;
}

type_entero calcular_promedio(type_entero n, type_entero notas[]){
    type_entero suma=0;
    for(size_t i=0; i<n; i++){
        suma += notas[i];
    }
    suma /= n;
    cout<<suma<<endl;
}
void nota_mayor(type_entero n, type_entero notas[]){
    type_entero mayor=0;
    for(size_t i=0; i<n; i++){
        if(notas[i]>mayor){
            mayor = notas[i];
        }
    }
    cout<<mayor<<endl;
}