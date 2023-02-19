#include "Camisas.h"
#include "Prendas.h"

Camisa::Camisa(bool calidad, int stock, bool manga, bool cuello) : Prenda(calidad, stock) {
    this->manga = manga;
    this->cuello = cuello;
}

bool Camisa::Manga() {
    return manga;
}

bool Camisa::Cuello() {
    return cuello;
}

double Camisa::calcularPrecio() {

    double precioFinal = this->precio;
    if (manga)
    {
        precioFinal -= precioFinal * 0.1;
    }
    if (cuello)
    {
        precioFinal += precioFinal * 0.03;
    }


    if (this->calidad)
    {
        precioFinal += precioFinal * 0.3;
    }

    return precioFinal;

}