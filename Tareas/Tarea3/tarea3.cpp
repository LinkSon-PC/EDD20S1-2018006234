#include <iostream>
#include <string.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	string hola;
	cin >> hola;
	cout << "contenido " << hola << endl;
	
	int opcion=0;
	
	while(true){
		cout << "1. AGREGAR LISTA \n" << "2. ELIMINAR NODO \n" << "3.  BUSCAR NODO \n" << "4. SLAIR \n";
		cin >> opcion;
		switch(opcion){
			case 1:
				cout << "OPCION 1" << endl;
				break;
			case 2:
				cout << "OPCION 2" << endl;
				break;
			case 3:
				cout << "OPCION 3" << endl;
				break;
			case 4:
				cout << "OPCION 4" << endl;
				return 0;
				break;
			default: opcion =0;
				break;
		}
		}
	
	return 0;
	
}
