#ifndef SESSION11B_CPERRO_H
#define SESSION11B_CPERRO_H


#include "Tipos.h"
#include "CAnimal.h"

class CPerro: public CAnimal {
private:
public:
    CPerro(TipoString pNombre,TipoDecimal pPeso,TipoEntero pCantAlimento);
    ~CPerro();
    void ProduceSonido(ostream &os);
    void Alimentar(ostream &os,CAlimento* pAlimento);
    void Menea(ostream &os);
};


#endif //SESSION11B_CPERRO_H
