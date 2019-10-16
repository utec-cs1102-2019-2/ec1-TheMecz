#include "triangulo.h"


decimal Triangulo::Perimetro() {
    decimal p;
    p = lado1 + lado2 + lado3;
    return p;
}
decimal Triangulo::Area() {
    decimal area;
    decimal s;
    s = (lado1 + lado2 + lado3)/2;
    area = sqrt( s*(s-lado1)*(s-lado2)*(s-lado3));
    return area;
}
