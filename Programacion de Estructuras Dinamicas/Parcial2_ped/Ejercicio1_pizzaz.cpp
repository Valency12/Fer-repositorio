#include <iostream>
using namespace std;

struct Pizza
{
    string nombre;
    float precio;
    int porciones;
};

struct Nodo
{
    struct Pizza registro;
    struct Nodo *siguiente = nullptr; // de una se inicializa
};

struct Nodo *pila = nullptr;

void Insertar(Pizza);
void Impimir();
void Eliminar();

int main()
{
    int opc;
    Pizza nuevoRegistro;

    do
    {
        cout << "--------------------------" << endl;
        cout << "Ingrese su opcion: \n[1] Mostrar inf de pizzas almacenadas\n [2] Agregar Pizza\n [3] Eliminar\n[0] Salir\n>";
        cin >> opc;

        switch (opc)
        {
        case 1:
            cout << "-------------------------------------" << endl;
            Impimir();
            break;
        case 2:
            cout << "-------------------------------------" << endl;
            cout << "Ingrese el nombre de la pizza: \n>";
            cin >> nuevoRegistro.nombre;
            cout << "Ingrese el precio de la pizza: \n>";
            cin >> nuevoRegistro.precio;
            cout << "Ingrese la cantidad de porciones: \n>";
            cin >> nuevoRegistro.porciones;
            Insertar(nuevoRegistro);
            break;
        case 3:
            Eliminar();
            break;
        case 4:
            cout << "Saliendo..." << endl;
            break;

        default:
            cout << "Error al seleccionar una opcion" << endl;
            break;
        }
    } while (opc != 0);

    return 0;
}
void Insertar(Pizza nuevoRegistro)
{
    struct Nodo *nuevoNodo = new Nodo;   // guarda un espacio de memoria
    nuevoNodo->registro = nuevoRegistro; // accede a la informacion

    nuevoNodo->siguiente = pila;

    pila = nuevoNodo;
}
void Impimir()
{
    struct Nodo *temp = pila;
    if (pila != nullptr)
    {
        while (temp != nullptr)
        {
            cout << "Nombre: " << temp->registro.nombre << endl;
            cout << "Precio: " << temp->registro.precio << endl;
            cout << "Porciones: " << temp->registro.porciones << endl;
            cout << "----------------------------" << endl;
            temp = temp->siguiente;
        }
    }
    else
    {
        cout << "Pila de pizzas vacias!" << endl;
    }
}
void Eliminar()
{
    if (pila != nullptr)
    {
        struct Nodo *temp = pila; // se empieza un temporal en el tope de la pila
        pila = temp->siguiente;   // el tope siempre es el siguiente o el ultimo que entra
        delete temp;              // eliminamos el temporal (el antiguo tope)
    }
    else
    {
        cout << "Pila vacia" << endl;
    }
}