#pragma once

#include <iostream>
#include <windows.h>
#include <time.h>
#include <string.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

#include "Lista.h"
#include "Utilidades.h"
#include "Usuario.h"
#include "Nodo.h"

using namespace std;

class Usuarios {
public:
    Usuarios();
    void nuevoUsuario();
    void mostrarUsuarios();
    bool validarUsuarioPassword();
private:
    string nombre, password;
    Lista<Usuario> listaUsuarios;
    Utilidades u;
};

