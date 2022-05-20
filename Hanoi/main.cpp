/*///////////////////////////////////////////////////////////////////////////////////////////////
//  UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
//
//  Hanoi
//
//  AUTORES: Gustavo Aguas, Carlos Ipiales, Dominique Abigaíl
//  FECHA DE CREACION: 15/05/2022
//  FECHA DE MODIFICACION: 15/05/2022
//  GRUPO: 2
//  GITHUB: https://github.com/dominiqueabigail/Estructura_de_Datos_G/tree/main/Deber1-String-Int
//
*///////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include "Hanoi.h"

using namespace std;

int main() {
	Hanoi torre;
	int num;
	cout << "\nDiscos A, B, C" << endl;
	cout << "Ingrese el numero de discos: ";
	cin >> num;
	torre.ejecutarHanoi(num, 'A', 'B', 'C');

	cout << "El numero de movimientos realizados fueron: ";
	cout << torre.mostrarPasos(num) << endl;

	return 0;
}
