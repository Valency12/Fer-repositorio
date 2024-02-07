#include <iostream>
using namespace std;

struct Nodo
{
    int elemento;
    struct Nodo *siguiente;
};

// variable global
struct Nodo *pila = nullptr;

void Insertar(int n);
void Imprimir();
void Eliminar();
bool Vacia();
void UltimoElemento();

int main()
{
    int valor;
    cout << "Ingrese un valor: " << endl;
    cin >> valor;
    Insertar(valor);
    Imprimir();
    Eliminar();
    cout << "-------------------------------" << endl;
    Eliminar();

    return 0;
}
void Insertar(int n)
{
    // reserva de memoria
    struct Nodo *nuevoNodo = new Nodo();
    // asignar el valor
    nuevoNodo->elemento = n;
    nuevoNodo->siguiente = pila;
    pila = nuevoNodo;
}
void Imprimir()
{
    struct Nodo *temporal = pila;
    while (temporal != nullptr)
    {
        // se puede accedar a traves del puntero oficial o del puntero externo
        cout << "Elementos de la pila " << temporal->elemento << "direccion de memoria del nodo " << temporal->siguiente << endl;
        temporal = temporal->siguiente;
    }
}
void Eliminar()
{
    if (pila != nullptr)
    {
        struct Nodo *temporal = pila;
        pila = temporal->siguiente;
        delete temporal;
    }
}
bool Vacia()
{
}
void UltimoElemento()
{
}