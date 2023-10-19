#include <iostream>
#include <cstdlib>

using namespace std;

int random_intervalo(int a, int b){

    int c = a + rand() % (b-a);
    return c;

}

int main(){

    int a, b;
    cout << "Introduce un numero para el intervalo: " << endl;
    cin >> a;
    cout << "Introduzca otro numero: " <<endl;
    cin >> b;

    if(a>b){
        int aux = a;
        a = b;
        b= aux;
    }

    for(int i=0; i<5; i++){
        cout << "Numero aleatorio: " << random_intervalo(a, b) << endl;
    }
}