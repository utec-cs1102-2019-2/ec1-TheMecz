#include <iostream>

using namespace std;

int main(){
    typedef int type_a;
    cout<<"Ejercicio2"<<endl;
    type_a *a = new int[10];
    a[0] = 1;
    a[1] = 19;
    a[9] = 3;
    cout<<"index\t"<<"value\t"<<"Mem address\t"<<endl;
    for(size_t i=0; i<10; i++){
        cout<<i<<"\t"<<a[i]<<"\t"<<&a[i]<<endl;
    }
    delete [] a;


    return 0;
}