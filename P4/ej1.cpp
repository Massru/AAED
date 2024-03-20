#include <iostream>
#include <string>
#include "../Pilas/pilavec1.h"

using namespace std;

bool simetrica(string& cadena){
    
    size_t longitud = cadena.length();
    Pila PX = Pila(longitud);
    Pila PY = Pila(longitud);
    bool res = true;
    int i = 0;

    while(i < PX.tamaMax())
    {
        PX.push(cadena[i]);
        i++;
    }

    while(!PX.vacia() && PX.tope() != '&')
    {
        PY.push(PX.tope());
        PX.pop();
    }

    if(PX.tope() == '&')
    {
        PX.pop();
    }

    while(res == true && (!PX.vacia() || !PY.vacia()))
    {
        if (PX.tope() == PY.tope())
        {
            PX.pop();
            PY.pop();
        }
        else
        {
            res = false;
        }
    }

    return res;

}

// int main(){

//     string cadena = "abcd&dcba";

//     bool work = simetrica(cadena);

//     if (work)
//     {
//         cout << "Funciona" << endl;
//     }
//     else
//     {
//         cout << "No funciona" << endl;
//     }

// }