//============================================================================
// Name        : capitulo18ejercicio7.cpp
// Author      : Raquel Gomez
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include "GestorMaterial.h";
#include "Material.h";
#include "Libro.h";
#include "Disco.h";

char opt, opt2;
//Material* arrMaterial[100];
//string titulo1,nombre1;
//int num1;
GestorMaterial gestor1;

int main() {
	cout << "Bienvenido a la biblioteca" << endl; // prints !!!Hello World!!!



	while(true){
		cout << "Que quiere hacer?  \n a) Introducir un libro/disco/pelicula \n b) Eliminar un libro/disco/pelicula  \n c) Listar todo/libros/discos/peliculas  \n d) Salir " << endl;
		cin >> opt;

		switch(opt){

		case 'a':
			cout << "Pulse (L) para un libro, (D) para un disco o (P) pelicula " << endl;
			cin >> opt2;

			switch(opt2){
			case 'l':
				gestor1.introducirLibro();
				break;

			case 'd':
				gestor1.introducirDisco();
				break;

			case 'p':
				gestor1.introducirPelicula();
				break;

			}
			break;

			case 'b':
				cout << "Pulse (L) para eliminar un libro, (D) para un disco o (P) pelicula " << endl;
						cin >> opt2;
						switch(opt2){
						case 'l':
							gestor1.eliminarLibro();
							break;

						case 'd':
							gestor1.eliminarDisco();
							break;

						case 'p':
							gestor1.eliminarPelicula();
							break;

						}
				break;

				case 'c':
					cout << "Pulse (T) para ver todo,  (L) para ver los libros, (D) para los discos o (P) para peliculas " << endl;
										cin >> opt2;
										switch(opt2){
										case 't':
											gestor1.verTodo();
											break;

										case 'l':
											gestor1.verLibros();
											break;

										case 'd':
											gestor1.verDiscos();
											break;

										case 'p':
											gestor1.verPeliculas();
											break;

										}
					break;

			default:
				return 0;
		} //END switch(opt)


	}



	return 0;
}
