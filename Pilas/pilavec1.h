#ifndef PILA_VEC1_H
#define PILA_VEC1_H
#include <cstddef>  //size_t

class Pila{
    public:
        typedef char T;  //Por ejemplo
        explicit Pila(size_t tamaMax);
        bool vacia() const;
        size_t tama() const;
        size_t tamaMax() const; //Requerida por la implementación
        const T& tope() const;
        void pop();
        void push(const T& x);
        Pila(const Pila& P);                //Ctor. de copia
        Pila& operator =(const Pila& P);    //Asignación entre pilas
        ~Pila();                            //Destructor
    private:
        T* elementos;   //Vector de elementos
        size_t  Lmax,    //Tamaño del vector
                n_eltos; //Tamaño de la pila
};
#endif //PILA_VEC1_H