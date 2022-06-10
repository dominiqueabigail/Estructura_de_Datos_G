#include "Factura.h"

void Factura::nuevaFactura() {
	Utilidades u;
	system("cls");
	string detalles, nombre;
	int cantidad;
	cout << "Ingrese el nombre del producto/servicio realizado: " << endl;
	cin.ignore();
	getline(cin, nombre);
	cout << "Ingrese los detalles del producto/servicio realizado: " << endl;
	getline(cin, detalles);
	cantidad = u.ingreso("Ingrese la cantidad del producto/servicio realizado: \n");
	cout << "Ingreso realizado con exito" << endl;
	nombreS = nombre;
	detallesS = detalles;
	this->cantidad = cantidad;
}

//void Factura::nuevaFactura() {
//	bool repetir = true;
//	string detalles, nombre;
//	int cantidad, respuesta;
//	Servicio s1;
//	do
//	{
//		system("cls");
//		cout << "Ingrese el nombre del producto/servicio realizado: " << endl;
//		cin.ignore();
//		getline(cin, nombre);
//		cout << "Ingrese los detalles del producto/servicio realizado: " << endl;
//		getline(cin, detalles);
//		cantidad = u.ingreso("Ingrese la cantidad del producto/servicio realizado: \n");
//		cout << "Ingreso realizado con exito" << endl;
//		respuesta = u.ingreso("Desea ingresar otro servicio: Si(1) No(0) \n");
//		
//		s1.setNombre(nombre);
//		s1.setDetalles(detalles);
//		s1.setCantidad(cantidad);
//		listaS.agregar(s1);
//		if (respuesta == 0)
//		{
//			repetir = false;
//		}
//	} while (repetir == true);
//}

void Factura::mostrarFactura() {
	cout << "Nombres y Apellidos del Propietario: " << nombresP << " " << apellidosP << endl;
	cout << "Celular/Telefono del Propietario: " << celular << endl;
	cout << "Vehiculo del Propietario: " << endl;
	cout << "Marca: " << marca << "  Placa: " << placa << "  Color: " << color << endl;
	cout << "Nombres y Apellidos del Mecanico: " << nombresM << " " << apellidosM << endl;
	cout << "Detalles del servicio adquirido:" << endl;
	cout << "Cantidad-------Nombre----------Detalle" << endl;
	cout << cantidad << "---" << nombreS << "---" << detallesS << endl;
	//Nodo<Servicio>* aux = listaS.getPrimero();
	////Imprime la lista desde el ultimo valor hasta el primero
	//
	//if (listaS.getPrimero()->getSiguiente() != NULL) {
	//	do {
	//		Servicio s = aux->getDato();
	//		cout << s.getCantidad() << "---" << s.getNombre() << "---" << s.getDetalles() << endl;
	//		aux = aux->getSiguiente();
	//	} while (aux != listaS.getPrimero());
	//}
	//else {
	//	if (listaS.getPrimero() != NULL)
	//	{
	//		Servicio s = aux->getDato();
	//		cout << s.getCantidad() << "---" << s.getNombre() << "---" << s.getDetalles() << endl;
	//	}
	//	else {
	//		cout << "La lista esta vacia" << endl;
	//	}
	//}
}

string Factura::getNombresP() {
	return nombresP;
}

string Factura::getNombresM() {
	return nombresM;
}

string Factura::getApellidosP() {
	return apellidosP;
}

string Factura::getApellidosM() {
	return apellidosM;
}

string Factura::getCelular() {
	return celular;
}

string Factura::getPlaca() {
	return placa;
}

string Factura::getMarca() {
	return marca;
}

string Factura::getColor() {
	return color;
}

string Factura::getDetallesS() {
	return detallesS;
}

string Factura::getNombreS() {
	return nombreS;
}

int Factura::getCantidad() {
	return cantidad;
}

