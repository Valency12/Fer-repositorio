#include <iostream>
using namespace std;

struct Datos
{
    string color;
    int numero;
};
struct Nodo
{
    struct Datos registro;
    struct Nodo *siguiente;
};

struct Nodo *frenteCola = nullptr;
struct Nodo *finalCola = nullptr;

void Insertar(Datos);
void Imprimir();
void ImprimirMayores();
void ImprimirLetra();

int main()
{
    Datos nuevoRegistro;
    int opc;
    do
    {
        cout << "Ingrese una opcion: \n[1] Insertar dato\n[2] Mostrar todos los datos\n[3] Mostrar los mayores a 15\n[4] Mostrar los que empeizan con la letra a\n[0] Salir\n>";
        cin >> opc;
        cin.ignore();
        switch (opc)
        {
        case 1:
            cout << "Ingrese el color: \n>";
            cin >> nuevoRegistro.color;
            cout << "Ingrese el numero: \n>";
            cin >> nuevoRegistro.numero;
            Insertar(nuevoRegistro);
            break;
        case 2:
            Imprimir();
            break;
        case 3:
            ImprimirMayores();
            break;
        case 4:
            /* code */
            break;
        case 0:
            cout << "Saliendo" << endl;
            break;
        default:
            cout << "Error al seleccionar una opcion!" << endl;
            break;
        }

    } while (opc != 0);
    return 0;
}
void Insertar(Datos nuevoRegistro)
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
        cout << "Color: " << temp->registro.color << endl;
        cout << "Numero: " << temp->registro.numero << endl;
        cout << "--------------------------" << endl;
        temp = temp->siguiente;
    }
}
void ImprimirMayores()
{
    struct Nodo *temp = frenteCola;
    if (temp != nullptr)
    {
        // como hacer que se me impriman todos? :(
        while (temp->registro.numero > 15)
        {
            cout << "Numeros mayores a 15: " << temp->registro.numero << endl;
            temp = temp->siguiente;
        }
    }
    else
    {
        cout << "No hay numeros mayores a 15" << endl;
    }
}
void ImprimirLetra()
{
}