#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <cstring>
#include "ordenacion.h"

using namespace std;

int main(){

    int n = 9, i = 0, op; 
    bool comp = 1;
    int v[n], w[n], x[n];

    cout << "1.Intercambio\n2.Seleccion\n3.Insercion" <<endl;
    cin >> op;

    //Generación del vector ordenado
    for(int i = 0; i < n; i++){
        v[i] = i;
    }

    memcpy(w, v, sizeof(v));    //Vector que permuta

    do{
        memcpy(x, w, sizeof(w));
        switch(op){
            case 1: ordenacion_intercambio(x, &n);
            case 2: ordenacion_seleccion(x, &n);
            case 3: ordenacion_insercion(x, &n);
        }
        if(memcmp(v, x, sizeof(v)) != 0){
            cout << "ERROR" << endl;
            comp = 0;
        }
    }while(next_permutation(w, w+n) && comp);

    if(comp){
        switch(op){
            case 1: cout << "El algoritmo de ordenacion por intercambio funciona correctamente" << endl;
            case 2: cout << "El algoritmo de ordenación por selección funciona correctamente" << endl;
            case 3: cout << "El algoritmo de ordenación por inserción funciona correctamente" << endl;
        }
    }


}