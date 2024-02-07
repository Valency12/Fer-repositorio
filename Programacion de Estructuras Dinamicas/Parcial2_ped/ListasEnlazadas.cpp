#include <iostream>
using namespace std;

struct Estudiante
{
    string nombre;
    string grado;
    int edad;
    float Notas[4];
    float promedio;
};

struct Nodo // siempre se crea el struct de nodo
{
    struct Estudiante elemento;
    struct Nodo *siguiente;
};

struct Nodo *lista = nullptr; // como pilas, se crea el de listas y se inicializa en null

void InsertarInicio(Estudiante);
void InsertarFinal(Estudiante);
// void InsertarIntermedio(Estudiante, int);
void Imprimir();
void EliminarInicio();
void EliminarIntermedio();
void EliminarFinal();

int main()
{
    int opc;
    Estudiante registro;
    // int pos = 3;
    do
    {
        cout << "--------------------" << endl;
        cout << "Ingrese una opcion: \n[1] Agregar inicio\n[2] Agregar Intermedio\n[3] Agregar Final\n[4] Imprimir \n[5] Eliminar Inicio\n[6] Eliminar Intermedio\n[7] Eliminar Final\n[0] Salir\n>";
        cin >> opc;
        cin.ignore();

        switch (opc)
        {
        case 1:
            cout << "--------------------" << endl;
            cout << "Ingrese el nombre: \n>";
            getline(cin, registro.nombre);
            cout << "Ingrese la edad: \n>";
            cin >> registro.edad;
            cin.ignore();
            cout << "Ingrese el grado: \n>";
            getline(cin, registro.grado);
            cout << "Ingrese las notas del estudiante: " << endl;
            for (int i = 1; i < 4; i++)
            {
                cout << "Nota " << i << ": " << endl;
                cin >> registro.Notas[i];
            }
            InsertarInicio(registro);

            break;
        case 2:
            cout << "--------------------" << endl;
            cout << "Ingrese el nombre: \n>";
            getline(cin, registro.nombre);
            cout << "Ingrese la edad: \n>";
            cin >> registro.edad;
            cin.ignore();
            cout << "Ingrese el grado: \n>";
            getline(cin, registro.grado);
            cout << "Ingrese las notas del estudiante: " << endl;
            for (int i = 1; i < 4; i++)
            {
                cout << "Nota " << i << ": " << endl;
                cin >> registro.Notas[i];
            }
            // InsertarIntermedio(registro, pos; es un comentario
            break;
        case 3:
            cout << "--------------------" << endl;
            cout << "Ingrese el nombre: \n>";
            getline(cin, registro.nombre);
            cout << "Ingrese la edad: \n>";
            cin >> registro.edad;
            cin.ignore();
            cout << "Ingrese el grado: \n>";
            getline(cin, registro.grado);
            cout << "Ingrese las notas del estudiante: " << endl;
            for (int i = 1; i < 4; i++)
            {
                cout << "Nota " << i << ": " << endl;
                cin >> registro.Notas[i];
            }
            InsertarFinal(registro);
            break;
        case 4:
            Imprimir();
            break;
        case 5:
            cout << "vuelva a imprimir" << endl;
            EliminarInicio();
            break;
        case 6:
            break;
        case 7:
            cout << "vuelva a imprimir" << endl;
            EliminarFinal();
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
void InsertarInicio(Estudiante registro)
{
    struct Nodo *nuevoNodo = new Nodo();
    nuevoNodo->elemento = registro;
    nuevoNodo->siguiente = nullptr;

    if (lista == nullptr)
    {
        lista = nuevoNodo;
    }
    else
    {
        nuevoNodo->siguiente = lista;
        lista = nuevoNodo;
    }
}
void InsertarFinal(Estudiante registro)
{
    struct Nodo *nuevoNodo = new Nodo();
    struct Nodo *temp = lista;

    nuevoNodo->elemento = registro;
    nuevoNodo->siguiente = nullptr;

    if (lista == nullptr)
    {
        lista = nuevoNodo;
    }
    else
    {
        while (temp->siguiente != nullptr)
        {
            temp = temp->siguiente;
        }
        temp->siguiente = nuevoNodo;
    }
}
// void InsertarIntermedio(Estudiante registro, int posicion)
// {
//     struct Nodo *nuevoNodo = new Nodo();
//     struct Nodo *temp = lista;
//     nuevoNodo->elemento = registro;
//     nuevoNodo->siguiente = nullptr;
//     posicion--;
//     while (posicion != 1)
//     {
//         temp = temp->siguiente;
//         posicion--;
//     }
//     nuevoNodo->siguiente = temp->siguiente;
//     temp->siguiente = nuevoNodo;
// }
void Imprimir()
{
    struct Nodo *temp = lista;
    if (lista != nullptr)
    {
        while (temp != nullptr)
        {
            cout << "Nombre: " << temp->elemento.nombre << endl;
            cout << "Edad: " << temp->elemento.edad << endl;
            cout << "Grado: " << temp->elemento.grado << endl;
            cout << "Promedio: " << temp->elemento.promedio << endl;
            cout << "----------------------------------" << endl;
            temp = temp->siguiente;
        }
    }
    else
    {
        cout << "La lista esta vacia!" << endl;
    }
}
void EliminarInicio()
{
    struct Nodo *temp = lista;
    if (lista != nullptr)
    {
        lista = temp->siguiente;
        delete temp;
    }
    else if (temp->siguiente == nullptr)
    {
        delete lista;
        lista = nullptr;
    }
    else
    {
        cout << "Lista Vacia!";
    }
}
void EliminarFinal()
{
    struct Nodo *temp = lista;
    struct Nodo *temp2;

    if (lista != nullptr)
    {
        if (temp->siguiente != nullptr)
        {
            while (temp->siguiente != nullptr)
            {
                temp2 = temp;
                temp = temp->siguiente;
            }
            temp2->siguiente = nullptr;
            delete temp;
            temp = nullptr;
        }
        else
        {
            delete lista;
            lista = nullptr;
        }
    }
    else
    {
        cout << "Lista vacia!" << endl;
    }
}
