#include <iostream>
using namespace std;

// structs de pizzas y pila
struct Pizza
{
    string nombre;
    int porciones;
    float precio;
};

struct Nodo
{
    struct Pizza elemento;
    struct Nodo *siguiente;
};

struct Nodo *pila = nullptr;

// Declarando funciones
void InsertarPizza(Pizza);
void ImprimirPizzas();
void ContarPizzas();

int main()
{
    int opcion;
    Pizza cajaPizza;

    // Valor de pizzas quemados
    InsertarPizza({"Papa Jhons", 12, 10.50});
    InsertarPizza({"Pizza Hut", 12, 12.25});
    InsertarPizza({"Pizza Italia", 12, 12.75});
    InsertarPizza({"Papa Nero", 8, 6.99});
    InsertarPizza({"Little Ceasar", 8, 5.65});

    do
    {
        // Menu principal que pide Insertar pizzas e Imprimir las existentes
        cout << "=====ADMINISTRADOR DE PIZZAS=====" << endl;
        cout << "Ingrese la opcion a realizar: \n[1] Agregar Pizza\n[2] Imprimir Pizzas existentes\n[3] Cantidad de pizzas \n[4] Salir\n";
        cin >> opcion;

        switch (opcion)
        {
        case 1:
            // Datos
            cout << "==========REGISTRO DE PIZZA============" << endl;
            cout << "=====================================" << endl;
            cout << "Nombre de la pizza: \n>";
            cin >> cajaPizza.nombre;
            cout << "Precio de la pízza: \n>";
            cin >> cajaPizza.precio;
            cout << "Cantidad de porciones: \n>";
            cin >> cajaPizza.porciones;
            cout << "=====================================" << endl;
            InsertarPizza(cajaPizza);
            break;
        case 2:
            ImprimirPizzas();
            break;
        case 3:
            ContarPizzas();
            break;
        case 4:
            cout << "saliendo del programa..." << endl;
            break;

        default:
            cout << "opcion no valida" << endl;
            break;
        }
    } while (opcion != 4);

    return 0;
}

// Definicion de funciones
void InsertarPizza(Pizza cajaPizza)
{
    Nodo *nuevonodo = new Nodo;
    nuevonodo->elemento = cajaPizza;
    nuevonodo->siguiente = pila;

    pila = nuevonodo;
}

void ImprimirPizzas()
{
    Nodo *temp = pila;

    if (temp != nullptr)
    {
        cout << "Pizzas registradas:" << endl;
        cout << "=====================================" << endl;

        while (temp != nullptr)
        {
            cout << "Nombre: " << temp->elemento.nombre << endl;
            cout << "Precio: " << temp->elemento.precio << endl;
            cout << "Porciones: " << temp->elemento.porciones << endl;
            cout << "=====================================" << endl;
            temp = temp->siguiente;
        }
    }
    else
    {
        cout << "No hay pizzas registradas" << endl;
    }
}

// Contar los elementos de la pila (pizzas)
void ContarPizzas()
{
    Nodo *temp = pila;
    int contador = 0;

    if (temp != nullptr)
    {
        cout << "Cantidad de pizzas existentes:" << endl;
        cout << "=====================================" << endl;

        while (temp != nullptr)
        {
            contador++;
            temp = temp->siguiente;
        }
        cout << "Numero de pizzas: " << contador << endl;
    }
    else
    {
        cout << "No hay pizzas registradas" << endl;
    }
}