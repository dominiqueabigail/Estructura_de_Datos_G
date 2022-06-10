#pragma once

#include <iostream>
#include <string>

using namespace std;

class Servicio
{
public:
	Servicio() { detalles = ""; nombre = "", cantidad = 0; };
	//getters
	string getDetalles();
	string getNombre();
	int getCantidad();
	//setters
	void setDetalles(string);
	void setNombre(string);
	void setCantidad(int);
private:
	string detalles, nombre;
	int cantidad;
};

