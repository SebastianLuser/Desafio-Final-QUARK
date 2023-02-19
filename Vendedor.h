#ifndef VENDEDOR_HPP
#define VENDEDOR_HPP

using namespace std;

class Vendedor {

public:
	Vendedor(const char* nombre,const char* apellido, const char* codVendedor);
	const char* Nombre();
	const char* Apellido();
	const char* CodVendedor();
private:
	const char* nombre;
	const char* apellido;
	const char* codVendedor;
};

#endif#
