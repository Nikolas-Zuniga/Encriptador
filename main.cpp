#include <iostream>
#include "Encriptar.h"
using namespace std;


int main()
{
    int opt, n;
    modular calcula;
    encriptar encripta;
    cout << "ENCRIPTADORA MODULAR\n\n\n";
    cout << "Escoge una opcion:\n[1]Encripta.\n[2]Desencripta.\n[3]Salir\n>>>";
    cin >> opt;
    switch (opt - 1) {
    case 0:
        cout << "Ingrese su clave privada:\n>>>";
        cin >> n;
        cout << "Su clave publica es: " << calcula.inverso(n) << ". \nNo la olvide.\n";
        encripta.setClave(n);
        encripta.escribir(encripta.encriptadura("Plain.txt"), "Cifer.txt");
        break;
    case 1:
        cout << "Ingrese su clave publica:\n>>>";
        cin >> n;
        encripta.setClave(n);
        encripta.escribir(encripta.encriptadura("Cifer.txt"), "Plain2.txt");
        break;
    default:
        cout << "GOOD BYE!!!";
        break;

    }
}