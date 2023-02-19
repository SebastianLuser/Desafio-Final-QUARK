#ifndef COTIZACION_HPP
#define COTIZACION_HPP
#include <ctime>
#include "Prendas.h"
#include "Camisas.h"
#include "Pantalones.h"
#include <iostream>  
#include <typeinfo>  
#include <string>
using namespace std;


class Cotizacion {

public:
	Cotizacion(int id, time_t horaActual, const char* codVendedor, int cantidadProductos, double resultado, Prenda* producto);
	int Id();
	time_t HoraActual();
	const char* CodVendedor();
	int CantidadProductos();
	double Resultado();
	Prenda* Producto();
	const char* Imprimir();
private:
	int id;
	time_t horaActual;
	const char* codVendedor = " ";
	int cantidadProductos;
	double resultado;
	Prenda* producto = nullptr;
};



#endif