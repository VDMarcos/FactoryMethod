#include "ManejadorFiguras.h"

void ManejadorFiguras::setCreador(CreadorDeFigura* cread)
{
	creador = cread;
}

void ManejadorFiguras::CrearFigura()
{
	figura = creador->crearFigura();
}

Figura* ManejadorFiguras::getFigura()
{
	return figura;
}
