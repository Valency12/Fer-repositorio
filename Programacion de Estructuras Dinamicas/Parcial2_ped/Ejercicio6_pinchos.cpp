#include <iostream>
using namespace std;

struct Pinchos
{
    string nombre;
    string fruta[5];
};

struct Nodo
{
    struct Pinchos registro;
    struct Nodo *siguiente;
};

struct Nodo *frenteCola = nullptr;
struct Nodo *finalCola = nullptr;

void Insertar(Pinchos);
void Imprimir();
void nuevaFruta(Nodo *);
bool vacia();

int main()
{
    int opc;
    Pinchos nuevoRegistro;

    do
    {
        cout << "Menu: \n[1] Agregar orden\n[2] Imprimir Ordenes\n[3] Estado de cola\n[0] Salir\n>";
        cin >> opc;
        cin.ignore();
        switch (opc)
        {
        case 1:
            cout << "----------------------------------" << endl;
            cout << "Ingrese su nombre: \n>";
            getline(cin, nuevoRegistro.nombre);
            cout << "Ingrese las frutas que quiere en su pincho: \n>";
            for (int i = 1; i < 5; i++)
            {
                cout << "Fruta " << i << ": " << endl;
                cin >> nuevoRegistro.fruta[i];
            }
            Insertar(nuevoRegistro);

            break;
        case 2:
            cout << "------------------------Ordenes: " << endl;
            Imprimir();
            break;
        case 3:
            vacia();
            break;
        case 0:
            cout << "Saliendo!" << endl;
            break;

        default:
            cout << "Error al elegir una opcion!" << endl;
            break;
        }

    } while (opc != 0);
    return 0;
}
void Insertar(Pinchos nuevoRegistro)
{
    struct Nodo *nuevoNodo = new Nodo();
    nuevoNodo->registro = nuevoRegistro;
    nuevoNodo->siguiente = nullptr;
    if (frenteCola == nullptr)
    {
        frenteCola = nuevoNodo; // los tres son igual a nuevo nodo
    }
    else
    {
        finalCola->siguiente = nuevoNodo; // igual a nuevo nodo
    }
    finalCola = nuevoNodo;
    nuevaFruta(nuevoNodo);
}
void Imprimir()
{
    struct Nodo *temp = frenteCola;
    while (temp != nullptr)
    {
        cout << "Nombre cliente: " << temp->registro.nombre << endl;
        cout << "Pincho: " << endl;
        cout << "  " << temp->registro.fruta[0] << endl;
        cout << "  " << temp->registro.fruta[1] << endl;
        cout << "  " << temp->registro.fruta[2] << endl;
        temp = temp->siguiente;
    }
}
void nuevaFruta(Nodo *temp)
{
    int opc;
    cout << "Desea cambiar su ultima fruta?\n [1] Si [2] No" << endl;
    cin >> opc;
    if (opc == 1)
    {
        cout << "Ingrese la nueva fruta que desea cambiar: \n>";
        cin >> temp->registro.fruta[2];
        // cout <<""
    }
    else
    {
        cout << "Pase a pagar" << endl;
    }
}
bool vacia()
{
    if (frenteCola == nullptr && finalCola == nullptr)
    {
        cout << "Cola vacia!" << endl;
        return true;
    }
    else
    {
        cout << "La cola esta llena" << endl;
        return false;
    }
}
