#ifndef VISTA_H
#define VSITA_H
#include<iostream>
#include "TiendaPresentador.h"
#include "CotizacionPresentador.h"
#include "VendedorPresentador.h"
#include "Tienda.h"
#include <string>

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
	void MostrarTexto(const char* text);
	virtual ~Vista();
	double Cotizar(bool tipoCorte,bool tipoRopa, bool tipoManga,bool  tipoCuello, bool calidad,double precio,int cantidad);


private:
	TiendaPresentador* tiendaPresentador;
	CotizacionPresentador* cotizacionPresentador;
	VendedorPresentador* vendedorPresentador;
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