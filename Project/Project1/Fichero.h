#ifndef FICHERO_H
#define FICHERO_H

#include <fstream>  // Para ifstream
#include <iostream> // Para cout

#include "Factura.h"

using namespace std;


class Fichero
{
public:
	Fichero() {};
	void abrirFichero();
	void escribirFichero(Factura);
	void leerFichero();
	void cerrarFichero();
	void modificarFichero();
private:
	string text = "Lista de facturas\n";
	//FILE* fichero;
};

#endif