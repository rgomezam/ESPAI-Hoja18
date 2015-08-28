/*
 * GestorMaterial.h
 *
 *  Created on: Aug 28, 2015
 *      Author: raquel
 */

#ifndef GESTORMATERIAL_H_
#define GESTORMATERIAL_H_
#include "Material.h"


class GestorMaterial {
public:
	GestorMaterial();
	virtual ~GestorMaterial();

      void	introducirLibro();
      void eliminarLibro();
      void verLibros();

    void  introducirDisco();
    void eliminarDisco();
    void verDiscos();

    void  introducirPelicula();
      void eliminarPelicula();
      void verPeliculas();

      void verTodo();

private:
	Material* arrMaterial[100];

};

#endif /* GESTORMATERIAL_H_ */
