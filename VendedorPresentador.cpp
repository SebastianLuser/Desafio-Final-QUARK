#include "VendedorPresentador.h"

VendedorPresentador::VendedorPresentador() {
	this->vendedor = new Vendedor("Juan", "Perez", "BL35SD1");
}
Vendedor* VendedorPresentador::getVendedor() {
	return vendedor;
}