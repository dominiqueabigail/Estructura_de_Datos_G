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

#ifndef NULL
#define NULL (0)
#endif
#include "Nodo.h"
/**
 * .Constructor
 *
 * \param val
 * \param sig
 */
Nodo::Nodo(int val, Nodo* sig = NULL) {
	this->valor = val;
	this->siguiente = sig;
}