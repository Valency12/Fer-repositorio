#include <iostream>
using namespace std;
// Datos de la flor
struct Floristeria
{
    string NombreFlor;
    string color;
    int cantidad;
    string tipo;
};

// Nodo
struct Nodo
{
    struct Floristeria inventario;
    struct Nodo *siguiente;
};

struct Nodo *lista = nullptr;

// Declaración de funciones
void InsertarInicio(Floristeria);
void Imprimir();
void ImprimirxColores(string);
void Eliminar(Floristeria, string);

int main()
{
    int opc;
    Floristeria nuevoInventario;
    string porColor;
    string florEliminar;
    do
    {
        // Menu principal
        cout << "--------------FLORISTERIA-----------" << endl;
        cout << "Ingrese una opcion: \n[1] Ingresar inventario\n[2] Mostrar todo inventario\n[3] Mostrar por color\n[4] Eliminar por posicion\n[0] Salir\n>";
        cin >> opc;
        cin.ignore();
        switch (opc)
        {
        case 1:
            cout << "------------Ingresar inventario" << endl;
            cout << "Nombre de flor: \n>";
            getline(cin, nuevoInventario.NombreFlor);
            cout << "Color de flor: \n>";
            getline(cin, nuevoInventario.color);
            cout << "Cantidad de flores: \n>";
            cin >> nuevoInventario.cantidad;
            cin.ignore();
            cout << "Tipo de flor: \n>";
            getline(cin, nuevoInventario.tipo);
            InsertarInicio(nuevoInventario);
            cout << "Flor agregada exitosamente!" << endl;

            break;
        case 2:
            cout << "------------Mostrar inventario" << endl;
            Imprimir();
            break;
        case 3:
            cout << "-------------Mostrar por colores" << endl;
            ImprimirxColores(porColor);
            break;
        case 4:
            cout << "---------------Eliminar por poscicion" << endl;
            Eliminar(nuevoInventario, florEliminar);

            break;
        case 0:
            cout << "Saliendo" << endl;
            break;

        default:
            cout << "Error al seleccionar!" << endl;
            break;
        }
    } while (opc != 0);

    return 0;
}
// Funcion insertar al inicio
void InsertarInicio(Floristeria nuevoInventario)
{
    // Reserva de memoria
    struct Nodo *nuevoNodo = new Nodo();
    nuevoNodo->inventario = nuevoInventario;
    nuevoNodo->siguiente = nullptr;

    if (lista == nullptr)
    {
        lista = nuevoNodo;
    }
    else
    {
        // Agregar nodo
        nuevoNodo->siguiente = lista;
        lista = nuevoNodo;
    }
}
// Funcion eliminar por posicion buscando
void Eliminar(Floristeria nuevoInventario, string florEliminar)
{
    struct Nodo *temporal = lista;
    // Si en la lista se encuentran inventarios
    if (lista != nullptr)
    {
        cout << "Ingrese el nombre de la flor a eliminar: \n>";
        getline(cin, florEliminar);
        if (florEliminar == nuevoInventario.NombreFlor)
        {
            // Borra el inventario
            lista = temporal->siguiente;
            // Libera la memoria
            delete temporal;
            cout << "Flor eliminada exitosamente! Vuelva a imprimir" << endl;
        }
        else
        {
            cout << "No se encontro la flor!" << endl;
        }
    }
    else if (temporal->siguiente != nullptr)
    {
        delete temporal;
        lista = nullptr;
    }
    else
    {
        cout << "No hay flores en inventario";
    }
}
// Funcion imprimir inventario
void Imprimir()
{
    struct Nodo *temporal = lista;
    if (lista != nullptr)
    {
        while (temporal != nullptr)
        {
            cout << "Nombre: " << temporal->inventario.NombreFlor << endl;
            cout << "Color: " << temporal->inventario.color << endl;
            cout << "Tipo: " << temporal->inventario.tipo << endl;
            cout << "Cantidad: " << temporal->inventario.cantidad << endl;
            cout << "----------------------------------" << endl;
            temporal = temporal->siguiente;
        }
    }
    else
    {
        cout << "No hay flores en inventario!" << endl;
    }
}
// Funcion imprimir por colores
void ImprimirxColores(string porColor)
{
    struct Nodo *temporal = lista;
    if (lista != nullptr)
    {
        cout << "Ingrese el color: \n>";
        getline(cin, porColor);
        cout << "---------------------------" << endl;
        while (temporal != nullptr)
        {
            if (porColor == temporal->inventario.color)
            {
                // Imprimir por color
                cout << "Nombre: " << temporal->inventario.NombreFlor << endl;
                cout << "Color: " << temporal->inventario.color << endl;
                cout << "Tipo: " << temporal->inventario.tipo << endl;
                cout << "Cantidad: " << temporal->inventario.cantidad << endl;
                cout << "----------------------------------" << endl;
            }
            temporal = temporal->siguiente;
        }
    }
    else
    {
        // Si no hay flores existentes
        cout << "No hay flores en inventario!" << endl;
    }
}