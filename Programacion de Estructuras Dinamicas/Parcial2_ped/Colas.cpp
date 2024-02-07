#include <iostream>
using namespace std;

struct Persona
{
    string Nombre;
    int yearNacimiento;
};

struct Nodo
{
    struct Persona inf;
    struct Nodo *siguiente;
};

struct Nodo *frenteCola = nullptr;
struct Nodo *finalCola = nullptr;

bool Vacia();
void Insertar(Persona);
void Imprimir();
void Eliminar();
void ImprimiFrente();
void ImprimirFinal();

// falta imprimir frente y final de cola (ejercicio de marlene) y ejercicio 3 de guia

int main()
{
    struct Persona p;
    int opc;

    do
    {
        cout << " --------------- " << endl;
        cout << "Ingrese una opcion: \n[1] Agregar elemento a cola\n[2] Imprimir elementos de cola\n[3] Eliminar elemento de cola\n[4] Impirmir frente de cola\n[5] Impimir final de cola\n[6] Salir\n>";
        cin >> opc;
        cin.ignore();

        switch (opc)
        {
        case 1:
            for (int i = 0; i < 2; i++)
            {
                cout << "Ingresa un nombre: ";
                cin >> p.Nombre;
                cout << "Ingresa la fecha de Nacimiento: ";
                cin >> p.yearNacimiento;
            }
            Insertar(p);
            break;
        case 2:
            Imprimir();
            break;
        case 3:
            cout << "Vuelva a imprimir" << endl;
            Eliminar();
            break;
        case 4:
            ImprimiFrente();
            break;
        case 5:
            ImprimirFinal();
            break;
        case 6:
            cout << "Saliendo" << endl;
            break;

        default:
            cout << "Error al ingresar una opcion!" << endl;
            break;
        }
    } while (opc != 6);
    return 0;
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
void Insertar(Persona p)
{
    struct Nodo *nuevoNodo = new Nodo(); // reserva de memoria

    nuevoNodo->inf = p;             // primero es igual a la variable del parametro
    nuevoNodo->siguiente = nullptr; // se accede al siguiente, que se incializa en null
    if (frenteCola == nullptr)
    {
        // porque solo entra un por el momento que es el Nuevo Nodo
        frenteCola = nuevoNodo;
    }
    else
    {
        // final del cola, accede al siguiente, que tambien es el nuevo nodo.
        finalCola->siguiente = nuevoNodo;
    }

    finalCola = nuevoNodo;
}
void Imprimir()
{
    struct Nodo *temp = frenteCola; // siempre se usa el temporal en impimir, inicializandolo en nullptr
    while (temp != nullptr)
    {
        // agregando direcciones propias y del nodo  siguiente
        cout << "Elementos de la cola: " << temp->inf.Nombre << " -- " << temp->inf.yearNacimiento << "  Direccion propia: " << temp << "  Direccion nodo siguiente: " << temp->siguiente << endl;
        temp = temp->siguiente; // para que el bucle no se repita
    }
}
void Eliminar()
{
    if (!Vacia())
    {
        struct Nodo *temp = frenteCola; // se usa el temp dentro del if
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
void ImprimiFrente()
{
    struct Nodo *temp = frenteCola;
    if (temp != nullptr)
    {
        cout << "Elemento frente de la cola: " << temp->inf.Nombre << endl;
    }
}
void ImprimirFinal()
{
    struct Nodo *temp = finalCola;
    if (temp != nullptr)
    {
        cout << "Elemento final de la cola: " << temp->inf.Nombre << endl;
    }
}