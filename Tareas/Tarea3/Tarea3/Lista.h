#pragma once
#include<string>
#include<string.h>
#include<iostream>

using namespace std;

class Lista
{
	int entero;
	string nombre;
	Lista* siguiente;
public:
	Lista();
	Lista(int, string);
	Lista* inicio;

	int getEntero();
	string getNombre();
	//Lista* getLista();

	void setEntero(int _entero) {
		entero = _entero;
	}

	void setNombre(string _nombre) {
		nombre = _nombre;
	}


	void AgregarLista(int, string);
	void MostrarLista(void);
	void EliinarNodo(int);

};

