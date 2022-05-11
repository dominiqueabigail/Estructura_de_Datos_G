#include "Operacion.h"

Operacion::Operacion(){
    cout << "Ingrese cadena: " << endl;
    cin >> palabra;
}

Operacion::Operacion(string cad){
    this->palabra = cad;
}

int Operacion::cambioStringInt(){
    int num;
    num = stoi(palabra);
    return num;
}

int Operacion::cambioStringInt(string cad){
    int num;
    num = stoi(cad);
    return num;
}

int Operacion::cambioStringAscii(){
    int tamanio = palabra.length();
    int *arreglo =  new int[tamanio];
    for (int i = 0; i < palabra.length(); i++)
    {
        arreglo[i] = palabra[i];
    }
    for (int i = 0; i < palabra.length(); i++)
    {
        cout << arreglo[i] << endl;
    }
}