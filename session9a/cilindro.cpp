#include "cilindro.h"

decimal cilindro::Area() {
    decimal area_lateral;
    decimal area_base;
    area_base = M_PI*pow(radio,2);
    area_lateral = 2*M_PI*radio*largo;
    return area_lateral + 2*area_base;
}
decimal cilindro::Volumen() {
    return M_PI*pow(radio,2)*largo;
}
