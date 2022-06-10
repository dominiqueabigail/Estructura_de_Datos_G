#include "Facturas.h"

Facturas::Facturas() {
    Propietario p1;
    Carro c1;
    Mecanico m1;
    p1.setApellidos("IPIALES");
    p1.setNombres("CARLOS");
    p1.setCelular("012345678");
    listaP.agregar(p1);
    c1.setColor("GRAY");
    c1.setMarca("NISSAN");
    c1.setPlaca("PBZ1234");
    listaC.agregar(c1);
    m1.setApellidos("IPIALES");
    m1.setNombres("CARLOS");
    listaM.agregar(m1);
    listaM.agregar(m1);
}

void Facturas::ingresarFactura() {
    system("cls");
    bool repetir = false;
    int opcion;
    Propietario p1;
    Carro c1;
    Mecanico m1;
    string nombres, nombres1, apellidos, apellidos1, celular, placa, color, marca;
    do
    {
        system("cls");
        nombres = u.deMinusculaAMayuscula(u.ingresarSoloLetras("Ingrese los nombres del propietario"));
        cout << endl;
        apellidos = u.deMinusculaAMayuscula(u.ingresarSoloLetras("Ingrese los apellidos del propietario"));
        cout << endl;
        celular = u.soloNumeros("Ingrese el numero de celular:");
        p1.setCelular(celular);
        p1.setApellidos(apellidos);
        p1.setNombres(nombres);
        if (buscarNombresApellidosP(nombres, apellidos) == true)
        {
            cout << endl;
            opcion = u.ingreso("El propietario ya ha sido registrado, desea registrar otro? si(1) Deseo continuar con este propietario(0):\n");
            if (opcion == 0)
            {

                repetir = true;
            } 
        }
        else {
            listaP.agregar(p1);
            cout << endl;
            if (nombres != "" && apellidos != "" && celular != "")
            {
                cout << "El usuario ha sido registrado" << endl;
                system("pause");
                repetir = true;
            }
            else {
                cout << "No se ha ingresado nada" << endl;
                system("pause");
            }
            
        }
    } while (repetir == false || nombres == "" || apellidos == "");
    repetir == false;
    do
    {
        system("cls");
        cout << "Ingrese la placa de auto" << endl;
        cin >> placa;
        marca = u.deMinusculaAMayuscula(u.ingresarSoloLetras("Ingrese la marca del auto"));
        cout << endl;
        color = u.deMinusculaAMayuscula(u.ingresarSoloLetras("Ingrese el color del auto"));
        cout << endl;
        c1.setColor(color);
        c1.setMarca(marca);
        c1.setPlaca(placa);
        if (buscarPlaca(placa) == true)
        {
            cout << endl;
            opcion = u.ingreso("El auto ya ha sido registrado, desea registrar otro? si(1) Deseo continuar con este propietario(0):\n");
            if (opcion == 0)
            {
                repetir = true;
            }
        }
        else {
            cout << endl;
            if (placa != "" && color != "" && marca != "")
            {
                listaC.agregar(c1);
                cout << "El auto ha sido registrado" << endl;
                system("pause");
                repetir = true;
            }
            else {
                cout << "No se ha ingresado nada" << endl;
                system("pause");
                repetir = false;
            }
            
        }
    } while (repetir == false);
    repetir == false;
    do
    {
        system("cls");
        nombres1 = u.deMinusculaAMayuscula(u.ingresarSoloLetras("Ingrese los nombres del mecanico"));
        cout << endl;
        apellidos1 = u.deMinusculaAMayuscula(u.ingresarSoloLetras("Ingrese los apellidos del mecanico"));
        cout << endl;
        m1.setApellidos(apellidos1);
        m1.setNombres(nombres1);
        if (buscarMecanico(nombres1, apellidos1) == true)
        {
            cout << endl;
            opcion = u.ingreso("El mecanico ya ha sido registrado, desea registrar otro? si(1) Deseo continuar con este mecanico(0):\n");
            if (opcion == 0)
            {
                repetir = true;
            }
        }
        else {
            cout << endl;
            if (nombres1 != "" && apellidos1 != "" )
            {
                listaM.agregar(m1);
                cout << "El mecanico ha sido registrado" << endl;
                system("pause");
                repetir = true;
            }
            else {
                cout << "No se ha ingresado nada" << endl;
                system("pause");
                repetir = false;
            }
            
        }
    } while (repetir == false);
    Factura f(nombres, apellidos, celular, placa, color, marca, nombres1, apellidos1);
    f.nuevaFactura();
    //listaF.agregar(f);
    listaF.push_back(f);
    cout << "Factura agregada " << endl;
    system("pause");
}

void Facturas::ingresarPropietario() {
    system("cls");
    bool repetir = false;
    int opcion;
    string nombres, apellidos, celular;
    do
    {
        nombres = u.deMinusculaAMayuscula(u.ingresarSoloLetras("Ingrese los nombres del propietario"));
        cout << endl;
        apellidos = u.deMinusculaAMayuscula(u.ingresarSoloLetras("Ingrese los nombres del propietario"));
        cout << endl;
        if (buscarNombresApellidosP(nombres, apellidos) != true)
        {
            opcion = u.ingreso("El propietario ya ha sido registrado, desea registrar otro? si(1) no(0):\n");
            if (opcion == 1)
            {
                nombres = u.deMinusculaAMayuscula(u.ingresarSoloLetras("Ingrese los nombres del propietario"));
                cout << endl;
                apellidos = u.deMinusculaAMayuscula(u.ingresarSoloLetras("Ingrese los nombres del propietario"));
                cout << endl;
                Propietario p;
                p.setNombres(nombres);
                p.setApellidos(apellidos);
                celular = u.soloNumeros("Ingrese el numero de celular:");
                p.setCelular(celular);
                listaP.agregar(p);
            }
            repetir = true;
            cout << "El usuario ya a sido registrado" << endl;
            system("pause");
        }
    } while (repetir == false);
}

bool Facturas::buscarNombresApellidosP(string nombres, string apellidos) {
    bool a = false;
    Nodo<Propietario>* aux = listaP.getUltimo();
    if (listaP.getPrimero()->getSiguiente() != NULL) {
        do {
            Propietario nuevoP = aux->getDato();
            if ((nuevoP.getApellidos() == apellidos) && (nuevoP.getNombres() == nombres))
            {
                a = true;
            }
            aux = aux->getAnterior();
        } while (aux != listaP.getUltimo());
    }
    else {
        if (listaP.getPrimero() != NULL)
        {
            Propietario nuevoP = listaP.getPrimero()->getDato();
            if ((nuevoP.getApellidos() == apellidos) && (nuevoP.getNombres() == nombres))
            {
                a = true;
            }
        }
        else {
            //cout << "La lista esta vacia" << endl;
        }

    }
    return a;
}

bool Facturas::buscarPlaca(string placa) {
    bool a = false;
    Nodo<Carro>* aux = listaC.getUltimo();
    if (listaC.getPrimero()->getSiguiente() != NULL) {
        do {
            Carro nuevoC = aux->getDato();
            if (nuevoC.getPlaca() == placa)
            {
                a = true;
            }
            aux = aux->getAnterior();
        } while (aux != listaC.getUltimo());
    }
    else {
        if (listaC.getPrimero() != NULL)
        {
            Carro nuevoC = aux->getDato();
            if (nuevoC.getPlaca() == placa)
            {
                a = true;
            }
        }
        else {
            //cout << "La lista esta vacia" << endl;
        }

    }
    return a;
}

bool Facturas::buscarMecanico(string nombres, string apellidos) {
    bool a = false;
    Nodo<Mecanico>* aux = listaM.getUltimo();
    if (listaP.getPrimero()->getSiguiente() != NULL) {
        do {
            Mecanico nuevoM = aux->getDato();
            if ((nuevoM.getApellidos() == apellidos) && (nuevoM.getNombres() == nombres))
            {
                a = true;
            }
            aux = aux->getAnterior();
        } while (aux != listaM.getUltimo());
    }
    else {
        if (listaM.getPrimero() != NULL)
        {
            Mecanico nuevoM = aux->getDato();
            if ((nuevoM.getApellidos() == apellidos) && (nuevoM.getNombres() == nombres))
            {
                a = true;
            }
        }
        else {
            //cout << "La lista esta vacia" << endl;
        }

    }
    return a;
}

void Facturas::mostrarFacturas() {
    system("cls");
    cout << "------------Lista de facturas------------" << endl;
    for (int i = 0; i < listaF.size(); i++)
    {
        Factura aux;
        aux = listaF[i];
        cout << "-----------------------------------------------------------" << endl;
        aux.mostrarFactura();
        cout << "-----------------------------------------------------------" << endl;
    }
    system("pause");
}

void Facturas::guardarFacturasTxt() {
    f.abrirFichero();
    for (int i = 0; i < listaF.size(); i++) {
        f.escribirFichero(listaF[i]);
    }
    cout << "Se ha guardado las facturas" << endl;
    system("pause");
}