#include <iostream>
#include "cilindro.h"

using namespace std;
typedef float decimal;

void pedirDatos(cilindro &c1);
void mostrar(cilindro c1);

int main(){

    cilindro c1;
    pedirDatos(c1);
    mostrar(c1);

}

void pedirDatos(cilindro &c1){
    decimal r,l;
    cout<<"Digite el radio del cilindro: "; cin>>r;
    cout<<"Digite el largo del cilindro: "; cin>>l;
    c1.setL1(l);
    c1.setR1(r);
}
void mostrar(cilindro c1){
    cout<<"El area total del cilindro es: "<<c1.Area()<<"\n";
    cout<<"El volumen del cilindro es: "<<c1.Volumen();
}
