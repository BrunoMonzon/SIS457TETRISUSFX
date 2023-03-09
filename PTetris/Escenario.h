#pragma once
#include<iostream>
#include<string>
using namespace std;

class Escenario
{
private:
	string Nombre;
	int Altura;
	int Ancho;
public:
	
	Escenario();

	Escenario(int _altura, int _ancho);
	Escenario(float);

	int getAltura() { return Altura; }
	void setNombre(int _altura) { Altura = _altura; }

	int getAncho() { return Ancho; }
	void setAncho(int _ancho) { Ancho = _ancho; }
protected:

};

