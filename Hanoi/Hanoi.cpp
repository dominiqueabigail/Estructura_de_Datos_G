#include <iostream>
#include "Hanoi.h"
using namespace std;

/**
	@brief Metodo para ejecutar la recursividad
	@param num
	@param a
	@param c
	@param b
**/
void Hanoi::ejecutarHanoi(int num, char a, char c, char b) {
	if (num == 1) {
		cout << "Mover del bloque " << num << " Desde " << a << " Hata " << c << endl;
	}
	else {
		ejecutarHanoi(num - 1, a, b, c);
		cout << "Mover del bloque " << num << " Desde " << a << " Hata " << c << endl;
		ejecutarHanoi(num - 1, b, c, a);
	}

}
/**
	@brief  Metodo para mostrar el numero de pasos que se realizo
	@param  num
	@retval
**/
int Hanoi::mostrarPasos(int num) {
	if (num == 1) {
		return 1;
	}
	else {
		return 2 * mostrarPasos(num - 1) + 1;
	}
}