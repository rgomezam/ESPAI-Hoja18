/*
 * Libro.cpp
 *
 *  Created on: Aug 28, 2015
 *      Author: raquel
 */

#include "Libro.h"

Libro::Libro(string titulo, string autor, int numPaginas):Material(titulo,autor) {

	cout << "Creando libro" << endl;
	this->numPaginas = numPaginas;

}

Libro::~Libro() {
	// TODO Auto-generated destructor stub
}


void Libro::mostrarInfo() {
	cout << "LIBRO - Titulo:"  <<  titulo  << ", autor: " << autor << ", " << numPaginas << " pags." << endl;
}

/*
void Libro::mostrarDisco() {
	cout << "success3" << endl;
}
*/
