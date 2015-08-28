/*
 * Pelicula.cpp
 *
 *  Created on: Aug 29, 2015
 *      Author: raquel
 */

#include "Pelicula.h"

Pelicula::Pelicula(string titulo, string autor, float duracion):Material(titulo,autor) {
	this->duracion= duracion;
}

Pelicula::~Pelicula() {
	// TODO Auto-generated destructor stub
}

void Pelicula::mostrarInfo() {
	cout << "PELICULA - Titulo:"  <<  titulo  << ", director: " << autor << ", duracion: " << duracion <<  endl;
}
