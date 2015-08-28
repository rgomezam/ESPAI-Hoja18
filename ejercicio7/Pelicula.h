/*
 * Pelicula.h
 *
 *  Created on: Aug 29, 2015
 *      Author: raquel
 */

#ifndef PELICULA_H_
#define PELICULA_H_

#include "Material.h"

class Pelicula: public Material {
public:
	Pelicula(string titulo, string autor, float duracion);
	virtual ~Pelicula();
	void mostrarInfo();

private:
	float duracion;
};

#endif /* PELICULA_H_ */
