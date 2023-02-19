#include <ctime>
#include <list>
#include "Cotizacion.h"
#include "Tienda.h"
#include "Vendedor.h"
#include "Prendas.h"
#include <string>
#include "CotizacionPresentador.h"
#include<iostream>

using namespace std;

CotizacionPresentador::CotizacionPresentador() {
    this->cotizaciones = list<Cotizacion*>();
}

double CotizacionPresentador::crearCotizacion(Tienda* tienda, Vendedor* vendedor, bool tipoCorte, bool tipoRopa, bool tipoManga, bool tipoCuello, bool calidad, double precio, int cantidad) {
    Prenda* producto;
    if (tipoRopa) {
         producto = tienda->getPrenda( tipoRopa, tipoManga, tipoCuello, calidad);
     }
    else {
        producto = tienda->getPrenda(tipoCorte, tipoRopa, calidad);
    }
     

     producto->setPrecio(precio);
     
    double resultado = producto->calcularPrecio() * cantidad;
    time_t now = std::time(nullptr);
    Cotizacion* cotizacion = new Cotizacion(this->cotizaciones.size()  ,now, vendedor->CodVendedor(), cantidad, resultado, producto);
    cotizaciones.push_back(cotizacion);

    return resultado;
}


void CotizacionPresentador::getListaCotizaciones() {

    for (Cotizacion* cot : cotizaciones) {
        cot->Imprimir();
    }
}