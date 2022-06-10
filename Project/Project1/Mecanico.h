#pragma once

#include <string>
#include <iostream>

using namespace std;

class Mecanico
{
public:
	Mecanico() {};
	//getters
	string getNombres();
	string getApellidos();
	//setters
	void setNombres(string);
	void setApellidos(string);
private:
	string nombres, apellidos;
};

