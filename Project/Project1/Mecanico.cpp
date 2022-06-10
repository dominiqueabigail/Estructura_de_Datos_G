#include "Mecanico.h"

//getters
string Mecanico::getNombres() {
	return nombres;
}

string Mecanico::getApellidos() {
	return apellidos;
}


//setters
void Mecanico::setNombres(string _nombres) {
	nombres = _nombres;
}

void Mecanico::setApellidos(string _apellidos) {
	apellidos = _apellidos;
}


