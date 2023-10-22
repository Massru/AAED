#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <cstring>
#define N 10000000

using namespace std;

int main(){

    int v[] = {1, 2, 3, 4, 5, 6};
    int w[] = {1, 2, 3, 4, 5, 6};
    int i = 0;
    int ordenado = 0;

    const size_t n =  sizeof v / sizeof *v;

    while (i <= N){
        random_shuffle(v, v + n);
        if (memcmp(v, w, sizeof v) == 0){
        ordenado++;
        }
        i++;
    }

    cout << "Permutaciones ordenadas: " << ordenado << endl;

}