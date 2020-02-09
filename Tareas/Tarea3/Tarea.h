#pragma once
#ifndef TAREA3_H
#define TAREA3_H

#include<stdio.h>
#include<string.h>
#include<string>

//#define NULL 0

using namespace std;

typedef class Tarea* inicio;

class Tarea
{
private:
	int entero;
	string nombre;
	Tarea *Siguiente;
public:
	Tarea();
	Tarea(int, string);
	int hola;

	void setEntero(int _entero) {
		entero = _entero;
	}
	void setNombre(string _nombre) {
		nombre = _nombre;
	}
	void setSiguente(Tarea* tarea);

	int getEntero(void);
	string getNombre(void);
	Tarea* getSiguente(void);
protected:
};

Tarea *inicio;

Tarea::Tarea(void)
{
}

Tarea::Tarea(int _entero, string _nombre)
{
	Tarea::setEntero(_entero);
	nombre = _nombre;
}

int Tarea::getEntero(void) {
	return entero;
}

string Tarea::getNombre(void) {
	return nombre;
}



#endif