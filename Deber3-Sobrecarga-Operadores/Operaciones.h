#pragma once

#include <iostream>
#include <stdlib.h>
#include <conio.h>

#include "Coordenadas.cpp"

using namespace std;

class Operaciones{
    public:
        Operaciones();
        //tipo de dato que retorna la funcion-----operator----->operador a sobrecargar-->(parametros)
        Coordenadas operator&=(Coordenadas &a);
        Coordenadas operator*(Coordenadas &a);
    private:

};