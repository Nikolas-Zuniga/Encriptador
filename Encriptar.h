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

	encriptar();

	void setClave(int);

	char cambiar(char);

	void escribir(string,string);

	string encriptadura(string);

};