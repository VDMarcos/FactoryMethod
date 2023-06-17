#include "Triangulo.h"

Triangulo::Triangulo(double la, string ti) : Figura(ti)
{
    lado = la;
}

Triangulo::~Triangulo()
{
}

double Triangulo::getLado()
{
    return lado;
}

double Triangulo::area()
{
    return 0;   //formual de heron
}

double Triangulo::perimetro()
{
    return 3 * lado;
}
