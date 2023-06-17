#pragma once
#include "Figura.h"
class Circulo : public Figura
{
private:
	double radio;
public:
	Circulo(double, string);
	virtual~Circulo();
	double getRadio();
	virtual double area();
	virtual double perimetro();
};

