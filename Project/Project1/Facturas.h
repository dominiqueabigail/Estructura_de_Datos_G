#ifndef FACTURAS_H
#define FACTURAS_H

#include <iostream>
#include <string>
#include <cstdlib>
#include <vector>

//librerias externas
#include "Lista.h"
#include "Carro.h"
#include "Nodo.h"
#include "Mecanico.h"
#include "Propietario.h"
#include "Utilidades.h"
#include "Factura.h"
#include "Fichero.h"


using namespace std;

class Facturas
{
public:
	Facturas();
	void ingresarPropietario();
	void ingresarFactura();
	bool buscarNombresApellidosP(string, string);
	bool buscarPlaca(string);
	bool buscarMecanico(string, string);
	void mostrarFacturas();
	void guardarFacturasTxt();
private:
	//Lista<Factura> listaF;
	Lista<Propietario> listaP;
	Lista<Carro> listaC;
	Lista<Mecanico> listaM;
	Utilidades u;
	vector<Factura> listaF;
	Fichero f;
};

#endif

