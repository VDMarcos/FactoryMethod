#include "CreadorCuadrado.h"

Figura* CreadorCuadrado::crearFigura()
{
    return new Cuadrado(0, "Cuadrado");
}
