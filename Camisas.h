#ifndef CAMISAS_HPP
#define CAMISAS_HPP

#include "Prendas.h"

class Camisa : public Prenda {

public:
	Camisa(bool calidad, int stock, bool manga, bool cuello);
	bool Manga();
	bool Cuello();
	double calcularPrecio() override;
private:
	bool manga;
	bool cuello;
};

#endif#