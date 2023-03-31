#include <iostream>
#include "modular.h"
using namespace std;

//clase modular

modular::modular(int modul) {
    mod = modul;
}

int modular::suma(int a, int b) {
    return (a + b) % mod;
}

int modular::resta(int a, int b) {
    int help = a - b;
    for (; help < 0; help = help + mod) {}
    int resp = help % mod;
    return resp;
}

int modular::multiplica(int a, int b) {
    return (a * b) % mod;
}

int modular::inverso(int n) {

    int a{ 0 }, b{ 1 }, c, q, m2, r;
    m2 = mod;
    while (true) {
        q = m2 / n;
        r = m2 % n;
        c = resta(a, q * b);
        //cout << "a = " << a << " b = " << b << " q = " << q << " r = " << r << " c = " << c << "\n";
        if (r == 1) {
            return c;
        }
        else if (r == 0) {
            cout << "NO hay inverso\n";
            return 0;
        }
        else {
            m2 = n;
            n = r;
            a = b;
            b = c;
            continue;
        }
    }
}

modular::~modular() {}