#pragma once

#include"Figura.h"

class CreadorDeFigura      //<<Abstract>>
{
public: 
	virtual Figura* crearFigura() = 0;
};

