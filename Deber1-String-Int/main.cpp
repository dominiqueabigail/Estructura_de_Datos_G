/*///////////////////////////////////////////////////////////////////////////////////////////////
//  UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
//
//  EL PROGRAMA TRNASFORMA UN STRING INGRESADO A INT
//
//  AUTORES:
//  FECHA DE CREACION: 10/05/2022
//  FECHA DE MODIFICACION: 10/05/2022
//  GRUPO:
//  GITHUB:
//
*///////////////////////////////////////////////////////////////////////////////////////////////




#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string>

#include "Operacion.cpp"

using namespace std;

int main(){
    Operacion op("1754");
    cout << op.cambioStringInt();
    Operacion op1("hola");
    op1.cambioStringAscii();

}