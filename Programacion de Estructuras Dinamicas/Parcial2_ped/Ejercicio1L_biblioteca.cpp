#include <iostream>
using namespace std;

struct Libro
{
    string titulo;
    int estante;
    int ISBN;
    string genero;
    string autor;
};

struct Nodo
{
    struct Nodo *siguiente;
    struct Libro registro;
};

struct Nodo *lista = nullptr;

void Insertar_inicio(Libro);
void Insertar_Intermedio(Libro, int);
void Insertar_Final(Libro);
void Imprimir();

int main()
{
    int opc;
    int n;
    Libro nuevoLibro;
    do
    {
        cout << "Ingrese una opcion: \n[1] Insertar libro inicio\n[2] Insertar libro Intermedio\n[3] Insertar libro Final\n[4] Imprimir\n[0] Salir\n>";
        cin >> opc;
        cin.ignore();
        switch (opc)
        {
        case 1:
            cout << "Inserar Inicio--------------" << endl;
            cout << "Ingrese el titulo: \n>";
            getline(cin, nuevoLibro.titulo);
            cout << "Ingrese el autor: \n>";
            getline(cin, nuevoLibro.autor);
            cout << "Ingrese el genero: \n>";
            getline(cin, nuevoLibro.genero);
            cout << "Ingrese el numero estante: \n>";
            cin >> nuevoLibro.estante;
            cin.ignore();
            cout << "Ingrese el codigo ISBN: \n>";
            cin >> nuevoLibro.ISBN;
            cin.ignore();

            Insertar_inicio(nuevoLibro);
            break;
        case 2:
            cout << "Inserar Intermedio--------------" << endl;
            cout << "Ingrese el titulo: \n>";
            getline(cin, nuevoLibro.titulo);
            cout << "Ingrese el autor: \n>";
            getline(cin, nuevoLibro.autor);
            cout << "Ingrese el genero: \n>";
            getline(cin, nuevoLibro.genero);
            cout << "Ingrese el numero estante: \n>";
            cin >> nuevoLibro.estante;
            cin.ignore();
            cout << "Ingrese el codigo ISBN: \n>";
            cin >> nuevoLibro.ISBN;
            cin.ignore();

            Insertar_Intermedio(nuevoLibro, 5);
            break;
        case 3:
            cout << "Insertar Final--------------" << endl;
            cout << "Ingrese el titulo: \n>";
            getline(cin, nuevoLibro.titulo);
            cout << "Ingrese el autor: \n>";
            getline(cin, nuevoLibro.autor);
            cout << "Ingrese el genero: \n>";
            getline(cin, nuevoLibro.genero);
            cout << "Ingrese el numero estante: \n>";
            cin >> nuevoLibro.estante;
            cin.ignore();
            cout << "Ingrese el codigo ISBN: \n>";
            cin >> nuevoLibro.ISBN;
            cin.ignore();

            Insertar_Final(nuevoLibro);
            break;
        case 4:
            cout << "Imprimir--------------" << endl;
            Imprimir();
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
void Insertar_inicio(Libro nuevoLibro)
{
    struct Nodo *nuevoNodo = new Nodo();
    nuevoNodo->registro = nuevoLibro;
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
void Insertar_Final(Libro nuevoLibro)
{
    struct Nodo *nuevoNodo = new Nodo();
    struct Nodo *temp = lista;
    nuevoNodo->registro = nuevoLibro;
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
void Insertar_Intermedio(Libro nuevoRegistro, int posicion)
{
    struct Nodo *nuevoNodo = new Nodo();
    struct Nodo *temp = lista;
    nuevoNodo->registro = nuevoRegistro;
    nuevoNodo->siguiente = nullptr;
    posicion--;
    while (posicion != 1)
    {
        temp = temp->siguiente;
        posicion--;
    }
    nuevoNodo->siguiente = temp->siguiente;
    temp->siguiente = nuevoNodo;
}
void Imprimir()
{
    struct Nodo *temp = lista;
    if (lista != nullptr)
    {
        while (temp != nullptr)
        {
            cout << "Libro: " << temp->registro.titulo << endl;
            cout << "Autor: " << temp->registro.autor << endl;
            cout << "Genero: " << temp->registro.genero << endl;
            cout << "Estante: " << temp->registro.estante << endl;
            cout << "Codigo ISBN: " << temp->registro.ISBN << endl;
            cout << "------------------------------------" << endl;
            temp = temp->siguiente;
        }
    }
    else
    {
        cout << "Lista de libros vacia!" << endl;
    }
}