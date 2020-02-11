// Tarea4.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <string>
#include <thread>
#include "Objeto.h"

using namespace std;

int  main()
{
	 bool sesion = true;
	 char letra = ' ';
	 int opcion = 0;
	 char palabra[] = "";
	 Objeto objeto;

	 do
	 {
		 cout << "1. AGREGR LETRA" << endl << "2. ELIMINAR ULTIMO" << endl << "3. BUSQUEDA" << endl << "4. MOSTRAR" << endl << "5. SALIR" << endl;
		 cin >> opcion;

		 switch (opcion)
		 {
		 case 1:

			 cout << "AGREGAR LETRA" << endl;
			 cin >> letra;
			 objeto.Agregar(letra);
			 break;

		 case 2:
			 cout << "NODO ELIMINADO" << endl;
			 objeto.EliminarUltimo();
			 break;

		 case 3:
			 cout << "ESCRIBA PALABRA A BUSCAR" << endl;
			 cin >> palabra;

			 objeto.Buscar(palabra);
			 break;

		 case 4:
			 objeto.Mostrar();
			 cout << endl;
			 system("pause");
			 break;

		 case 5:
			 sesion = false;
			 break;

		 default:
			 opcion = 0;
			 break;
		 }
		 system("cls");

	 } while (sesion);

	 return 0;
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
