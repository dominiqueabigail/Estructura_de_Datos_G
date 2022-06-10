#include "Usuarios.h"

Usuarios::Usuarios() {
    Usuario usuario;
    usuario.setNombre("admin");
    usuario.setPassword("admin");
    listaUsuarios.agregar(usuario);
}

void Usuarios::nuevoUsuario() {
    Usuario usuario;
    string userName, password;
    cout << "Ingrese el usuario: " << endl;
    cin >> userName;
    usuario.setNombre(userName);
    cout << "Ingrese su contrase�a: " << endl;
    cin >> password;
    usuario.setPassword(password);
    listaUsuarios.agregar(usuario);
    cout << "Usuario Ingresado con exito";
}

void Usuarios::mostrarUsuarios() {
    Nodo<Usuario>* aux = listaUsuarios.getUltimo();
    //Imprime la lista desde el ultimo valor hasta el primero

    if (listaUsuarios.getPrimero()->getSiguiente() != NULL) {
        do {
            Usuario nuevoUsuario = aux->getDato();
            cout << nuevoUsuario.getPassword() << endl;
            aux = aux->getAnterior();
        } while (aux != listaUsuarios.getUltimo());
    }
    else {
        if (listaUsuarios.getPrimero() != NULL)
        {
            Usuario nuevoUsuario = listaUsuarios.getPrimero()->getDato();
            cout << nuevoUsuario.getPassword() << endl;
        }
        else {
            cout << "La lista esta vacia" << endl;
        }


    }
    /*cout << "____________________________" << endl;
    //Imprime la lista desde el primer elementos hasta el ultimo
    aux = primero;
    if (primero->getSiguiente() != NULL) {
        do {
            cout << aux->getDato() << endl;
            aux = aux->getSiguiente();
        } while (aux != primero);
    }
    else {
        cout << "La lista esta vacia" << endl;
    }
    cout << "____________________________" << endl;*/
}

bool Usuarios::validarUsuarioPassword() {
    bool validacion = false;
    string usuario, password;
    cout << "Ingrese el usuario: " << endl;
    cin >> usuario;
    password = u.ocultarIngreso("Ingrese su contrase�a: ");
    Nodo<Usuario>* aux = listaUsuarios.getUltimo();
    //Imprime la lista desde el ultimo valor hasta el primero

    if (listaUsuarios.getPrimero()->getSiguiente() != NULL) {
        do {
            Usuario nuevoUsuario = aux->getDato();
            if ((nuevoUsuario.getNombre() == usuario) && (nuevoUsuario.getPassword() == password))
            {
                validacion = true;

            }
            aux = aux->getAnterior();
        } while (aux != listaUsuarios.getUltimo());
    }
    else {
        if (listaUsuarios.getPrimero() != NULL)
        {
            Usuario nuevoUsuario = listaUsuarios.getPrimero()->getDato();
            if ((nuevoUsuario.getNombre() == usuario) && (nuevoUsuario.getPassword() == password))
            {
                validacion = true;

            }
        }
        else {
            cout << "La lista esta vacia" << endl;
        }


    }
    return validacion;
}
