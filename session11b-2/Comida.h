//
// Created by maxpo on 31/10/2019.
//

#ifndef SESSION11B_2_COMIDA_H
#define SESSION11B_2_COMIDA_H


class Comida {
protected:
    string m_nombre;
    int m_Cantidad;

public:
    Comida(string , int );
    ~Comida();
    int getCantidad();
    string getNombre();
};


#endif //SESSION11B_2_COMIDA_H
