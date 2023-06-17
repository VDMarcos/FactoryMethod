#include "Cuadrado.h"

Cuadrado::Cuadrado(double la, string ti) : Figura(ti)
{
    lado = la;
}

Cuadrado::~Cuadrado()
{
}

double Cuadrado::getLado()
{
    return lado;
}

double Cuadrado::area()
{
    return lado * lado;
}

double Cuadrado::perimetro()
{
    return 4 * lado;
}
