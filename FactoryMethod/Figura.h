#pragma once

#include<iostream>
#include<sstream>

using namespace std;

class Figura  //<<abstract>>
{
protected:
	string tipo;
public:
	Figura(string);
	virtual~Figura();
	string getTipo();
	virtual double area() = 0;
	virtual double perimetro() = 0;
};

