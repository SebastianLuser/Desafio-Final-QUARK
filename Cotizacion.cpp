#include "Cotizacion.h"
#include "Prendas.h"
#include "Camisas.h"
#include "Pantalones.h"
#include <iostream>  
#include <typeinfo>  
#include <string>
#include <ctime>

using namespace std;

Cotizacion::Cotizacion(int id, time_t horaActual, const char* codVendedor, int cantidadProductos, double resultado, Prenda* producto) {

	this->id = id;
	this->codVendedor = codVendedor;
    this->horaActual = horaActual;
	this->cantidadProductos = cantidadProductos;
	this->resultado = resultado;
	this->producto = producto;
}
int	Cotizacion::Id() {
	return id;
}

time_t Cotizacion::HoraActual() {
    return horaActual;
}

const char* Cotizacion::CodVendedor() {
	return this->codVendedor;
}
int Cotizacion::CantidadProductos() {
	return this->cantidadProductos;
}
double	Cotizacion::Resultado() {
	return this->resultado;
}
Prenda* Cotizacion::Producto() {
	return this->producto;
}

const char* Cotizacion::Imprimir() {
    string producto = "";
    string especificaciones = "";
    string s0 = " - ";

    if (dynamic_cast<Camisa*>(Producto())) {
        Camisa* camisa = dynamic_cast<Camisa*>(Producto());
        const char* manga = camisa->Manga() ? "Manga Corta" : "Manga Larga";
        const char* cuello = camisa->Cuello() ? "Cuello Mao" : "Cuello Comun";
        const char* calidad = camisa->Calidad() ? "Premium" : "Standard";
        producto = "Camisa";
        especificaciones = manga + s0 + cuello + s0 + calidad;
    }
    else if (dynamic_cast<Pantalon*>(Producto())) {
        Pantalon* pantalon = dynamic_cast<Pantalon*>(Producto());
        const char* corte = pantalon->Corte() ? "Chupin" : "Comun";
        const char* calidad = pantalon->Calidad() ? "Premium" : "Standard";
        producto = "Pantalon";
        especificaciones = corte + s0 + calidad;
    }
    else {
        return "";
    }

    string s1 = "------------------------ - \n";
    string s2 = " ";
    string s3 = "\n";
    string s4 = "Id:";
    string s5 = "Codigo de Vendedor: ";
    string s6 = "Fecha: ";
    string s7 = "Producto: ";
    string s8 = "Cantidad: ";
    string s9 = "Precio Cotizado : ";


    string cotizacionShow = s1 
        + s4 + to_string(this->Id()) + s3 
        + s5 + this->CodVendedor() + s3 
        + s6 /*+ this->HoraActual()*/ +  s3
        + s7 + producto +  s2 + especificaciones + s3
        + s8 + to_string(this->CantidadProductos()) + s3
        + s9 + to_string(this->Resultado()) + s3;

    const char* cotizacionMostrar = cotizacionShow.c_str();
 
    cout << cotizacionMostrar << endl;
    return cotizacionMostrar;
}