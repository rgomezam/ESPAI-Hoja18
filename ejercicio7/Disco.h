/*
 * Disco.h
 *
 *  Created on: Aug 28, 2015
 *      Author: raquel
 */

#ifndef DISCO_H_
#define DISCO_H_

#include <iostream>
using namespace std;
#include "Material.h"

class Disco: public Material {
public:
	Disco(string titulo, string autor, float duracion);
	virtual ~Disco();
	float getDuracion(){return duracion;}

	void mostrarInfo();


private:
	float duracion;
};

#endif /* DISCO_H_ */
