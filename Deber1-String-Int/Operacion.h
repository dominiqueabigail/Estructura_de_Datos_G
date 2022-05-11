#pragma once

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string>

using namespace std;

class Operacion{
    public:
        Operacion();
        Operacion(string);
        int cambioStringInt(string);
        int cambioStringInt();
        int cambioStringAscii(string);
        int cambioStringAscii();
    private:
        string palabra;
};