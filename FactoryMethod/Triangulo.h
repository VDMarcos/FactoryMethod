#pragma once

#include"Figura.h"

class Triangulo : public Figura
{
private:
	double lado;       //equilatero...
public:
	Triangulo(double, string);
	virtual~Triangulo();
	double getLado();
	virtual double area();
	virtual double perimetro();
};
