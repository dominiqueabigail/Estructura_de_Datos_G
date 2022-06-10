#include "Servicio.h"

string Servicio::getDetalles() {
	return detalles;
}

string Servicio::getNombre() {
	return nombre;
}

int Servicio::getCantidad() {
	return cantidad;
}

//setters
void Servicio::setDetalles(string _detalles) {
	detalles = _detalles;
}

void Servicio::setNombre(string _nombre) {
	nombre = _nombre;
}

void Servicio::setCantidad(int _cantidad) {
	cantidad = _cantidad;
}
