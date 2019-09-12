#include <iostream>
using namespace std;

int main() {
    int ival = 42;
    int *pival = &ival;
    cout<<pival<<"\t"<<*pival<<"\t"<<&pival;
    return 0;
}