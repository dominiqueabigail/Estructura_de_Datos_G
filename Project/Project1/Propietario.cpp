#include "Propietario.h"

//void Propietario::agregarCarro() {
//	bool repetir = true;
//	string placa, color, marca;
//	int respuesta;
//	Carro c1;
//	do
//	{
//		system("cls");
//		cout << "Ingrese la placa del auto: " << endl;
//		getline(cin, placa);
//		cout << "Ingrese la marca del auto " << endl;
//		getline(cin, marca);
//		cout << "Ingrese el color del auto " << endl;
//		getline(cin, color);
//		if (buscarPlaca(placa) == false)
//		{
//			c1.setColor(color);
//			c1.setMarca(marca);
//			c1.setPlaca(placa);
//			listaC.agregar(c1);
//			cout << "Ingreso realizado con exito" << endl;
//			respuesta = u.ingreso("Desea ingresar otro servicio: Si(1) No(0) \n");
//		}
//		else {
//			respuesta = u.ingreso("El carro ya existe, si quiere ingresar otro carro digite 1 si quiere regresar al menu principal digite 0 \n");
//		}
//		if (respuesta == 0)
//		{
//			repetir = false;
//		}
//	} while (repetir == true);
//}

void Propietario::modificarCarro() {

}

void Propietario::eliminarCarro() {
	
}

//bool Propietario::buscarPlaca(string placa) {
//	bool a = false;
//	Nodo<Carro>* aux = listaC.getUltimo();
//	if (listaC.getPrimero()->getSiguiente() != NULL) {
//		do {
//			Carro nuevoC = aux->getDato();
//			if ((nuevoC.getPlaca() == placa))
//			{
//				a = true;
//			}
//			aux = aux->getAnterior();
//		} while (aux != listaC.getUltimo());
//	}
//	else {
//		if (listaC.getPrimero() != NULL)
//		{
//			Carro nuevoC = aux->getDato();
//			if (nuevoC.getPlaca() == placa)
//			{
//				a = true;
//			}
//		}
//		else {
//			//cout << "La lista esta vacia" << endl;
//		}
//
//	}
//	return a;
//}

//getters
string Propietario::getNombres() {
	return nombres;
}

string Propietario::getApellidos() {
	return apellidos;
}

string Propietario::getCelular() {
	return celular;
}

//setters
void Propietario::setNombres(string _nombres) {
	nombres = _nombres;
}

void Propietario::setApellidos(string _apellidos) {
	apellidos = _apellidos;
}

void Propietario::setCelular(string _celular) {
	celular = _celular;
}
