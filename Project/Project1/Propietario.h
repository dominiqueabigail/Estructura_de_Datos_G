#pragma once

#include <string>
#include <iostream>

//librerias externas
#include "Nodo.h"
#include "Utilidades.h"

using namespace std;

class Propietario
{
public:
	Propietario() {};
	//void agregarCarro();
	void modificarCarro();
	void eliminarCarro();
	//bool buscarPlaca(string);
	//getters
	string getNombres();
	string getApellidos();
	string getCelular();
	//setters
	void setNombres(string);
	void setApellidos(string);
	void setCelular(string);
private:
	string nombres, apellidos, celular;
	//Lista<Carro> listaC;
	Utilidades u;
};
