#pragma once
#include <iostream>
#include <string>

using namespace std;
class Objeto
{
	char letra;
 	Objeto* prev;
	Objeto* post;
public:
	Objeto();
	Objeto(char _letra);
	void Agregar(char _char);
	void EliminarUltimo();
	void Mostrar(void);
	void Buscar(char _palabra[]);
};

Objeto* first;
Objeto* last;

Objeto::Objeto(){
	letra = ' ';
	prev = NULL;
	post = NULL;

	first = NULL;
	post = NULL;
}

Objeto::Objeto(char _letra) {
	letra = _letra;
	prev = NULL;
	post = NULL;
}

void Objeto::Agregar(char _letra) {
	Objeto* aux = new Objeto(_letra);

	if (first == NULL)
	{
		first = aux;
		aux->post = last;
		last = aux;
	}
	else
	{
		last->post = aux;
		aux->prev = last;
		last = aux;
	}
}

void Objeto::EliminarUltimo() {
	last->prev->post = NULL;
	last = last->prev;
}

void Objeto::Buscar(char _palabra[]){
	Objeto* aux = first;
	bool _resultado = false;
	int nodo = 0;
	int _nodoBusqueda = 0;

	do
	{
		for (int i = 0; i < ((sizeof(_palabra))/2); i++)
		{
			//cout << "palabra escogida " << _palabra << endl;
			nodo++;

			if (aux->letra == _palabra[i])
			{
				//cout << aux->letra << " ";
				aux = aux->post;
				_nodoBusqueda++;


				cout << ((sizeof(_palabra))/2) <<  " " << _nodoBusqueda << endl;

				if (_nodoBusqueda == ((sizeof(_palabra)) /2))
				{
					cout << "RESULTADO ENCONTRADO EN NODO: " << (nodo - _nodoBusqueda) << endl;
					system("pause");
					return;
				}
			}
			else
			{
				aux = aux->post;
				_nodoBusqueda = 0;
				break;
			}
		}
	} while (aux != NULL);

}

void Objeto::Mostrar() {
	Objeto* aux = first;

	while (aux != NULL)
	{
		cout << aux->letra;
		aux = aux->post;
	}
}