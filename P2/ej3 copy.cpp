#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <cstring>
#include "ordenacion.h"
#include "cronometro.h"
#define N 20000

using namespace std;

int main(){

    int v[N];
    int v_ord[N];
    int n = 1000;
    cronometro c;

    for(int i = 0; i < N; i++){
        v[i] = i;
    }

    memcpy(v_ord, v, sizeof v);

    const size_t s = sizeof v / sizeof *v;

    for(n; n <= N; n += 1000){

        random_shuffle(v, v + s);

        c.activar();
        ordenacion_insercion(&v[0], &v[n]);
        c.parar();

        double t = c.tiempo();

        cout << "Tiempo para vector de " << n << " enteros: "  << t << endl;

    }

}

