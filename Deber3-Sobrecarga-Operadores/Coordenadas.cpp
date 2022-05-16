#include "Coordenadas.h"

Coordenadas::Coordenadas(){
    x1 = 0;
    y1 = 0;
    x2 = 0;
    y2 = 0;
}

Coordenadas::Coordenadas(double _x1, double _y1, double _x2, double _y2){
    x1 = _x1;
    y1 = _y1;
    x2 = _x2;
    y2 = _y2;
}

double Coordenadas::getX1(){
    return x1;
}

double Coordenadas::getY1(){
    return y1;
}

double Coordenadas::getX2(){
    return x2;
}

double Coordenadas::getY2(){
    return y2;
}

void Coordenadas::setX1(double _x1){
    this->x1 = _x1;
}

void Coordenadas::setY1(double _y1){
    this->y1 = _y1;
}

void Coordenadas::setX2(double _x2){
    this->x2 = _x2;
}

void Coordenadas::setY2(double _y2){
    this->y2 = _y2;
}