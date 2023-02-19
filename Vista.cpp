#include "Vista.h"
#include "Tienda.h"
#include "Prendas.h"
#include "Pantalones.h"
#include "Camisas.h"
#include "Vendedor.h"
#include "TiendaPresentador.h"
#include "CotizacionPresentador.h"
#include "VendedorPresentador.h"

Vista::Vista() {
	Load();
	tituloPrincipal();
	menuInicio();
}

void Vista::MostrarTexto(const char* texto)
{
	cout << texto << endl;
}

void Vista::Load() {
	this->cotizacionPresentador = new CotizacionPresentador();
	this->tiendaPresentador = new TiendaPresentador();
	this->vendedorPresentador = new VendedorPresentador();

	Tienda* tienda = this->tiendaPresentador->getTienda();
	Vendedor* vendedor = this->vendedorPresentador->getVendedor();	

	this->nombreVendedorLabel = vendedor->Nombre();
	this->apellidoVendedorLabel = vendedor->Apellido();
	this->codVendedorLabel = vendedor->CodVendedor();
	this->nombreTiendaLabel = tienda->Nombre();
	this->direccionTiendaLabel = tienda->Direccion();

}


void Vista::tituloPrincipal() {
	 
	cout << endl;
	cout << "COTIZADOR EXPRESS - COTIZAR" << endl;
	cout << "-------------------------------------------------------------------" << endl;
	cout << "Presione 3 para volver al Vista principal" << endl;
	cout << "-------------------------------------------------------------------" << endl;
}
void Vista::menuInicio() {

	cout << "COTIZADOR EXPRESS - Vista PRINCIPAL" << endl;
	cout << "-------------------------------------------------------------------" << endl;
	cout << "Nombre de la tienda: "  << this->nombreTiendaLabel <<   " | " << "Direccion de la tienda: " << this->direccionTiendaLabel << endl;
	cout << "-------------------------------------------------------------------" << endl;
	cout << "Nombre y Apellido del vendedor: " << this->nombreVendedorLabel << " "<< this->apellidoVendedorLabel << " | " << "Codigo del vendedor: "<< this->codVendedorLabel << endl;
	cout << "-------------------------------------------------------------------" << endl;
	cout << "" << endl;
	char input;
	cout << "SELECCIONE UNA OPCION DEL Vista: " << endl;
	cout << "1- Historial de Cotizaciones" << endl;
	cout << "2- Realizar cotizacion" << endl;
	cout << "3- Salir" << endl;
	do
	{

		cin >> input;
		switch (input)
		{
		case '1':
			cout << "--------------------------------------------------" << endl;
			menuHisto();
			break;
		case '2':
			cout << "--------------------------------------------------" << endl;
			menuCoti();
			break;
		case '3':
			exit(EXIT_SUCCESS);
			break;
		default: MostrarTexto("La ocpcion no es valida");
		}

	} while (input != '3');
}

void Vista::menuHisto() {
	char input;
	cout << "COTIZADOR EXPRESS - HISTORIAL DE COTIZACIONES" << endl;
	cout << "-------------------------------------------------------------------" << endl;
	cout << "Presione 3 para volver al Vista principal" << endl;
	cout << "-------------------------------------------------------------------" << endl;
	cotizacionPresentador->getListaCotizaciones();
	cout << "-------------------------------------------------------------------" << endl;
	cout << "Presione 3 para volver al manue principal" << endl;
	cout << "-------------------------------------------------------------------" << endl;
	do {
		cin >> input;
		if (input == '3') {
			menuInicio();
		}
		else {
			cout << "-------------------------------------------------------------------" << endl;
			cout << "Presione 3 para volver al manue principal" << endl;
			cout << "-------------------------------------------------------------------" << endl;
			cin >> input;
		}
	} while (input != '3');
}

void Vista::menuCoti() {
	char input;
	tituloPrincipal();
	cout << "PASO 1: Seleccione la prenda a cotizar:" << endl;
	cout << "1) Camisa" << endl;
	cout << "2) Pantalon" << endl;
	cout << "-------------------------------------------------------------------" << endl;
	do {
		cin >> input;
		switch (input)
		{
		case '1':
			this->tipoRopa = true;
			menuCamisaM();
			break;
		case '2':
			this->tipoRopa = false;
			menuPantalon();
			break;
		case '3':
			menuInicio();
			break;
		default: MostrarTexto("La ocpcion no es valida");
		}

	} while (input != '3');
}

void Vista::menuCamisaM() {
	char input;
	tituloPrincipal();
	cout << "PASO 2.a: La camisa a cotizar, Es Manga Corta?:" << endl;
	cout << "1) Si" << endl;
	cout << "2) No" << endl;
	cout << "-------------------------------------------------------------------" << endl;
	do {
		cin >> input;
		switch (input)
		{
		case '1':
			//Crear objeto camisa con bool manga corta = true
			this->tipoManga = true;
			menuCamisaC();
			break;
		case '2':
			//Crear objeto camisa con bool manga corta = false
			this->tipoManga = false;
			menuCamisaC();
			break;
		case '3':
			menuInicio();
			break;
		default: MostrarTexto("La ocpcion no es valida");
		}
	} 	while (input != '3');

}

void Vista::menuCamisaC() {
	char input;
	tituloPrincipal();
	cout << "PASO 2.a: La camisa a cotizar, Es Cuello Mao?:" << endl;
	cout << "1) Si" << endl;
	cout << "2) No" << endl;
	cout << "-------------------------------------------------------------------" << endl;
	do{
		cin >> input;
		switch (input)
		{
		case '1':
			//Setear el bool de bool cuello mao = true del objeto prenda creado
			this->tipoCuello = true;
			menuCalidad();
			break;
		case '2':
			//Setear el bool de bool cuello mao = false del objeto prenda creado
			this->tipoCuello = false;
			menuCalidad();
			break;
		case '3':
			menuInicio();
			break;
		default: MostrarTexto("La ocpcion no es valida");
		}
} 	while (input != '3');
}

void Vista::menuPantalon() {
	char input;
	tituloPrincipal();
	cout << "PASO 2.c: El pantalon a cotizar, Es Chupin?:" << endl;
	cout << "1) Si" << endl;
	cout << "2) No" << endl;
	cout << "-------------------------------------------------------------------" << endl;
	do {

		cin >> input;
		switch (input)
		{
		case '1':
			//Crear objeto pantalon con bool chupin = true
			this->tipoCorte = true;
			menuCalidad();
			break;
		case '2':
			//Crear objeto pantalon con bool chupin = false
			this->tipoCorte = false;
			menuCalidad();
			break;
		case '3':
			menuInicio();
			break;
		default: MostrarTexto("La ocpcion no es valida");
		}
	} while (input != '3');
}

void Vista::menuCalidad() {
	char input;
	tituloPrincipal();
	cout << "PASO 3: Seleccione la calidad de la prenda:" << endl;
	cout << "1) Premium" << endl;
	cout << "2) Standard" << endl;
	cout << "-------------------------------------------------------------------" << endl;
	do {
		cin >> input;
		switch (input)
		{
		case '1':
			//Setear el bool de calidad a true del objeto prenda creado
			this->calidad = true;
			menuPrecio();
			break;
		case '2':
			//Setear el bool de calidad a true del objeto prenda creado
			this->calidad = false;
			menuPrecio();
			break;
		case '3':
			menuInicio();
			break;
		default: MostrarTexto("La ocpcion no es valida");
		}
	} while (input != '3');
}

void Vista::menuPrecio() {
	/*double input;*/
	tituloPrincipal();
	cout << "PASO 4: Ingrese el precio unitario de la prenda a cotizar:" << endl;
	cout << "- ";
	do {
		cin >> precio;
		if (cin.fail())
		{
			cout << "--------------------------------------------------" << endl;
			cout << "Ingrese un input entero" << endl;
			cout << "--------------------------------------------------" << endl;
			cin.clear();
			cin.ignore(500, '\n');
		}
		else {
			cout << "-------------------------------------------------------------------" << endl;
			//Setear el precioU del objeto prenda creado
			if (precio == 3) {
				menuInicio();
			}
			else {
				menuCantidad();
			}
		}
	} while (cantidad != 3);

}

void Vista::menuCantidad() {
	tituloPrincipal();
	cout << "PASO 5: Ingrese la cantidad  mayor a 0 de unidades a cotizar:" << endl;
	cout << "- ";
	do {
		cin >> cantidad;
		if (cin.fail())
		{
			cout << "--------------------------------------------------" << endl;
			cout << "Ingrese un input entero" << endl;
			cout << "--------------------------------------------------" << endl;
			cin.clear();
			cin.ignore(500, '\n');
		}
		else {
			cout << "-------------------------------------------------------------------" << endl;
			if (Cotizar(this->tipoCorte, this->tipoRopa, this->tipoManga, this->tipoCuello, this->calidad, this->precio, this->cantidad) == 0) {
				menuCantidad();
			}
			menuInicio();
			if (cantidad == 3) {
				menuInicio();
			}
		}
	} while (cantidad != 3);
}

double Vista::Cotizar(bool tipoCorte, bool tipoRopa, bool tipoManga, bool tipoCuello, bool calidad, double  precio, int cantidad) {

	double result = cotizacionPresentador->crearCotizacion(tiendaPresentador->getTienda(), vendedorPresentador->getVendedor(), tipoCorte, tipoRopa, tipoManga, tipoCuello, calidad, precio, cantidad);
	return result;
}


Vista::~Vista()
{
}