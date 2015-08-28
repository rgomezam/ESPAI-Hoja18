/*
 * Material.h
 *
 *  Created on: Aug 28, 2015
 *      Author: raquel
 */

#ifndef MATERIAL_H_
#define MATERIAL_H_
#include <iostream>
using namespace std;

class Material {
public:
	Material(string titulo, string autor);
	virtual string getTitulo(){return titulo;}
	virtual ~Material();

	virtual void mostrarInfo() = 0;


protected:
	string titulo;
	string autor;


};

#endif /* MATERIAL_H_ */
