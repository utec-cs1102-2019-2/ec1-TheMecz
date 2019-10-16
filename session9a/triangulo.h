#ifndef SESSION9A_TRIANGULO_H
#define SESSION9A_TRIANGULO_H
#include <cmath>


typedef float decimal;

class Triangulo{
private:
    decimal lado1;
    decimal lado2;
    decimal lado3;

public:
    decimal Area();
    decimal Perimetro();

    void setL1(decimal L1){lado1 = L1;}
    void setL2(decimal L2){lado2 = L2;}
    void setL3(decimal L3){lado3 = L3;}

    /*decimal getL1(){ return lado1;}
    decimal getL2(){ return lado2;}
    decimal getL3(){ return lado3;}
*/
     };

#endif //SESSION9A_TRIANGULO_H