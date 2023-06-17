#pragma once
#include "CreadorDeFigura.h"
#include"Cuadrado.h"
class CreadorCuadrado : public CreadorDeFigura
{
public:
	Figura* crearFigura();
};

