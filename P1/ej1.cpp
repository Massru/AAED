#include <iostream>
#include <cstdlib>

using namespace std;

int random_intervalo(int a, int b){

    int c = a + rand() % (b-a+1);
    return c;

}