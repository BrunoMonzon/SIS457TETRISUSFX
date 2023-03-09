#include <iostream>
#include "Pieza.h"
#include "PiezaMutante.h"
#include "Escenario.h"

using namespace std;

int main() {

	Escenario escenario(15, 30);
	cout << "Altura del escenario: " << escenario.getAltura() << endl;
	cout << "Ancho del escenario: " << escenario.getAncho() << endl;
	cout << "--------------------------" << endl;

	

	Pieza pieza_l("eles", "#000000");

	cout << pieza_l.getNombre() << endl;
	pieza_l.setNombre("L de cuatro tiles");
	pieza_l.rotar(90);
	cout << pieza_l.getNombre() << endl;
	cout << pieza_l.getColor() << endl;
	cout << "--------------------------" << endl;
		
	PiezaMutante pieza_m("Pieza mutante sin nombre", "#OOOOOO transparente", 2, true);

	cout << "numero de copias: " << pieza_m.getNumeroCopias() << endl;
	cout << "modificar forma?: " << pieza_m.getModificarForma() << endl;
	cout << "color de la pieza mutante" << pieza_m.getColor() << endl;
	cout << pieza_m.getNombre() << endl;
	pieza_m.setNombre("Pieza mutante L de cuatro tiles");
	pieza_m.rotar(90);
	cout << pieza_m.getNombre() << endl;

	pieza_m.cambiarForma(2);

	cout << "--------------------------" << endl;



}