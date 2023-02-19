#pragma once

#ifndef PRENDAS_HPP
#define PRENDAS_HPP


class Prenda {

	friend class Pantalon;
	friend class Camisa;

public:
	Prenda(bool calidad, int stock);
	bool Calidad();
	int Stock();
	double Precio();
	void setPrecio(double precio);
	virtual double calcularPrecio() = 0;
protected:
	bool calidad;
	double precio;
	int stock;
};

#endif#