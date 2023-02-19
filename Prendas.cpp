#include "Prendas.h"

Prenda::Prenda(bool calidad, int stock) {
	this->calidad = calidad;
	this->precio = 0;
	this->stock = stock;
}

bool Prenda:: Calidad() {
	return calidad;
}
int Prenda:: Stock() {
	return stock;
}
double Prenda::Precio() {
	return precio;
}


void Prenda::setPrecio(double precio) {
	this->precio = precio;
}