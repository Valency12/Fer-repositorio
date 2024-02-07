#include <iostream>
using namespace std;

struct Taller
{
    string modelo;
    int placa;
    string color;
};

struct Nodo
{
    struct Taller registro;
    struct Nodo *siguiente;
};

// variables globales
struct Nodo *frenteCola = nullptr;
struct Nodo *finalCola = nullptr;

void Insertar(Taller);
void Imprimir();
void Eliminar();
bool Vacia();

int main()
{
    int opc;
    Taller nuevoRegistro;
    do
    {
        cout << "Ingrese una opcion: \n[1] Agregar nuevo automovil\n[2] Mostrar automoviles\n[3] Eliminar automovil\n[4] Salir\n>";
        cin >> opc;
        cin.ignore();
        switch (opc)
        {
        case 1:
            cout << "--------------------" << endl;
            cout << "Ingrese el modelo del carro: \n>";
            getline(cin, nuevoRegistro.modelo);
            cout << "Ingrese la placa del carro: \n>";
            cin >> nuevoRegistro.placa;
            cin.ignore();
            cout << "Ingrese el color del carro: \n>";
            getline(cin, nuevoRegistro.color);
            Insertar(nuevoRegistro);
            break;
        case 2:
            Imprimir();
            break;
        case 3:
            cout << "Elemento de cola eliminado exitosamente!" << endl;
            Eliminar();
            break;
        case 4:
            cout << "Saliendo" << endl;
            break;

        default:
            cout << "Error al ingresar una opcion!" << endl;
            break;
        }

    } while (opc != 4);
    return 0;
}
void Insertar(Taller nuevoRegistro)
{
    struct Nodo *nuevoNodo = new Nodo();
    nuevoNodo->registro = nuevoRegistro;
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
void Imprimir()
{
    struct Nodo *temp = frenteCola;
    while (temp != nullptr)
    {
        cout << "Modelo: " << temp->registro.modelo << endl;
        cout << "Placa: " << temp->registro.placa << endl;
        cout << "Color: " << temp->registro.color << endl;
        cout << "-----------------------" << endl;
        temp = temp->siguiente;
    }
}
void Eliminar()
{
    if (!Vacia())
    {
        struct Nodo *temp = frenteCola;
        if (frenteCola == finalCola)
        {
            frenteCola = nullptr;
            finalCola = nullptr;
        }
        else
        {
            frenteCola = temp->siguiente;
        }
        delete temp;
    }
}
bool Vacia()
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