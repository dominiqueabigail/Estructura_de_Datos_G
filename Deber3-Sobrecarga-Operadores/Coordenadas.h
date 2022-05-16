#pragma once

#include <iostream>
#include <stdlib.h>
#include <conio.h>

using namespace std;

class Coordenadas{
    public:
        Coordenadas();
        Coordenadas(double, double, double, double);
        //metodos get
        double getX1();
        double getY1();
        double getX2();
        double getY2();
        //metodos set
        void setX1(double);
        void setY1(double);
        void setX2(double);
        void setY2(double);
    private:
        double x1, y1, x2, y2;
};