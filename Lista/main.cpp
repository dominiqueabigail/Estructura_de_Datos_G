/*///////////////////////////////////////////////////////////////////////////////////////////////
//  UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
//
//  EL PROGRAMA HACE UNA VALIDACION DE SOLO ENTEROS O DECIMALES
//
//  AUTORES: Gustavo Aguas, Carlos Ipiales, Dominique Abigaíl
//  FECHA DE CREACION: 12/05/2022
//  FECHA DE MODIFICACION: 30/05/2022
//  GRUPO:
//  GITHUB: https://github.com/dominiqueabigail/Estructura_de_Datos_G/tree/main/Deber1-String-Int
//
*///////////////////////////////////////////////////////////////////////////////////////////////
#include <iostream>
#include "Lista.h"
#include "Nodo.h"
using namespace std;
int main()
{
	Lista lst;
	lst.ingreso();
	lst.mostrar();
	lst.buscar();
	printf_s("\n");
	lst.eliminar();
	lst.mostrar();
	lst.sumaLista();
	return 0;
}