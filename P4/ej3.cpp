#include <iostream>
#include <string>
#include "../Pilas/pilaenla.h"

using namespace std;

//Precondición: Pila no vacía que tenga el elemento a y el elemento b más adelante
//Postcondición: Devuelve una pila con la secuencia entre a y b invertida
Pila<int> invertir(int a, int b, Pila<int>& P){
    int i = 0;
    Pila<int> aux;
    Pila<int> secuencia;

    while(P.tope() != a)
    {
        aux.push(P.tope());
        P.pop();
    }

    while(P.tope() != b)
    {
        secuencia.push(P.tope());
        P.pop();
    }

    //Pasar b a la otra pila
    secuencia.push(P.tope());
    P.pop();

    while(!secuencia.vacia())
    {
        aux.push(secuencia.tope());
        secuencia.pop();
    }

    while(!P.vacia())
    {
        aux.push(P.tope());
        P.pop();
    }

    while(!aux.vacia())
    {
        P.push(aux.tope());
        aux.pop();
    }

    return P;
}
