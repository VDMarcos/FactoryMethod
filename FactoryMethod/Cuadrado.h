#pragma once
#include "Figura.h"
class Cuadrado : public Figura
{
private:
	double lado;
public:
	Cuadrado(double, string);
	virtual~Cuadrado();
	double getLado();
	virtual double area();
	virtual double perimetro();
};