#include "TiendaPresentador.h"
#include "Tienda.h"
#include "Prendas.h"
#include "Pantalones.h"
#include "Camisas.h"
#include <List>
#include <iostream>

using namespace std;


TiendaPresentador::TiendaPresentador() {
    products = initializeProducts();
    this->tienda = new Tienda("Recoleta Fashion", "Santa Fe 2500", products);
}

list<Prenda*> TiendaPresentador::initializeProducts() {
    list<Prenda*> products;

    //Camisas creacion
    products.push_front(new Camisa(false, 100, true, true));
    products.push_front(new Camisa(true, 100, true, true));
    products.push_front(new Camisa(false, 150, false, true));
    products.push_front(new Camisa(true, 150, false, true));
    products.push_front(new Camisa(false, 75, true, false));
    products.push_front(new Camisa(true, 75, true, false));
    products.push_front(new Camisa(false, 175, false, false));
    products.push_front(new Camisa(true, 175, false, false));

    //Pantalones creacion
    products.push_front(new Pantalon(false, 750, true));
    products.push_front(new Pantalon(false, 250, false));
    products.push_front(new Pantalon(true, 750, true));
    products.push_front(new Pantalon(true, 250, false));


    return products;
}
Tienda* TiendaPresentador::getTienda() {

    return tienda;
}