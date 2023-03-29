#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include "modular.h"
using namespace std;

class encriptar {
public:
	int clave;
	modular calcular;
	string nameArchivo;

	encriptar();

	void setClave(int);

	string lectura();

	char cambiar(char);

	void escribir(string);

	void reescribir(string);

	string desencriptar();

};