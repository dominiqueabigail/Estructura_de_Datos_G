#ifndef FACTURA_H
#define FACTURA_H

#include <iostream>
#include <string>
#include <cstdlib>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "Utilidades.h"


using namespace std;

class Factura
{
public:
	Factura(string nombresP, string apellidosP, string celular, string placa, string color, string marca, string nombresM, string apellidosM) {
		this->nombresP = nombresP;
		this->apellidosP = apellidosP;
		this->celular = celular;
		this->placa = placa;
		this->color = color;
		this->marca = marca;
		this->nombresM = nombresM;
		this->apellidosM = apellidosM;
	};
	Factura(){}
	void nuevaFactura();
	void mostrarFactura();
	//getters
	string getNombresP();
	string getNombresM();
	string getApellidosP();
	string getApellidosM();
	string getCelular();
	string getPlaca();
	string getMarca();
	string getColor();
	string getDetallesS();
	string getNombreS();
	int getCantidad();
private:
	string nombresP, apellidosP, celular, placa, color, marca, nombresM, apellidosM, detallesS, nombreS;
	int cantidad;
};

#endif

