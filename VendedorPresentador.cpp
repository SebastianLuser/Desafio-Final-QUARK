#include "VendedorPresentador.h"

VendedorPresentador::VendedorPresentador() {
	this->vendedor = new Vendedor("Sebastian", "Luser", "AJ38291H");
}
Vendedor* VendedorPresentador::getVendedor() {
	return vendedor;
}