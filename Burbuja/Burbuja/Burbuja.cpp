#include "Burbuja.h"

template <class tipo>
void Burbuja<tipo>::encerarArreglo(tipo arreglo[]) {
    for (int i = 0; i < 10; i++) {
        arreglo[i] = 0;
    }
}

template <class tipo>
void Burbuja<tipo>::generarNumeros(tipo arreglo[]) {
    srand(time(NULL));
    for (int i = 0; i < 10; i++) {
        arreglo[i] = 1 + rand() % 10;
    }
}
template <class tipo>
void Burbuja<tipo>::ordenarNumeros(tipo arreglo[]) {
    int aux, vueltas = 0;
    for (int i = 0; i < 10; i++) {
        for (int j = i + 1; j < 10; j++) {
            if (arreglo[i] > arreglo[j]) {
                aux = arreglo[i];
                arreglo[i] = arreglo[j];
                arreglo[j] = aux;
            }
        }
        vueltas++;
    }
    cout << "El numero de vueltas realizadas es: " << vueltas << "\n";
}

template <class tipo>
void Burbuja<tipo>::imprimirArreglo(tipo arreglo[]) {
    cout << "Arreglo: { ";
    for (int i = 0; i < 10; i++) {
        cout << arreglo[i] << " ";
    }
    cout << " }";
}

template <class tipo>
int* Burbuja<tipo>::crearArreglo(int cantidad) {
    int* cadena = NULL;
    cadena = new int[cantidad];
    return cadena;
}

template <class tipo>
void Burbuja<tipo>::borrarEspacioMemoria(tipo cad[]) {
    delete[] cad;
}