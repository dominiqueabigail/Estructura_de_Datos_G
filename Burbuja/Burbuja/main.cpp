#include "Burbuja.cpp" 
#include <iostream>
#include <stdlib.h>
using namespace std;
int main() {
    Burbuja<int> objArreglo;
    int* arreglo = objArreglo.crearArreglo(10);
    objArreglo.encerarArreglo(arreglo);
    cout << "Arrglo desordenado: \n";
    objArreglo.generarNumeros(arreglo);
    objArreglo.imprimirArreglo(arreglo);
    cout << "\n\n";
    cout << "Arreglo Ordenado: \n";
    objArreglo.ordenarNumeros(arreglo);
    objArreglo.imprimirArreglo(arreglo);
    cout << "\n\n";
    objArreglo.borrarEspacioMemoria(arreglo);
    system("pause");
}