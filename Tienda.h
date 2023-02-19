#ifndef TIENDA_HPP
#define TIENDA_HPP
#include "Prendas.h"
#include <List>

using namespace std;

class Tienda {

public:
	Tienda(const char* nombre, const char* direccion, list<Prenda*> productos);
	list<Prenda*> Productos();
	const char* Nombre();
	const char* Direccion();
	Prenda* getPrenda(bool tipoRopa, bool tipoCuello, bool tipoManga, bool tipoCalidad)  ;
	Prenda* getPrenda(bool tipoCorte, bool tipoRopa, bool tipoCalidad);
private:
	const char* nombre;
	const char* direccion;
	list<Prenda*> productos;
};

#endif#