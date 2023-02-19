#ifndef VISTA_H
#define VSITA_H
#include<iostream>
#include "TiendaPresentador.h"
#include "CotizacionPresentador.h"
#include "VendedorPresentador.h"
#include "Tienda.h"

using namespace std;

class Vista
{
public:
	Vista();
	void Load();
	void tituloPrincipal();
	void menuInicio();
	void menuHisto();
	void menuCoti();
	void menuCamisaM();
	void menuCamisaC();
	void menuPantalon();
	void menuCalidad();
	void menuPrecio();
	void menuCantidad();
	virtual ~Vista();
	void Cotizar(bool tipoCorte,bool tipoRopa, bool tipoManga,bool  tipoCuello, bool calidad,double precio,int cantidad);
	TiendaPresentador* tiendaPresentador;
	CotizacionPresentador* cotizacionPresentador;
	VendedorPresentador* vendedorPresentador;

private:
	const char* nombreVendedorLabel;
	const char* apellidoVendedorLabel;
	const char* codVendedorLabel;
	const char* nombreTiendaLabel;
	const char* direccionTiendaLabel;
	bool tipoCorte = false;
	bool tipoRopa;
	bool tipoManga = false;
	bool tipoCuello = false;
	bool calidad;
	double precio;
	int cantidad;
};
#endif