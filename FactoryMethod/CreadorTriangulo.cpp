#include "CreadorTriangulo.h"

Figura* CreadorTriangulo::crearFigura()
{
    return new Triangulo(0, "Triangulo");
}
