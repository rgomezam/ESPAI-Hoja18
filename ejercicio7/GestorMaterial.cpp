/*
 * GestorMaterial.cpp
 *
 *  Created on: Aug 28, 2015
 *      Author: raquel
 */

#include "GestorMaterial.h"
#include "Material.h"
#include "Libro.h"
#include "Disco.h"
#include "Pelicula.h"

GestorMaterial::GestorMaterial() {
	// TODO Auto-generated constructor stub
}


GestorMaterial::~GestorMaterial() {
	for (int i = 0; i < 100; i++) {
		arrMaterial[i] = NULL;
	}
}

void GestorMaterial::introducirLibro() {
	string titulo1, nombre1;
	int num1;

	cout << "Introduzca el titulo del libro (junto y en minusculas)" << endl;
	cin >> titulo1;
	cout << "Introduzca el autor (junto y en minusculas) " << endl;
	cin >> nombre1;
	cout << "Introduzca el numero de paginas" << endl;
	cin >> num1;
	for (int i = 0; i < 100; i++) {
		if (arrMaterial[i] == NULL) {
			arrMaterial[i] = new Libro(titulo1, nombre1, num1);
			break;
		}
	}
}

void GestorMaterial::eliminarLibro() {
	string titulo1;

	cout
			<< "Introduzca el titulo del libro que quiere borrar (junto y en minusculas)"
			<< endl;
	cin >> titulo1;

	for (int i = 0; i < 100; i++) {
		if (arrMaterial[i] != NULL && arrMaterial[i]->getTitulo() == titulo1) {
			delete arrMaterial[i];
			arrMaterial[i] = NULL;
			break;
		}
	}

}

void GestorMaterial::verLibros() {

	for (int i = 0; i < 100; i++) {
		if (arrMaterial[i] != NULL) {
			Libro *l;
			l = dynamic_cast<Libro*>(arrMaterial[i]);
			if (l !=NULL){
			l->mostrarInfo();
			}
		}
	}

}


void GestorMaterial::introducirDisco() {
	string titulo1, nombre1;
	float num1;

	cout << "Introduzca el titulo del disco (junto y en minusculas)" << endl;
	cin >> titulo1;
	cout << "Introduzca el autor (junto y en minusculas) " << endl;
	cin >> nombre1;
	cout << "Introduzca la duracion" << endl;
	cin >> num1;
	for (int i = 0; i < 100; i++) {
		if (arrMaterial[i] == NULL) {
			arrMaterial[i] = new Disco(titulo1, nombre1, num1);
			break;
		}
	}

}


void GestorMaterial::eliminarDisco() {
	string titulo1;

	cout
			<< "Introduzca el titulo del disco que quiere borrar (junto y en minusculas)"
			<< endl;
	cin >> titulo1;

	for (int i = 0; i < 100; i++) {
		if (arrMaterial[i] != NULL && arrMaterial[i]->getTitulo() == titulo1) {
			delete arrMaterial[i];
			arrMaterial[i] = NULL;
			break;
		}
	}

}


void GestorMaterial::verDiscos() {

	for (int i = 0; i < 100; i++) {
		if (arrMaterial[i] != NULL) {
			Disco *d;
			d = dynamic_cast<Disco*>(arrMaterial[i]);
			if (d !=NULL){
			d->mostrarInfo();
			}
		}
	}

}

void GestorMaterial::introducirPelicula() {
	string titulo1, nombre1;
	float num1;

	cout << "Introduzca el titulo de la pelicula (junto y en minusculas)" << endl;
	cin >> titulo1;
	cout << "Introduzca el director (junto y en minusculas) " << endl;
	cin >> nombre1;
	cout << "Introduzca la duracion" << endl;
	cin >> num1;
	for (int i = 0; i < 100; i++) {
		if (arrMaterial[i] == NULL) {
			arrMaterial[i] = new Pelicula(titulo1, nombre1, num1);
			break;
		}
	}


}

void GestorMaterial::eliminarPelicula() {
	string titulo1;

	cout
			<< "Introduzca el titulo de la pelicula que quiere borrar (junto y en minusculas)"
			<< endl;
	cin >> titulo1;

	for (int i = 0; i < 100; i++) {
		if (arrMaterial[i] != NULL && arrMaterial[i]->getTitulo() == titulo1) {
			delete arrMaterial[i];
			arrMaterial[i] = NULL;
			break;
		}
	}

}

void GestorMaterial::verPeliculas() {

	for (int i = 0; i < 100; i++) {
		if (arrMaterial[i] != NULL) {
			Pelicula *p;
			p = dynamic_cast<Pelicula*>(arrMaterial[i]);
			if (p !=NULL){
			p->mostrarInfo();
			}
		}
	}
}


void GestorMaterial::verTodo() {
	for (int i=0 ; i< 100 ; i++){
			if (arrMaterial[i]!= NULL){
			arrMaterial[i]->mostrarInfo();
			}
			}
}
