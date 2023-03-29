#include "Encriptar.h"


encriptar::encriptar() {
	nameArchivo = "Plain.txt";
	clave = 0;
}

void encriptar::setClave(int num) {
	clave = num;
}

string encriptar::lectura() {
	ifstream archivo(nameArchivo.c_str());
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
	int num{ obj };
	char objNew;
	objNew = calcular.multiplica(obj, clave);
	return objNew;
}

void encriptar::escribir(string entrada) {
	ofstream archivo("Cifer.txt");
	archivo << entrada;
	archivo.close();
}

void encriptar::reescribir(string entrada) {
	ofstream archivo("Plain2.txt");
	archivo << entrada;
	archivo.close();
}

string encriptar::desencriptar() {
	string name2{ "Cifer.txt" };
	ifstream archivo(name2.c_str());
	string linea;
	ostringstream salida;
	getline(archivo, linea);
	stringstream stream(linea);
	for (int i{ 0 }; i < linea.size(); i++) {
		salida << cambiar(linea[i]);
	}
	return salida.str();
}