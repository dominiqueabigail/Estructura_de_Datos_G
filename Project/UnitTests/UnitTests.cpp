#include "pch.h"
#include "CppUnitTest.h"
#include "../Project1/Lista.h"
#include "../Project1/Usuario.h"
#include "../Project1/Fichero.h"
#include "../Project1/Usuarios.h"
#include "../Project1/Carro.h"
#include "../Project1/Factura.h"
#include "../Project1/Facturas.h"
#include "../Project1/Imagenes.h"
#include "../Project1/Mecanico.h"
#include "../Project1/Propietario.h"
#include "../Project1/Utilidades.h"
#include "string"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTests
{
	TEST_CLASS(UnitTests)
	{
	public:
		
		TEST_METHOD(TestAgregar)
		{
			Lista<Usuario> listaPrueba;
			Usuario a, b;
			string n = "Carlos";
			a.setNombre("Carlos");
			a.setPassword("19652");
			listaPrueba.agregar(a);
			b = listaPrueba.getUltimo()->getDato();
			Assert::AreEqual(b.getNombre(), n);
		}

	};

	TEST_CLASS(UtilidadesTest)
	{
	public:

		TEST_METHOD(TestMayustMinus)
		{
			Utilidades u;
			string aux = "abc";
			string aux1 = "ABC";
			Assert::AreEqual(u.deMayusculaAMinuscula(aux), aux1);
		}

		TEST_METHOD(TestMintoMayus)
		{
			Utilidades u;
			string aux = "abc";
			string aux1 = "ABC";
			Assert::AreEqual(u.deMayusculaAMinuscula(aux1), aux);
		}

		TEST_METHOD(TestSoloInt)
		{
			Utilidades u;
			int res = u.ingreso("Hola \n");
			int aux = 10;
			Assert::AreEqual(aux, res);
		}

		TEST_METHOD(TestSoloLetras)
		{
			Utilidades u;
			int res = u.ingreso("Hola \n");
			int aux = 10;
			Assert::AreEqual(aux, res);
		}

		TEST_METHOD(TestOcultarLetras)
		{
			Utilidades u;
			string res = u.ocultarIngreso("Hola");
			string aux = "abc";
			Assert::AreEqual(aux, res);
		}

		TEST_METHOD(TestIngresarSoloLetras)
		{
			Utilidades u;
			string res = u.ingresarSoloLetras("Hola");
			string aux = "abc";
			Assert::AreEqual(aux, res);
		}

		TEST_METHOD(TestSoloInt9)
		{
			Utilidades u;
			string res = u.soloNumeros("Hola");
			string aux = "0123456789";
			Assert::AreEqual(aux, res);
		}
	};

	TEST_CLASS(UnitTests3)
	{
	public:
		//setters
		TEST_METHOD(Carro1)
		{
			Carro c;
			string a = "Hola";
			c.setColor("Hola");
			Assert::AreEqual(c.getColor(), a);
		}

		TEST_METHOD(Carro2)
		{
			Carro c;
			string a = "Hola";
			c.setPlaca("Hola");
			Assert::AreEqual(c.getPlaca(), a);
		}

		TEST_METHOD(Carro3)
		{
			Carro c;
			string a = "Hola";
			c.setMarca("Hola");
			Assert::AreEqual(c.getMarca(), a);
		}

	};

	TEST_CLASS(UnitTests4)
	{
	public:
		//setters
		TEST_METHOD(Propietario1)
		{
			Propietario c;
			string a = "Hola";
			c.setNombres("Hola");
			Assert::AreEqual(c.getNombres(), a);
		}

		TEST_METHOD(Propietario2)
		{
			Propietario c;
			string a = "Hola";
			c.setApellidos("Hola");
			Assert::AreEqual(c.getApellidos(), a);
		}

		TEST_METHOD(Propietario3)
		{
			Propietario c;
			string a = "Hola";
			c.setCelular("Hola");
			Assert::AreEqual(c.getCelular(), a);
		}
	};
}
