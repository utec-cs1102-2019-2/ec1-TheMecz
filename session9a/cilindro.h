#ifndef SESSION9A_CILINDRO_H
#define SESSION9A_CILINDRO_H

#include <cmath>

typedef float decimal;

class cilindro {
private:
    decimal radio;
    decimal largo;
public:
    decimal Area();
    decimal Volumen();
    void setR1(decimal R1){radio = R1;}
    void setL1(decimal L1){largo = L1;}
};


#endif //SESSION9A_CILINDRO_H
