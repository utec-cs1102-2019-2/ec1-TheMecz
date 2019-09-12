#include <iostream>
#include <string.h>
#include <vector>

using namespace std;

void bonus(float &a, float &b){
    cout<<"Digite su nota de PC1: "; cin>>a;
    cout<<"Digite los puntos adicionales: ";cin>>b;
    //cout<<"La nueva nota es: "<<a+b;

}

int main() {

    float a,b;
    bonus(a,b);
    float *ptr_pc1 = &a;
    *ptr_pc1 = a + b;
    cout<<"La nueva nota es: "<<*ptr_pc1;

    return 0;
}