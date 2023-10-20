#include <iostream>
#include <cstdlib>

double random_intervalo(double a, double b){
    double c = a + ((rand() * (b-a)) / RAND_MAX);
    return c;
}