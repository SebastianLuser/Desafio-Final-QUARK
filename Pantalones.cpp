#include "Pantalones.h"
#include "Prendas.h"

Pantalon::Pantalon (bool calidad, int stock,bool corte) : Prenda(calidad, stock) {
    this->corte = corte;
}

bool Pantalon::Corte() {
    return this->corte;
}

double Pantalon::calcularPrecio() {

	double precioFinal = this->precio;
    if (corte)
    {
        precioFinal -= precioFinal * 0.12;
    }

    if (this->calidad)
    {
        precioFinal += precioFinal * 0.3;
    }

    return precioFinal;

}