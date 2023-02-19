#include "Vendedor.h"



Vendedor::Vendedor(const char* nombre, const char* apellido, const char* codVendedor){
	this->nombre = nombre;
	this->apellido = apellido;
	this->codVendedor = codVendedor;
}

const char* Vendedor::Nombre() {
	return nombre;
}

const char* Vendedor::Apellido() {

	return apellido;
}

const char* Vendedor::CodVendedor(){
	return codVendedor;
}