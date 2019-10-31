//
// Created by maxpo on 31/10/2019.
//

#ifndef SESSION11B_2_MAGO_H
#define SESSION11B_2_MAGO_H


class Mago {
protected:
    string nombre;
    int CantAlimento;
public:
    Mago(string , int);
    Mago();
    virtual ~Mago();
    string getNombre();
    int getCantAlimento();
virtual void Alimentar(ostream &os, CAlimento* pAlimento)=0;
};


#endif //SESSION11B_2_MAGO_H
