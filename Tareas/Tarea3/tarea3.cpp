// Tarea3.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
//#include "Tarea.h"
#include "Lista.h"
#include <stdio.h>
#include <string.h>
#include <string>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

typedef class Lista Tarea;

int main() {
	Tarea tarea;

	int opcion = 0;

	while (true) {
		cout << "1. AGREGAR LISTA \n" << "2. ELIMINAR NODO \n" << "3. MODIFICAR INT \n" << "4. MOSTRAR \n" << "5. SALIR " << endl;
		cin >> opcion;
		string nombre;
	
		switch (opcion) {
		case 1:
			int entero;
			

			cout << "ESCRIBA CODIGO" << endl;
			cin >> entero;

			cout << "ESCRIBA NOMBRE" << endl;
			cin >> nombre;

			tarea.AgregarLista(entero, nombre);

			//cout << "CODIGO: " << tarea.getEntero() << " NOMBRE: " << tarea.getNombre() << endl;
			//tarea.setEntero(entero);
			//cout << tarea.getEntero() << " " << hola << endl;

			break;
		case 2:
			cout << "OPCION 2" << endl;
			int nodo;
			cin >> nodo;
			tarea.EliinarNodo(nodo);
			break;
		case 3:
			cout << "OPCION 3" << endl << "MODIFICAR CARNE: " << endl;
			int carne;
			cin >> carne;
			tarea.Modificar(carne);
			break;
		case 4:
			cout << "OPCION 4" << endl;
			tarea.MostrarLista();
			break;
		case 5:
			cout << "SLIR" << endl;
			return 0;
			break;
		default: opcion = 0;
			break;
		}
	}

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
