#ifndef TIENDAPRESENTADOR_HPP
#define TIENDAPRESENTADOR_HPP
#include "Prendas.h"
#include "Tienda.h"
#include <List>

using namespace std;

class TiendaPresentador {

public:
	TiendaPresentador();
	list<Prenda*> initializeProducts();
	Tienda* getTienda();
private:
	Tienda* tienda;
	list<Prenda*> products;
};

#endif#
