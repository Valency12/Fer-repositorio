#include <iostream>
using namespace std;

struct Type
{
    string colores;
};

struct Nodo
{
    struct Type esteType;
    struct Nodo *siguiente = nullptr;
};

struct Nodo *pila = nullptr;

void Insertar(Type);
void Imprimir();
void Eliminar();
bool IsEmpty(); // si la pila esta vacia
bool IsFull();
// int Top(); // tope de la pila
// Nodo *TopeDireccion();

int main()
{
    Type nuevoColor;
    int opc;

    do
    {
        cout << "Ingrese una opcion: \n[1] Insertar color \n[2] Imprimir Color\n[3] Eliminar color\n[4] Salir\n>";
        cin >> opc;
        switch (opc)
        {
        case 1:
            cout << "-------------------" << endl;
            cout << "Ingrese un color: \n>";
            cin >> nuevoColor.colores;
            Insertar(nuevoColor);
            break;
        case 2:
            cout << "-------------------" << endl;
            Imprimir();
            break;
        case 3:
            cout << "-------------------" << endl;
            Eliminar();
            cout << "Seleccione de nuevo Imprimir" << endl;
            break;
        case 4:
            cout << "-------------------" << endl;
            cout << "Saliendo..." << endl;
            break;

        default:
            cout << "Error al elegir una opcion!" << endl;
            break;
        }

    } while (opc != 4);
    return 0;
}

void Insertar(Type nuevoColor)
{
    struct Nodo *nuevoNodo = new Nodo;
    nuevoNodo->esteType = nuevoColor; // nuevoType (variable declarada en la funcion, tiene que ser la ultima en quedar)
    nuevoNodo->siguiente = pila;      // se accede a siguiente despueeees

    pila = nuevoNodo; // porque ya no estara  vacia
}
void Imprimir()
{
    struct Nodo *temp = pila;
    if (pila != nullptr)
    {
        while (temp != nullptr)
        {
            cout << "color: " << temp->esteType.colores << endl;

            temp = temp->siguiente;
        }
    }
    else
    {
        cout << "La pila de colores esta vacia!" << endl;
    }
}
void Eliminar()
{
    if (pila != nullptr)
    {
        struct Nodo *temp = pila;
        pila = temp->siguiente;
        delete temp;
    }
    else
    {
        cout << "La pila de colores esta vacia!" << endl;
    }
}
bool IsEmpty()
{
    return pila == nullptr;
}
bool IsFull()
{
    return pila != nullptr;
}
// int Top()
// {
//     return (pila != nullptr ? pila->esteType : 0);
// }
// Nodo *TopeDireccion()
// {
//     return pila;
// }