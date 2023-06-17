#pragma once
#include "CreadorDeFigura.h"
#include"Triangulo.h"
class CreadorTriangulo : public CreadorDeFigura
{
public:
	Figura* crearFigura();
};

