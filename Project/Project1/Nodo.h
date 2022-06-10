#ifndef NODO_H
#define NODO_H
#include <iostream>

using namespace std;

template <class T>
class Nodo {
private:
    T* Dato;
    Nodo<T>* siguiente;
    Nodo<T>* anterior;
public:
    Nodo(T nuevo) {
        siguiente = NULL;
        anterior = NULL;
        Dato = new T;
        *Dato = nuevo;
    }
    Nodo(void) : Dato(NULL), siguiente(NULL), anterior(NULL) {}
    ~Nodo(void) {
        delete Dato;
        siguiente = NULL;
        anterior = NULL;
    }
    //metodos setts
    void setDato(T nuevo) {
        Dato = new T;
        Dato = nuevo;
    }
    void setSiguiente(Nodo<T>* _siguiente) { siguiente = _siguiente; }
    void setAnterior(Nodo<T>* _anterior) { anterior = _anterior; }
    //metodos getts
    const T getDato(void) const { return *Dato; }
    Nodo<T>* getSiguiente(void) { return siguiente; }
    Nodo<T>* getAnterior(void) { return anterior; }
    void MostrarTodo(void) const {
        Nodo<T>* aux = siguiente;
        cout << Dato << endl;
        while (aux != NULL) {
            cout << aux->getDato() << endl;
            aux = aux->getSiguiente();
        }
    }
};

#endif // NODO_H
