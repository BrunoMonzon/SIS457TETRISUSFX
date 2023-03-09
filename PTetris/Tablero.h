#pragma once
#include"Pieza.h"

class Tablero
{
private:
	string nombre;
	int filaLimiteSuperior;
	int filaActual;
	int numeroFilasEliminadas;
	Pieza piezaSiguiente;

public:
	Tablero() {
		nombre = "tablero sin nombre";
	}

	void incializarTablero();

	bool rotarBloque();
	void bajarBloque();
	bool moverBloque(int direccion);


	//Metodos accesores
	void setNombre(string _nombre) { nombre = _nombre; }
	string getNombre() { return nombre; }
};


