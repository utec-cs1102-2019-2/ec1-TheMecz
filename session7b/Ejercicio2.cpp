#include<iostream>
#include <vector>
#include <cmath>
#include <ctime>
#include <cstring>

using namespace std;

typedef int type_entero;
typedef float type_decimal;
typedef double type_doble;
typedef char type_caracter;



int main(){
    type_entero n=0,r=0;
    cin>>n;
    srand(NULL);
    vector<int> vec1(n);
    vector<int> vec2(n);
    for(size_t i=0; i<n; i++){
        r=1+rand()%31;
        vec1[i]=r;
    }
    for(size_t j=0; j<n; j++){
        cout<<vec1[j]<<" ";
    }
    cout<<"\n";
    for(size_t k=0; k<n; k++){
        if(vec1[k]%3==0){
            vec1.erase(vec1.begin()+k);
        }
    }
    for(size_t j=0; j<vec1.size(); j++){
        cout<<vec1[j]<<" ";
    }
    return 0;
}
