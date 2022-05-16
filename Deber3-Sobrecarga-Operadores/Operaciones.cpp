#include "Operaciones.h"

Operaciones::Operaciones(){

}

//suma de coordenadas
Coordenadas Operaciones::operator&=(Coordenadas &a){
    Coordenadas resultado;
    resultado.setX1(a.getX1() + a.getX2());
    resultado.setY1(a.getY1() + a.getY2()); 
    return resultado;  
}

//Producto punto de dos vectores
Coordenadas Operaciones::operator*(Coordenadas &a){
    Coordenadas resultado;
    resultado.setX1(a.getX1() * a.getX2());
    resultado.setY1(a.getY1() * a.getY2()); 
    return resultado;
}