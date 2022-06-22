#pragma once
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

template <class tipo>
class Burbuja {
private:
    //atributos privados
public:
    Burbuja() {};
    void encerarArreglo(tipo arreglo[]);
    void generarNumeros(tipo arreglo[]);
    void ordenarNumeros(tipo arreglo[]);
    void imprimirArreglo(tipo arreglo[]);
    int* crearArreglo(int);
    void borrarEspacioMemoria(tipo cad[]);
};
