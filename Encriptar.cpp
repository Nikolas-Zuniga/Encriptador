#include "Encriptar.h"


encriptar::encriptar() {
	clave = 0;
}

void encriptar::setClave(int num) {
	clave = num;
}

string encriptar::encriptadura(string direccion) {
	ifstream archivo(direccion.c_str());
	string linea;
	bool ultima{ false };
	ostringstream salida;
	while (getline(archivo, linea)) {
		stringstream stream(linea);
		for (int i{ 0 }; i < linea.size(); i++) {

			salida << cambiar(linea[i]);
		}
		if (archivo.eof()) {
			ultima = true;
		}
		if (!ultima) {

			salida << cambiar(char(13));
		}
		else {
			continue;
		}
	}
	return salida.str();
}

char encriptar::cambiar(char obj) {
	obj = calcular.multiplica(obj, clave);
	return obj;
}

void encriptar::escribir(string entrada, string direccion) {
	ofstream archivo(direccion);
	archivo << entrada;
	archivo.close();
}