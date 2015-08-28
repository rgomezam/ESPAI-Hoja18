/*
 * Libro.h
 *
 *  Created on: Aug 28, 2015
 *      Author: raquel
 */

#ifndef LIBRO_H_
#define LIBRO_H_
#include <iostream>
using namespace std;

#include "Material.h"

class Libro: public Material {
public:
	Libro(string titulo, string autor, int numPaginas);
	virtual ~Libro();
	void mostrarInfo();
	//void mostrarDisco();

private:
	//string titulo;  //No hacce falta! ya estan en "Material"
	//string autor;
	int numPaginas;

};

#endif /* LIBRO_H_ */
