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
#pragma once
#include "Nodo.h"
#ifndef NULL
#define NULL (0)
#endif

/**
 * .Creacion esqueleto clase "Lista" con sus metodos atributos
 */
class Lista {
public:
	Lista();
	void ingreso();
	void insertar(int);
	void mostrar();
	void eliminar();
	void sumaLista();
	void buscar();

private:
	Nodo* primero;
	Nodo* actual;
	bool listaVacia() {
		return (this->primero == NULL);
	}

};