#include <iostream>
using namespace std;

struct Carnet
{
    string Nombre;
    int edad;
    string sexo;
    string carrera;
};
struct Nodo
{
    struct Carnet registro;
    Nodo *siguiente = nullptr;
};

struct Nodo *pila = nullptr;

void Insertar(Carnet);
void Imprimir();
void Eliminar();

int main()
{
    Carnet nuevoRegistro;
    int opc;
    do
    {
        cout << "----------------------------" << endl;
        cout << "Ingrese una opcion: \n[1] Registrarse\n[2] Mostrar registros\n[3] Eliminar un registro\n[0] Salir\n>";
        cin >> opc;
        cin.ignore();
        switch (opc)
        {
        case 1:
            cout << "----------------------------" << endl;
            cout << "Ingrese su nombre: \n>";
            getline(cin, nuevoRegistro.Nombre);
            cout << "Ingrese su carrera: \n>";
            getline(cin, nuevoRegistro.carrera);
            cout << "Ingrese su sexo: \n>";
            getline(cin, nuevoRegistro.sexo);
            cout << "Ingrese su edad:\n>";
            cin.ignore();
            cin >> nuevoRegistro.edad;

            Insertar(nuevoRegistro);
            break;
        case 2:
            Imprimir();
            cout << "----------------------------" << endl;
            break;
        case 3:
            Eliminar();
            cout << "Registro eliminado exitosamente!" << endl;
            break;
        case 4:
            cout << "Saliendo...." << endl;
            break;
        default:
            cout << "Error al seleccionar una opcion" << endl;
            break;
        }

    } while (opc != 0);
    return 0;
}
void Insertar(Carnet nuevoRegistro)
{
    struct Nodo *nuevoNodo = new Nodo;   // reservamos el espacio de memoria
    nuevoNodo->registro = nuevoRegistro; // nuevo nodo es el que entra a la pila

    nuevoNodo->siguiente = pila;

    pila = nuevoNodo; // cuando la pila ya no esta vacia
}
void Imprimir()
{
    struct Nodo *temp = pila;
    if (pila != nullptr)
    {
        while (temp != nullptr)
        {
            cout << "Nombre: " << temp->registro.Nombre << endl;
            cout << "Edad: " << temp->registro.edad << endl;
            cout << "Sexo: " << temp->registro.sexo << endl;
            cout << "Carrera: " << temp->registro.carrera << endl;

            temp = temp->siguiente; // aqui es donde se le dice al bucle que pase al siguiente
        }
    }
    else
    {
        cout << "Pila de registros vacias!" << endl;
    }
}
void Eliminar()
{
    if (pila != nullptr)
    {
        struct Nodo *temp = pila; // se crea temp y se le dice que sera igual a la pila
        pila = temp->siguiente;   // pila sera igual a temporal que accede al siguiente, o sea el ultimo
        delete temp;              // se elimina el temporal, o sea el ultimo que entra
    }
    else
    {
        cout << "Sin registros en la pila!" << endl;
    }
}