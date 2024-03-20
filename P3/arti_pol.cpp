#include "polinom.h"
#include "arit_pol.h"
#include <iostream>

using namespace std;

polinomio suma_pol(polinomio n, polinomio m){

    int i = 0;

    polinomio aux = polinomio(max(n.grado(), m.grado()));
    
    while(i <= max(n.grado(), m.grado()))
    {
        aux.coeficiente(i, n.coeficiente(i) + m.coeficiente(i));
        i++;
    }

    return aux;

};

polinomio diferencia_pol(polinomio n, polinomio m){

    int i = 0;

    polinomio aux = polinomio(max(n.grado(), m.grado()));

    while(i <= max(n.grado(), m.grado()))
    {
        aux.coeficiente(i, n.coeficiente(i) - m.coeficiente(i));
        i++;
    }

    return aux;

};

polinomio producto_pol(polinomio n, polinomio m){



};

polinomio derivada_pol(polinomio n){

    int i = n.grado();

    polinomio aux = polinomio(n.grado() - 1);

    while(i > 0)
    {
        aux.coeficiente(i-1, (n.coeficiente(i) * i));
        i--;
    }

    return aux;
    
};

