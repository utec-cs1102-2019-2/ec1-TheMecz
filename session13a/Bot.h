//
// Created by maxpo on 13/11/2019.
//

#ifndef SESSION13A_BOT_H
#define SESSION13A_BOT_H

#include "Jugador.h"

class Bot: public Jugador {
public:
    Bot(string nombre);

    void marcar() override;
};



#endif //SESSION13A_BOT_H
