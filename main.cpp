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
        encripta.escribir(encripta.lectura());
        break;
    case 1:
        cout << "Ingrese su clave publica:\n>>>";
        cin >> n;
        encripta.setClave(n);
        encripta.reescribir(encripta.desencriptar());
        break;
    default:
        cout << "GOOD BYE!!!";
        break;

    }
}


// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
