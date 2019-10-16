#include <iostream>
#include <vector>
#include "triangulo.h"

using namespace std;

typedef  int entero;
typedef  float decimal;

void pedirDatos(Triangulo &T);
void mostrar(Triangulo T);

int main() {
    Triangulo t1;
    pedirDatos(t1);
    mostrar(t1);

    return 0;
}

void pedirDatos(Triangulo &T){

    decimal L1,L2,L3;
    cout<<"Digite el lado 1: "; cin>>L1;
    cout<<"Digite el lado 2: "; cin>>L2;
    cout<<"Digite el lado 3: "; cin>>L3;
    T.setL1(L1);
    T.setL2(L2);
    T.setL3(L3);
}
void mostrar(Triangulo T){
    cout<<"El Perimetro es: "<<T.Perimetro()<<endl;
    cout<<"El Area es: "<<T.Area()<<endl;
}