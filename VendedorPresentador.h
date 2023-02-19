#ifndef VENDEDORPRESENTADOR_HPP
#define VENDEDORPRESENTADOR_HPP

using namespace std;
#include "Vendedor.h"

class Vendedor;

class VendedorPresentador {

public:
	VendedorPresentador() ;
	Vendedor* getVendedor();
private:
	Vendedor* vendedor;
};

#endif