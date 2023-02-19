#ifndef PANTALONES_HPP
#define PANTALONES_HPP

#include "Prendas.h"

class Pantalon  : public Prenda{

public:
	Pantalon(bool calidad, int stock, bool corte);
	bool Corte();
	double calcularPrecio() override;
private:
	bool corte = false ;
};

#endif#