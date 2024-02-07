#include <iostream>
using namespace std;

struct Pokemon
{
    string Nombre;
    string NombrePokemon;
    string Movimientos;
};

struct Nodo
{
    struct Pokemon registro;
    struct Nodo *siguiente;
};

struct Nodo *lista = nullptr;

// Declaración de funciones
void InsertarInicio(Pokemon);
void Imprimir();
void MostrarPokemon();

int main()
{
    int opc;
    Pokemon nuevoRegistro;
    do
    {
        cout << "Opcion: \n[1] Agregar pokemon\n[2] Mostrar equipo\n[3] Mostrar pokemon\n[4] Buscar\n[0] Salir\n>";
        cin >> opc;
        cin.ignore();
        switch (opc)
        {
        case 1:
            cout << "----------------Agregar" << endl;
            cout << "Nombre entrenador: \n>";
            getline(cin, nuevoRegistro.Nombre);
            cout << "Nombre pokemon: \n>";
            getline(cin, nuevoRegistro.Nombre);
            cout << "Ingrese 2 movimientos: \n>" << endl;
            getline(cin, nuevoRegistro.Movimientos);
            InsertarInicio(nuevoRegistro);
            break;
        case 2:
            cout << "----------------Mostrar equipo" << endl;
            Imprimir();
            break;
        case 3:
            cout << "----------------Mostrar pokemon" << endl;
            MostrarPokemon();
            break;
        case 4:
            cout << "----------------Buscar" << endl;
            break;
        case 0:
            cout << "Saliendo" << endl;
            break;

        default:
            cout << "Ingrese una opcion valida!" << endl;
            break;
        }
    } while (opc != 0);
    return 0;
}
// Insertar nodo al inicio de la lista
void InsertarInicio(Pokemon nuevoRegistro)
{
    // Reserva de memoria
    struct Nodo *nuevoNodo = new Nodo();
    // Variable auxiliar almacena el nodo actual
    nuevoNodo->registro = nuevoRegistro;
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
            cout << "Entrenador: " << temporal->registro.Nombre << endl;
            cout << "Pokemon: " << temporal->registro.NombrePokemon << endl;
            cout << "Movimientos: " << temporal->registro.Movimientos << endl;
            cout << "-------------------------------" << endl;
            temporal = temporal->siguiente;
        }
    }
    else
    {
        cout << "No hay pokemons registrados" << endl;
    }
}
void MostrarPokemon()
{
    struct Nodo *temporal = lista;
    if (lista != nullptr)
    {
        while (temporal != nullptr)
        {
            cout << "Pokemon: " << temporal->registro.NombrePokemon << endl;
            cout << "Movimientos: " << temporal->registro.Movimientos << endl;
            cout << "-------------------------------" << endl;
            temporal = temporal->siguiente;
        }
    }
    else
    {
        cout << "No hay pokemons registrados" << endl;
    }
}
