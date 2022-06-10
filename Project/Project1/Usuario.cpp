#include "Usuario.h"


string Usuario::getNombre() {
    return nombre;
}

string Usuario::getPassword() {
    return password;
}

void Usuario::setNombre(string _nombre) {
    this->nombre = _nombre;
}

void Usuario::setPassword(string _password) {
    this->password = _password;
}
