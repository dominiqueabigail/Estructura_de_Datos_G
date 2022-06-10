#pragma once

#include <iostream>
#include <windows.h>
#include <time.h>
#include <string.h>
#include <conio.h>
#include <string>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

class Utilidades {
public:
    Utilidades() {};
    void clrscr(); // borrar o limpiar consola
    void gotoxy(int, int); // mueve el cursor donde se imprimira el texto
    void setConsole(int, int, int, int);
    string deMayusculaAMinuscula(string cadena);
    string deMinusculaAMayuscula(string cadena);
    void wait(float);
    void cursorHide();
    int ingreso(const char*);
    string ocultarIngreso(const char*);
    string ingresarSoloLetras(const char*);
    string soloNumeros(const char*);
private:
    HANDLE hcon;
};

