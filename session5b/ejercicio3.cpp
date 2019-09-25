#include <iostream>

using namespace std;
typedef double TNumero;
int main(){
    TNumero *pnumero1= nullptr, *pnumero2= nullptr;
    pnumero1 = new double;
    pnumero2 = new double;
    cout<<"Numero1: ";
    cin>>*pnumero1;
    cout<<"Numero2: ";
    cin>>*pnumero2;
    cout<<"\n";
    cout<<"La Suma es: "<<*pnumero1 + *pnumero2<<"\n";
    cout<<"La Diferencia es: "<<*pnumero1 - *pnumero2<<"\n";
    cout<<"El Producto es: "<<*pnumero1 * *pnumero2<<"\n";
    delete pnumero1;
    delete pnumero2;
    pnumero1 = nullptr;
    pnumero2 = nullptr;
    return 0;
}