#include "CreadorCirculo.h"

Figura* CreadorCirculo::crearFigura()
{
    return new Circulo(0, "Circulo");
}
