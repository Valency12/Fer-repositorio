#include <iostream>
using namespace std;

// se declaran las funciones
int pasoParametrosValor(int);
int pasoParametrosReferencia(int &);
int pasoParametrosPuntero(int *);
int pasoParametroDireccion(int *);

int main()
{
    // declaracion de variables
    int a = 2;
    // declaracion e inicializacion de puntero
    // IMPRIMEN LA DIRECCION DE A
    int *ptr = &a;
    cout << &a << endl;
    cout << ptr;

    // Modificando el valor de una variable atraves de puntero
    *ptr = 20;
    // imprimiendo el nuevo valor (actualizado)
    cout << a << endl;
    cout << "por valor: " << endl;
    cout << pasoParametrosValor(a) << endl;
    cout << "por referencia: " << endl;
    cout << pasoParametrosReferencia(a) << endl;
    cout << "por direccion: " << endl;
    cout << pasoParametroDireccion(&a);

    return 0;
}

// DEFINICION
// paso de parametrso por valor
int pasoParametrosValor(int x)
{
    return x + 1;
}

// paso de parametrso por referencia
int pasoParametrosReferencia(int &x)
{
    x += 1;
    return x;
}

// paso de parametrso por punteros
int pasoParametrosPuntero(int *x)
{
    *x += 1;
    return *x;
}

// paso de parametros por direccion
// en el llamado de esta funcion se ocupa el &
int pasoParametroDireccion(int *x)
{
    *x += 1;
    return *x;
}
