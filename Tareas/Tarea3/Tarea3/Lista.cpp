#include "Lista.h"



int Lista::getEntero()
{
	// TODO: Agregar aquí el código de implementación.
	return entero;
}

string Lista::getNombre()
{
	// TODO: Agregar aquí el código de implementación.
	return nombre;
}

Lista::Lista() {
	entero = 0;
	nombre = "";
	siguiente = NULL;
}

Lista::Lista(int _entero,string _nombre){
	setEntero(_entero);
	setNombre(_nombre);
}

void Lista::AgregarLista(int _entero, string _nombre) {
	Lista* nuevo = new Lista(_entero, _nombre);

	if (inicio==NULL)
	{
		inicio = nuevo;
		cout << "AGREGAR NODO INICIO" << endl;
	}
	else
	{
		nuevo->siguiente = inicio;
		inicio = nuevo;
		cout << "AGREGAR AL INICIO" << endl;
	}
}

void Lista::MostrarLista() {
	Lista* aux = inicio;
	while (aux!=NULL)
	{
		cout << aux->getEntero() << endl;
		cout << aux->getNombre() << endl;
		aux = aux->siguiente;
	}
}

void Lista::EliinarNodo(int nodo) {
	Lista* aux = inicio;
	int cont = 0;

	while (aux != NULL)
	{
		if (nodo == 0)
		{
			inicio = NULL;
		}else if (cont == nodo)
		{
			aux->siguiente = NULL;
		}
		aux = aux->siguiente;
		cont++;
	}
}