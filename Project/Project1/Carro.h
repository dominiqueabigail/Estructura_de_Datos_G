#pragma once

#include <string>
#include <iostream>

//librerias externas


using namespace std;

class Carro
{
public:
	Carro() {};
	//getters
	string getPlaca();
	string getMarca();
	string getColor();
	//setters
	void setPlaca(string);
	void setMarca(string);
	void setColor(string);
private:
	string placa, marca, color;
};


