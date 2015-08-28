# ESPAI-Hoja18
Ejercicios del curso de C++

Ejercicios capítulo 18

1. Explica para qué sirve la palabra clave dynamic_cast.

2. Dado el siguiente código:

class Vehiculo
{
protected:
string color;
int peso;
public:
Vehiculo(string color, int peso);
virtual void getInfo();
};
Vehiculo::Vehiculo(string color, int peso)
{
this->color = color;
this->peso = peso;
}
void Vehiculo::getInfo()
{
cout << "Vehiculo: color=" << color << " , peso=" << peso << endl;
}
//************************************************************************
class Coche : public Vehiculo
{
protected:
int numPuertas;
public:
Coche(string color, int peso, int numPuertas);
void getInfo();
void abrirMaletero();
};
Coche::Coche(string color, int peso, int numPuertas) : Vehiculo(color, peso)
{
this->numPuertas = numPuertas;
}
void Coche::getInfo()
{
cout << "Coche: color=" << color << " , peso=" << peso << " , numPuertas="
<< numPuertas << endl;
}
void Coche::abrirMaletero()
{
cout << "Coche: abriendo maletero" << endl;
}
//************************************************************************
class Moto : public Vehiculo
{
protected:
bool esTrial;
public:
Moto(string color, int peso, bool esTrial);
void getInfo();
void anadirSidecar();
};
Moto::Moto(string color, int peso, bool esTrial) : Vehiculo(color, peso)
{
this->esTrial = esTrial;
}
void Moto::getInfo()
{
cout << "Moto: color=" << color << " , peso=" << peso << " , esTrial=" <<
esTrial << endl;
}
void Moto::anadirSidecar()
{
cout << "Moto: añadiendo sidecar" << endl;
}
//************************************************************************
int main() {
Vehiculo* v1 = new Coche("Amarillo", 1100, 6);
Vehiculo* v2 = new Moto("Amarillo", 1100, true);
v1->abrirMaletero();
v2->anadirSidecar();
return 0;
}
Encuentra cuál es el error, y explica de qué 2 maneras lo solucionarías.

3. Dada la siguiente jerarquía de clases:

MaterialOficina
Silla
Mesa
Sofa
¿Qué sucederá con este código?

a. MaterialOficina* x = new Silla();
Silla* x2 = dynamic_cast<Silla *>x;
b. MaterialOficina* x = new Sofa();
c. Silla* x = new Sofa();
d. Silla* x = new Mesa();
   Silla* x2 = dynamic_cast<Silla *>x;
e. MaterialOficina* x = new Mesa();
f. Sofa* x = new MaterialOficina();
g. Silla* x = new Mesa();
   Mesa* x2 = dynamic_cast<Mesa *>x;

Explica si el resultado sería un error en tiempo de compilación, de ejecución o un puntero nulo.

4. ¿Qué es un tipo de dato abstracto? ¿Para qué se utiliza?

5. Tenemos la clase Vehículo, que contiene un método getInfo() que queremos todas las clases
hijas invaliden. También queremos que sea imposible crear objetos de tipo Vehículo, ya que es
un tipo de dato incompleto. ¿Cómo lo harías?

6. ¿Puede un ADT (Abstract Data Type) heredar de otro ADT?
¿Qué sucederá si el segundo ADT no implementa todas las funciones virtuales del primero?
¿En ese caso, podremos crear objetos de alguno de los 2 tipos, o será necesario crear otra clase
que implemente los métodos virtuales?

7. Práctica final del capítulo

Haz un programa que nos permita gestionar una biblioteca.
En la misma se van a prestar libros, películas y discos de música, de los que querremos guardar
la siguiente información:

Libros
o Titulo
o Autor
o Numero paginas

Películas
o Titulo
o Director
o Duración

Discos
o Titulo
o Autor
o Numero de canciones

El menú de la aplicación será como el siguiente
a. Introducir
o Libro
o Disco
o Pelicula

b. Eliminar

c. Listar
o Todo
o Libros
o Discos
o Peliculas

d. Salir

Utiliza el polimorfismo para manejar los datos como si fueran un solo tipo común: Material.
Además, evita la creación de objetos tipo Material de forma que si se intenta, de error al
compilar la aplicación.
