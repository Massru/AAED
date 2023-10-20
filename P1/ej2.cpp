#include <iostream>
#include <cstdlib>
#include "ej1.cpp"
#define N 10000000

using namespace std;

int main(){
    int i = 0;
    double cont_1 = 0;
    double cont_2 = 0;
    double cont_3 = 0;
    double cont_4 = 0;
    double cont_5 = 0;
    double cont_6 = 0;

    while(i<=N){
        switch (random_intervalo(1,6))
        {
        case 1:
            cont_1++;
            break;
        case 2:
            cont_2++;
            break;
        case 3:
            cont_3++;
            break;
        case 4:
            cont_4++;
            break;       
        case 5:
            cont_5++;
            break;
        case 6:
            cont_6++;
            break;
        }
    i++;
    }

    cout << "Frecuencia para el 1: " << cont_1/N << endl;
    cout << "Frecuencia para el 2: " << cont_2/N << endl;
    cout << "Frecuencia para el 3: " << cont_3/N << endl;
    cout << "Frecuencia para el 4: " << cont_4/N << endl;
    cout << "Frecuencia para el 5: " << cont_5/N << endl;
    cout << "Frecuencia para el 6: " << cont_6/N << endl;

}