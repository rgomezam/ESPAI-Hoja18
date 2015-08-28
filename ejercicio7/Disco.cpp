/*
 * Disco.cpp
 *
 *  Created on: Aug 28, 2015
 *      Author: raquel
 */

#include "Disco.h"

Disco::Disco(string titulo, string autor, float duracion):Material(titulo,autor) {
	this->duracion= duracion;
}

Disco::~Disco() {
	// TODO Auto-generated destructor stub
}



void Disco::mostrarInfo() {
	cout << "DISCO - Titulo:"  <<  titulo  << ", autor: " << autor << ", duracion: " << duracion <<  endl;
}

/*
void Disco::mostrarLibro() {
	cout << "success3" << endl;
}
*/
