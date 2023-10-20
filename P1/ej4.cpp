#include <iostream>
#include <cstdlib>
#include <math.h>
#include "ej3.cpp"
#define N 1000

using namespace std;

int main(){

    int i = 0;
    double res = 0;

    while (i <=N){
        res = 4 * sqrt(1 - pow(random_intervalo(0,1), 2));
        i++;
    }

    cout << "La media de los resultados es: " << res/N <<endl;

}