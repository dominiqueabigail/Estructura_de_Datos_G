/*///////////////////////////////////////////////////////////////////////////////////////////////
//  UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
//
//  EL PROGRAMA HACE UNA SUMA Y MULTIPLICACION DE VECTORES UTILIZANDO LOS OPERADORES SOBRECARGADOS DE
//  &= , *
//
//  AUTORES: Gustavo Aguas, Carlos Ipiales, Dominique Abigaíl
//  FECHA DE CREACION: 15/05/2022
//  FECHA DE MODIFICACION: 15/05/2022
//  GRUPO: 2
//  GITHUB: https://github.com/dominiqueabigail/Estructura_de_Datos_G/tree/main/Deber1-String-Int
//
*///////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>

#include "Operaciones.cpp"
#include "Coordenadas.h"

using namespace std;

int main(){
    Coordenadas cord;
    cord.setX1(4.5);
    cord.setX2(-5.9);
    cord.setY1(5.8);
    cord.setY2(-4.7);
    Coordenadas cordRes;
    Operaciones op;
    cordRes = op.operator&=(cord);
    cout << "x = " << cordRes.getX1() << " ; y = " << cordRes.getY1() << endl; 
    cordRes = op.operator*(cord);
    cout << "x = " << cordRes.getX1() << " ; y = " << cordRes.getY1() << endl; 
    return 0;
}