#ifndef COTIZACIONPRESENTADOR_HPP
#define COTIZACIONPRESENTADOR_HPP
#include <ctime>
#include <list>
#include "Cotizacion.h"
#include "Tienda.h"
#include "Vendedor.h"
#include "Prendas.h"

using namespace std;

class CotizacionPresentador {

public:
    CotizacionPresentador();
    double crearCotizacion(Tienda* tienda, Vendedor* vendedor, bool tipoCorte, bool tipoCamisa, bool tipoManga, bool tipoCuello, bool calidad, double precio, int cantidad);
    void getListaCotizaciones();

private:
    list<Cotizacion*> cotizaciones;
};

#endif
