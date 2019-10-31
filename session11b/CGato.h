//
// Created by maxpo on 31/10/2019.
//

#ifndef SESSION11B_CGATO_H
#define SESSION11B_CGATO_H


#include "Tipos.h"
#include "CAnimal.h"
class CGato: public CAnimal {
private:
    TipoEntero m_Vidas;

public:
    CGato(TipoString pNombre,TipoDecimal pPeso,TipoEntero pCantAlimento);
    virtual ~CGato();
    TipoEntero getVidas();
    void ProduceSonido(ostream &os);
    void setVidas(TipoEntero pVidas);
    void Alimentar(ostream &os,CAlimento* pAlimento);
    void Ronroneo(ostream &os);
};


#endif //SESSION11B_CGATO_H
