#include <iostream>
using namespace std;


int main() {

    typedef int type_a;
    cout<<"index\t"<<"Value\t"<<"Mem address"<<endl;
    type_a A[7] = {3,45,21,8,2,6,7};
    for(size_t i=0; i<7; i++ ){
        cout<<"A["<<i<<"]\t"<<A[i]<<"\t"<<&A[i]<<endl;
    }


    return 0;
}