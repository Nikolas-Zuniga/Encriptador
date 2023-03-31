#include <iostream>
using namespace std;

class modular {
public:

	int mod;

	modular(int modul = 256);

	int suma(int, int);

	int resta(int, int);

	int multiplica(int, int);

	int inverso(int);

	~modular();
};