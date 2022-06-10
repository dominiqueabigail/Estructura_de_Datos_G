#pragma once

#define ENTER 13
#define ESC 27
#define UP 72
#define DOWN 80
#define ATRAS 8

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string>
#include <vector>
#include <sstream>
#include <thread>

#include "Usuarios.h"
#include "Utilidades.h"
#include "Colores.h"
#include "Imagenes.h"
#include "Facturas.h"

using namespace std;

class Menu {
public:
	Menu() {};
	void loginMenu();
	void menuPrincipal();
	//char retornarOpcion(string, Mesa);
private:
	Utilidades u;
	int x = 1;
	bool a = true;
	Usuarios users;
	Imagenes i;
	Facturas f;
};


void Menu::loginMenu() {
	bool repetir = true;
	int opcion = 0;
	int contador = 1;
	u.cursorHide();
	system("cls");
	do
	{
		system("cls");
		if (contador == 1)
		{
			u.gotoxy(10, 5);
			cout << YELLOW << BG_GREEN << "Iniciar Sesi�n   " << RESET << endl;
			u.gotoxy(10, 6);
			cout << "Crear Nuevo Usuario  " << endl;
			u.gotoxy(10, 7);
			cout << "Salir" << endl;
		}
		else if (contador == 2)
		{
			u.gotoxy(10, 5);
			cout << "Iniciar Sesi�n  " << endl;
			u.gotoxy(10, 6);
			cout << YELLOW << BG_GREEN << "Crear Nuevo Usuario   " << RESET << endl;
			u.gotoxy(10, 7);
			cout << "Salir   " << endl;
		}
		else if (contador == 3)
		{
			u.gotoxy(10, 5);
			cout << "Iniciar Sesi�n  " << endl;
			u.gotoxy(10, 6);
			cout << "Crear Nuevo Usuario   " << endl;
			u.gotoxy(10, 7);
			cout << YELLOW << BG_GREEN << "Salir   " << RESET << endl;
		}
		do
		{
			opcion = _getch();
		} while (opcion != UP && opcion != DOWN && opcion != ENTER);

		if (opcion == UP)
		{
			if (contador == 1) {
				contador = 3;
			}
			else {
				contador--;
			}
		}
		if (opcion == DOWN)
		{
			if (contador == 3) {
				contador = 1;
			}
			else {
				contador++;
			}
		}
		if (opcion == ENTER)
		{
			switch (contador)
			{
			case 1:
				if (users.validarUsuarioPassword() == true) {
					cout << "Ingreso correcto" << endl;
					system("pause");
					menuPrincipal();
				}
				else
				{
					cout << "Usuario o contrase�a incorrecto/s" << endl;
					system("pause");
				}
				break;
			case 2:
				users.nuevoUsuario();
				break;
			case 3:
				repetir = false;
				break;
			default:
				break;
			}
		}

	} while (repetir == true);
	return;
}

void Menu::menuPrincipal() {
	bool repetir = true;
	int opcion = 0;
	int contador = 1;
	system("cls");
	do
	{
		system("cls");
		if (contador == 1)
		{
			u.gotoxy(10, 5);
			cout << YELLOW << BG_GREEN << "Agregar Nueva Factura   " << RESET << endl;
			u.gotoxy(10, 6);
			cout << "Mostrar Facturas" << endl;
			u.gotoxy(10, 7);
			cout << "Guardar Registro de facturas en un documento" << endl;
			u.gotoxy(10, 8);
			cout << "(sin funcionar)" << endl;
			u.gotoxy(10, 9);
			cout << "Mostrar imagen   " << endl;
			u.gotoxy(10, 10);
			cout << "Salir" << endl;
		}
		else if (contador == 2)
		{
			u.gotoxy(10, 5);
			cout  << "Agregar Nueva Factura   "  << endl;
			u.gotoxy(10, 6);
			cout << YELLOW << BG_GREEN << "Mostrar Facturas" << RESET << endl;
			u.gotoxy(10, 7);
			cout << "Guardar Registro de facturas en un documento" << endl;
			u.gotoxy(10, 8);
			cout << "(sin funcionar)" << endl;
			u.gotoxy(10, 9);
			cout << "Mostrar imagen   " << endl;
			u.gotoxy(10, 10);
			cout << "Salir" << endl;
		}
		else if (contador == 3)
		{
			u.gotoxy(10, 5);
			cout  << "Agregar Nueva Factura   "  << endl;
			u.gotoxy(10, 6);
			cout << "Mostrar Facturas" << endl;
			u.gotoxy(10, 7);
			cout << YELLOW << BG_GREEN << "Guardar Registro de facturas en un documento" << RESET << endl;
			u.gotoxy(10, 8);
			cout << "(sin funcionar)" << endl;
			u.gotoxy(10, 9);
			cout << "Mostrar imagen   " << endl;
			u.gotoxy(10, 10);
			cout << "Salir" << endl;
		}
		else if (contador == 4)
		{
			u.gotoxy(10, 5);
			cout << "Agregar Nueva Factura   "  << endl;
			u.gotoxy(10, 6);
			cout  << "Mostrar Facturas"  << endl;
			u.gotoxy(10, 7);
			cout << "Guardar Registro de facturas en un documento" << endl;
			u.gotoxy(10, 8);
			cout << YELLOW << BG_GREEN << "(sin funcionar)" << RESET << endl;
			u.gotoxy(10, 9);
			cout << "Mostrar imagen   " << endl;
			u.gotoxy(10, 10);
			cout << "Salir" << endl;
		}
		else if (contador == 5)
		{
			u.gotoxy(10, 5);
			cout  << "Agregar Nueva Factura   "  << endl;
			u.gotoxy(10, 6);
			cout << "Mostrar Facturas" << endl;
			u.gotoxy(10, 7);
			cout << "Guardar Registro de facturas en un documento" << endl;
			u.gotoxy(10, 8);
			cout << "(sin funcionar)" << endl;
			u.gotoxy(10, 9);
			cout << YELLOW << BG_GREEN << "Mostrar imagen   " << RESET << endl;
			u.gotoxy(10, 10);
			cout << "Salir" << endl;
		}
		else if (contador == 6)
		{
			u.gotoxy(10, 5);
			cout  << "Agregar Nueva Factura   "  << endl;
			u.gotoxy(10, 6);
			cout << "Mostrar Facturas" << endl;
			u.gotoxy(10, 7);
			cout << "Guardar Registro de facturas en un documento" << endl;
			u.gotoxy(10, 8);
			cout << "(sin funcionar)" << endl;
			u.gotoxy(10, 9);
			cout << "Mostrar imagen   " << endl;
			u.gotoxy(10, 10);
			cout << YELLOW << BG_GREEN << "Salir" << RESET << endl;
		}
		do
		{
			opcion = _getch();
		} while (opcion != UP && opcion != DOWN && opcion != ENTER);

		if (opcion == UP)
		{
			if (contador == 1) {
				contador = 6;
			}
			else {
				contador--;
			}
		}
		if (opcion == DOWN)
		{
			if (contador == 6) {
				contador = 1;
			}
			else {
				contador++;
			}
		}
		if (opcion == ENTER)
		{
			switch (contador)
			{
			case 1:
				f.ingresarFactura();
				break;
			case 2:
				f.mostrarFacturas();
				break;
			case 3:
				f.guardarFacturasTxt();
				break;
			case 4:
				i.graficarPixelado(10,10);
				repetir = false;
				break;
			case 5:
				i.graficarHD();
				break;
			case 6:
				repetir = false;
				break;
			default:
				break;
			}
		}

	} while (repetir == true);

	a = false;
	//t1.~thread();
	return;
}

