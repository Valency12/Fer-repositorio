#include <iostream>
using namespace std;

struct Nodo
{
    int elemento;
    struct Nodo *siguiente;
};

struct Nodo *lista = nullptr;

// Declaración de funciones
void InsertarInicio(int);
void Imprimir();

int main()
{
    int n, cant;
    cout << "Ingrese la cant numeros: " << endl;
    cin >> cant;
    for (int i = 0; i < cant; i++)
    {
        cout << "Num " << i << ": ";
        cin >> n;
        InsertarInicio(n);
    }

    // InsertarInicio(n);
    Imprimir();

    return 0;
}
// Insertar nodo al inicio de la lista
void InsertarInicio(int n)
{
    // Reserva de memoria
    struct Nodo *nuevoNodo = new Nodo();
    // Variable auxiliar almacena el nodo actual
    nuevoNodo->elemento = n;
    nuevoNodo->siguiente = nullptr;
    // Si la lista esta vacia se agrega el primer nodo
    if (lista == nullptr)
    {
        lista = nuevoNodo;
    }
    else
    {
        // Agregar un nodo al inicio
        nuevoNodo->siguiente = lista;
        lista = nuevoNodo;
    }
}

void Imprimir()
{
    struct Nodo *temporal = lista;
    if (lista != nullptr)
    {
        while (temporal != nullptr)
        {
            cout << temporal->elemento << endl;
            temporal = temporal->siguiente;
        }
    }
    else
    {
        cout << "Lista vacia";
    }
}
