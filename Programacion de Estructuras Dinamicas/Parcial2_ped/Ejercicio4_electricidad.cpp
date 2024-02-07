#include <iostream>
using namespace std;

struct Electricidad
{
    string nombre;
    float total;
};

struct Nodo
{
    struct Electricidad pago;
    struct Nodo *siguiente;
};

struct Nodo *frenteCola = nullptr;
struct Nodo *finalCola = nullptr;

void Insertar(Electricidad);
bool Vacia();
void Imprimir();
float Suma(Electricidad);

int main()
{
    Electricidad Persona, totalPago;
    int opc;
    do
    {
        cout << "-----------------" << endl;
        cout << "Ingrese su opcion: \n[1] Pagar\n[2] Mostrar total\n[3] Salir\n>";
        cin >> opc;
        cin.ignore();

        switch (opc)
        {
        case 1:
            cout << "-----------------" << endl;
            cout << "Ingrese su nombre: \n>";
            getline(cin, Persona.nombre);
            cout << "Ingrese el total a pagar: \n>";
            cin >> Persona.total;
            cin.ignore();
            Insertar(Persona);
            break;
        case 2:
            cout << "----------------------" << endl;
            Imprimir();
            Suma(totalPago);
            break;
        case 3:
            cout << "saliendo..." << endl;
            break;

        default:
            cout << "Error al ingresar la opcion" << endl;
            break;
        }
    } while (opc != 3);
    return 0;
}

void Insertar(Electricidad nuevaPersona)
{
    struct Nodo *nuevoNodo = new Nodo();
    nuevoNodo->pago = nuevaPersona;
    nuevoNodo->siguiente = nullptr;
    if (frenteCola == nullptr)
    {
        frenteCola = nuevoNodo;
    }
    else
    {
        finalCola->siguiente = nuevoNodo;
    }
    finalCola = nuevoNodo;
}
bool Vacia() // esta funcion se usa cuando me piden la de eliminar
{
    if (frenteCola == nullptr)
    {
        return true;
    }
    else
    {
        return false;
    }
}
void Imprimir()
{
    // float total_pagos;
    struct Nodo *temp = frenteCola;
    while (temp != nullptr)
    {
        cout << "Nombre: " << temp->pago.nombre << endl;
        cout << "Pago: " << temp->pago.total << endl;
        cout << "------------------------" << endl;
        temp = temp->siguiente;
    }

    // total_pagos = temp->pago.total + temp->siguiente->pago.total;
    // cout << "El total por todos los pagos es de: " << total_pagos << endl;
}
float Suma(Electricidad totalPago)
{
    struct Nodo *temp = frenteCola;
    float suma;

    while (temp != nullptr)
    {
        // como hacer que se sumen los 3 o mas al mismo tiempo?
        suma = temp->pago.total + temp->siguiente->pago.total;
        cout << "El total a pagar es de: " << suma << endl;
        temp = temp->siguiente;
    }
    return suma;
}
