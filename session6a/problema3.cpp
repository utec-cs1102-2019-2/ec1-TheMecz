#include <iostream>
#include <vector>
#include <string.h>
#include <time.h>

using namespace std;

typedef int type_entero;

void imprimir_notas(type_entero notas[], type_entero n, type_entero p);
type_entero calcular_promedio(type_entero notas[], type_entero n);
void imprimir_nota_mayor(type_entero notas[], type_entero n);
void imprimir_nota_menor(type_entero notas[], type_entero n);

int main (){

    type_entero n,p;
    cout<<"Ingrese la cantidad de alumnos: "; cin>>n;

    type_entero  *notas = new type_entero[n];

    for(size_t i=0; i<n; i++){
        cin>>notas[i];
    }
    imprimir_notas(notas, n, 20);
    p = calcular_promedio(notas, n);
    cout<< "El promedio es: "<<p;
    cout<< "Notas mayores al promedio: "<<endl;
    imprimir_notas(notas, n, p);
    cout<<"La nota mayor es: "; imprimir_nota_mayor(notas, n);
    cout<<"La nota menor es: "; imprimir_nota_menor(notas, n);
    delete [] notas;

    return 0;
}

void imprimir_notas(type_entero notas[],type_entero n, type_entero p){
    cout<<"indice\t"<<"valor\t"<<endl;
    for(size_t i=0; i<n; i++) {
        if (notas[i] > p) {
            cout << i << "\t" << notas[i] << endl;
        }
    }
}

type_entero calcular_promedio(type_entero notas[], type_entero n){
    type_entero  suma=0;
    for(size_t i=0; i<n; i++){
        suma += notas[i];
    }
    return  suma/n;
}

void imprimir_nota_mayor(type_entero notas[], type_entero n){
    type_entero mayor=0;
    for(size_t i=0; i<n; i++){
        if(mayor<notas[i]){
            mayor = notas[i];
        }
    }
    cout<<mayor<<endl;
}
void imprimir_nota_menor(type_entero notas[], type_entero n){
    type_entero menor=notas[0];
    for(size_t i=0; i<n; i++){
        if(menor>notas[i]){
            menor = notas[i];
        }
    }
    cout<<menor<<endl;
}