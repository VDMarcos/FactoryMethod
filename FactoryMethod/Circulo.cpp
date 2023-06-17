#include "Circulo.h"

Circulo::Circulo(double ra, string tip) : Figura(tip)
{
    radio = ra;
}

Circulo::~Circulo()
{
}

double Circulo::getRadio()
{
    return radio;
}

double Circulo::area()
{
    double ra = 0;
    ra = 3.14156 * radio * radio;
    return ra;
}

double Circulo::perimetro()
{
    return 0.0;
}
