/*///////////////////////////////////////////////////////////////////////////////////////////////
//  UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
//
//  EL PROGRAMA HACE UNA VALIDACION DE SOLO ENTEROS O DECIMALES
//
//  AUTORES: Gustavo Aguas, Carlos Ipiales, Dominique Abigaíl
//  FECHA DE CREACION: 12/05/2022
//  FECHA DE MODIFICACION: 12/05/2022
//  GRUPO: 
//  GITHUB: https://github.com/dominiqueabigail/Estructura_de_Datos_G/tree/main/Deber1-String-Int
//
*///////////////////////////////////////////////////////////////////////////////////////////////


#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "Validacion.cpp"

using namespace std;


int main(int argc, char** argv) {
    Validacion<int> validarInt;
    Validacion<float> validarFloat;
	char dato[10];
	int valor;
	//strcpy_s(dato, validar.ingresarDatos("Ingrese el valor numerico entero "));
    cout << "\n" << validarInt.ingresarDatos("Ingrese el valor numerico entero ") << endl;
    //printf("Dato copiado: %s", dato);
    cout << "\n" << validarFloat.ingresarDatos("Ingrese el valor numerico entero ") << endl;
	return 0;
}