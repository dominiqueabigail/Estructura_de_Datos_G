#include "Carro.h"

string Carro::getPlaca() {
	return placa;
}

string Carro::getMarca() {
	return marca;
}

string Carro::getColor() {
	return color;
}

//setters
void Carro::setPlaca(string _placa) {
	placa = _placa;
}

void Carro::setMarca(string _marca) {
	marca = _marca;
}

void Carro::setColor(string _color) {
	color = _color;
}