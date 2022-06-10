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

class Usuario {
public:
    Usuario() {};
    string getNombre();
    string getPassword();
    void setNombre(string);
    void setPassword(string);
private:
    string nombre, password;
};

