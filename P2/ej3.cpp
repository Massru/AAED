#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <cstring>
#include "ordenacion.h"
#include "cronometro.h"
#define N 20000

using namespace std;

int main(){

    int n = 1000;
    cronometro c;

    for(n; n <= N; n += 1000){

        int v[n];
        int v_ord[n];

        for(int i = 0; i < n; i++){
            v[i] = i;
        }

        memcpy(v_ord, v, sizeof v);

        const size_t s = sizeof v / sizeof *v;

        random_shuffle(v, v + s);

        c.activar();
        ordenacion_insercion(&v[0], &v[n]);
        c.parar();

        double t = c.tiempo();

        cout << "Tiempo para vector de " << n << " enteros: "  << t << endl;

    }

}

