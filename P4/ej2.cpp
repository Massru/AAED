#include <iostream>
#include <string>
#include "ej1.cpp"

using namespace std;

bool formato(string& cadena){

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

    while (!PX.vacia())
    {
        while(!PX.vacia() && PX.tope() != '&')
        {
            PY.push(PX.tope());
            PX.pop();
        }

        if(PX.tope() == '&')
        {
            PX.pop();
        }

        while(!PY.vacia() && PX.tope() != '#')
        {
            if (PY.tope() == PX.tope())
            {
                PY.pop();
                PX.pop();
            }
            else
            {
                return false;
                break;
            } 
        }

        if(PX.tope() == '#')
        {
            PX.pop();
        }
    }
}

int main(){

    string cadena = "abcd&dcba#efgh&hgfe";

    bool work = formato(cadena);

    if (work)
    {
        cout << "Funciona" << endl;
    }
    else
    {
        cout << "No funciona" << endl;
    }
    
    return 0;
}