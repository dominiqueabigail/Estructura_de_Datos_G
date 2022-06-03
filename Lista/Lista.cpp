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
#include "Lista.h"
#include <iostream>

using namespace std;
/**
 * .Metodo para el constructor
 *
 */
Lista::Lista() {
	this->primero = NULL;
	this->actual = NULL;
}

/**
 * .Metodo para ingresar un valor en las listas
 *
 */
void Lista::ingreso() {
	int n;
	do
	{
		cout << "Ingrese el valor : ";
		cin >> n;
		insertar(n);
		cout << "Desea Ingresar otro numero (si-1/no-0): ";
		cin >> n;
	} while (n != 0);
}
/**
 * .Metodo insertar
 *
 * \param val
 */
void Lista::insertar(int val) {
	Nodo* nuevo = new Nodo(val, NULL);
	if (listaVacia()) {
		this->primero = nuevo;
	}
	else {
		this->actual->siguiente = nuevo;
	}
	this->actual = nuevo;
}

/**
 * .Metodo para mostrar los valores en pantalla
 *
 */
void Lista::mostrar() {
	Nodo* tmp = this->primero;
	while (tmp) {
		cout << tmp->valor << "-->";
		tmp = tmp->siguiente;
	}
	cout << "NULL\n";
}

/**
 * .Metodo para buscar un valor en la lista simple
 *
 */
void Lista::buscar() {
	int val;
	cout << "\nIngrese el valor a Buscar: ";
	cin >> val;
	int aux = 0;
	Nodo* num = new Nodo(val, NULL);
	Nodo* tmp = this->primero;
	while (tmp)
	{
		if (tmp->valor == num->valor)
		{
			aux++;
		}
		tmp = tmp->siguiente;
	}
	if (aux == 0)
	{
		cout << "El numero no existe";
	}
	else
	{
		cout << "El numero existe";
	}
}

/**
 * .Metodo para eliminar un valor en las listas
 *
 */
void Lista::eliminar() {
	int val;
	cout << "\nIngrese el valor a Eliminar: ";
	cin >> val;
	Nodo* num = new Nodo(val, NULL);
	Nodo* tmp = this->primero;
	Nodo* aux = tmp;
	Nodo* final = this->actual;
	aux = tmp;
	while (aux)
	{
		if (aux->valor == num->valor)
		{
			if (aux == tmp)
			{
				*tmp = *tmp->siguiente;
			}
			else {
				final->siguiente = aux->siguiente;
			}

		}
		final = aux;
		aux = aux->siguiente;
	}
}

/**
 * .Metodo para sumar valores dentro de la lista
 *
 */
void Lista::sumaLista() {
	Nodo* tmp = this->primero;
	int valor = 0;
	while (tmp) {
		valor += tmp->valor;
		tmp = tmp->siguiente;
	}
	cout << "La suma total de la lista es:" << valor << endl;
}