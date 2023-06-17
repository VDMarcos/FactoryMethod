// patron basicamente de creacion...
// se sobrecarga el new...
// anti patrones -> si no sabemos de patrones, basicamente hacemos antipatrones...

#include"ManejadorFiguras.h"
#include"CreadorCirculo.h"
#include"CreadorCuadrado.h"
#include"CreadorTriangulo.h"

int main() {

	Figura* miFigura = nullptr;
	CreadorDeFigura* creador1 = nullptr;

	ManejadorFiguras* mf = new ManejadorFiguras();

	int op=0;
	cout << "-----------------------------------MENU-----------------------------------" << endl;
	cout << endl;
	cout << "Creando alguna figuras..." << endl;
	cout << "1. Crear circulo" << endl;
	cout << "2. Crear cuadrado" << endl;
	cout << "3. Crear triangulo" << endl;
	cout << "--------------------------------------------------------------------------" << endl;
	cout << "Digite la opcion: ";
	cin >> op;
	switch (op)
	{
	case 1: {
		creador1 = new CreadorCirculo();
		break;
	}
	case 2: {
		creador1 = new CreadorCuadrado();
		break;
	}
	case 3: {
		creador1 = new CreadorTriangulo();
		break;
	}
	}
	mf->setCreador(creador1);
	mf->CrearFigura();
	miFigura = mf->getFigura();

	cout << miFigura->getTipo() << endl;
	cout << miFigura->area() << endl;
	cout << miFigura->perimetro() << endl;

	system("pause");

	return 0;
}