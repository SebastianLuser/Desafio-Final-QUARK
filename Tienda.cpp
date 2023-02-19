#include <list>
#include "Tienda.h"
#include "Camisas.h"
#include "Pantalones.h"
#include "Prendas.h"
#include <iostream>  
#include <typeinfo>  

using namespace std;

Tienda::Tienda(const char* nombre, const char* direccion, list<Prenda*> productos) {

    this->nombre = nombre;
    this->direccion = direccion;
    this->productos = productos;
}
list<Prenda*> Tienda:: Productos() {
    return productos;
}
const char* Tienda::Nombre() {
    return nombre;
}
const char* Tienda::Direccion() {
    return direccion;
}
Prenda* Tienda::getPrenda(bool tipoRopa, bool tipoCuello, bool tipoManga, bool tipoCalidad) {

    Prenda* _producto = nullptr;

    if (Productos().empty()) {
        return _producto;
    }
        for(Prenda* prod : Productos()){


            if (dynamic_cast<Camisa*>(prod)) {
                Camisa* camisa = dynamic_cast<Camisa*>(prod);

                if (camisa->Manga() == tipoManga && camisa->Cuello() == tipoCuello && camisa->Calidad() == tipoCalidad) {
                    _producto = camisa;
                }
            }
        }

    return _producto;

}


Prenda* Tienda::getPrenda(bool tipoCorte, bool tipoRopa, bool tipoCalidad) {

    Prenda* _producto = nullptr;

    if (Productos().empty()) {
        return _producto;
    }
    for (Prenda* prod : Productos()) {

        if (dynamic_cast<Pantalon*>(prod)) {
            Pantalon* pantalon = dynamic_cast<Pantalon*>(prod);
            if (pantalon->Corte() == tipoCorte && pantalon->Calidad() == tipoCalidad) {
                _producto = pantalon;
            }
        }
    }
    return _producto;

}



int Tienda::getStock(bool tipoCorte, bool tipoRopa, bool tipoCalidad) {

    int _producto = 0;

    if (Productos().empty()) {
        return _producto;
    }
    for (Prenda* prod : Productos()) {

        if (dynamic_cast<Pantalon*>(prod)) {
            Pantalon* pantalon = dynamic_cast<Pantalon*>(prod);
            if (pantalon->Corte() == tipoCorte && pantalon->Calidad() == tipoCalidad) {
                _producto = pantalon->Stock();
            }
        }
    }
    return _producto;

}


int Tienda::getStock(bool tipoRopa, bool tipoCuello, bool tipoManga, bool tipoCalidad) {

    int _producto = 0;

    if (Productos().empty()) {
        return _producto;
    }
    for (Prenda* prod : Productos()) {


        if (dynamic_cast<Camisa*>(prod)) {
            Camisa* camisa = dynamic_cast<Camisa*>(prod);

            if (camisa->Manga() == tipoManga && camisa->Cuello() == tipoCuello && camisa->Calidad() == tipoCalidad) {
                _producto = camisa->Stock();
            }
        }
    }

    return _producto;

}