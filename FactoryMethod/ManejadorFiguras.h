#pragma once

#include"Figura.h"
#include"CreadorDeFigura.h"

class ManejadorFiguras
{
private:
	Figura* figura;
	CreadorDeFigura* creador;
public:
	void setCreador(CreadorDeFigura*);
	void CrearFigura();
	Figura* getFigura();
};

