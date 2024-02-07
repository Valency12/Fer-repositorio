#include <iostream>
using namespace std;

struct Contacto
{
    string nombre;
    int edad;
    int numero_tel;
    string correo;
};

struct Nodo
{
    struct Contacto contacto;
    struct Nodo *siguiente;
};

struct Nodo *lista = nullptr;

// Declaración de funciones
void InsertarInicio(Contacto);
void Imprimir();
void ImprimirMayoresEdad(Contacto);
void ImprimirMenorEdad(Contacto);

int main()
{
    int opc;
    Contacto nuevoContacto;
    do
    {
        cout << "Ingrese una opcion: \n[1] Agregar contactos\n[2] Mostrar lista completa de contactos\n[3] Mostrar contactos de mayor edad\n[4] Mostrar contacto de menor edad\n[0] Salir\n>";
        cin >> opc;
        cin.ignore();
        switch (opc)
        {
        case 1:
            cout << "-----------------Agregar contacto" << endl;
            cout << "LISTA DE CONTACTOS-----------" << endl;
            cout << "Nombre: \n>";
            getline(cin, nuevoContacto.nombre);
            cout << "Numero telefonico: \n>";
            cin >> nuevoContacto.numero_tel;
            cin.ignore();
            cout << "Edad: \n>";
            cin >> nuevoContacto.edad;
            cin.ignore();
            cout << "Correo electronico: \n>";
            cin >> nuevoContacto.correo;
            InsertarInicio(nuevoContacto);

            break;
        case 2:
            cout << "-----------------Mostrar lista contactos" << endl;
            Imprimir();
            break;
        case 3:
            cout << "-----------------Contactos mayores de edad" << endl;
            ImprimirMayoresEdad(nuevoContacto);
            break;
        case 4:
            cout << "-----------------Contacto con menor edad" << endl;
            ImprimirMenorEdad(nuevoContacto);
            break;
        case 0:
            cout << "Saliendo" << endl;
            break;

        default:
            cout << "Error al seleccionarla opcion" << endl;
            break;
        }
    } while (opc != 0);
    return 0;
}
// Insertar nodo al inicio de la lista
void InsertarInicio(Contacto nuevoContacto)
{
    // Reserva de memoria
    struct Nodo *nuevoNodo = new Nodo();
    // Variable auxiliar almacena el nodo actual
    nuevoNodo->contacto = nuevoContacto;
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
            cout << "Nombre: " << temporal->contacto.nombre << endl;
            cout << "Numero: " << temporal->contacto.numero_tel << endl;
            cout << "Edad: " << temporal->contacto.edad << endl;
            cout << "Correo: " << temporal->contacto.correo << endl;
            cout << "-----------------------------" << endl;
            temporal = temporal->siguiente;
        }
    }
    else
    {
        cout << "Lista de contactos vacia!";
    }
}
void ImprimirMayoresEdad(Contacto)
{
    struct Nodo *temporal = lista;
    int mayores = 18;
    if (lista != nullptr)
    {
        if (temporal != nullptr)
        {
            while (temporal->contacto.edad >= mayores)
            {
                cout << "Nombre: " << temporal->contacto.nombre << endl;
                cout << "Telefono: " << temporal->contacto.numero_tel << endl;
                cout << "Edad: " << temporal->contacto.edad << endl;
                cout << "-----------------------------" << endl;
                temporal = temporal->siguiente;
            }
        }
        else
        {
            cout << "No hay contactos mayores de edad!" << endl;
        }
    }
    else
    {
        cout << "No hay contactos mayores de edad!" << endl;
    }
}
void ImprimirMenorEdad(Contacto)
{
    struct Nodo *temporal = lista;
    int menores = 18;
    if (lista != nullptr)
    {
        if (temporal != nullptr)
        {
            while (temporal->contacto.edad <= menores)
            {
                cout << "Nombre: " << temporal->contacto.nombre << endl;
                cout << "Telefono: " << temporal->contacto.numero_tel << endl;
                cout << "Edad: " << temporal->contacto.edad << endl;
                cout << "-----------------------------" << endl;
                temporal = temporal->siguiente;
            }
        }
        else
        {
            cout << "No hay contactos menores de edad!" << endl;
        }
    }
    else
    {
        cout << "No hay contactos menores de edad!" << endl;
    }
}