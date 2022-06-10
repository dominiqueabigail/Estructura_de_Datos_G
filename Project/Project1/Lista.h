#pragma once

#include "Nodo.h"
#include <iostream>
#include <stdlib.h>


using namespace std;

template <class T>
class Lista {
private:
    Nodo<T>* primero;
    Nodo<T>* actual;
    Nodo<T>* ultimo;
    int tamanio;
public:
    Lista() : primero(NULL), ultimo(NULL), actual(NULL), tamanio(0) {}
    ~Lista(void){};
    void agregar(T nuevo) {
        Nodo<T>* aux = new Nodo<T>(nuevo);
        if (listaVacia()) {
            actual = aux;
            primero = aux;
            ultimo = aux;
        }
        else {
            if (primero->getSiguiente() == NULL) {
                primero->setSiguiente(aux);
                aux->setSiguiente(primero);
                primero->setAnterior(aux);
                aux->setAnterior(primero);
                ultimo = aux;
                actual = aux;
            }
            else {
                aux->setAnterior(actual);
                aux->setSiguiente(primero);
                actual->setSiguiente(aux);
                primero->setAnterior(aux);
            }

        }
        actual = aux;
        ultimo = aux;
        tamanio++;
    };
    int getTamanio(void) const { return tamanio; };
    bool listaVacia(void) const {
        return (primero == NULL);
    };
    //void Mostrar(void) const;
    //void agregarEntre(T);
    Nodo<T>* getPrimero(void) { return primero; }
    Nodo<T>* getUltimo(void) { return ultimo; }
};