//
// Created by maxpo on 23/10/2019.
//

#ifndef SESSION10A_LABORATORIO_H
#define SESSION10A_LABORATORIO_H

#include "Computadora.h"

class Laboratorio {
private:
    vector<Computadora> computadoras;
public:
    void argregarComputadora(Computadora &c);
};


#endif //SESSION10A_LABORATORIO_H
