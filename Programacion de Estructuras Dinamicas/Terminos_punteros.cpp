#include <iostream>
#include <stdlib.h> //para malloc/calloc/free
using namespace std;

int main()
{
    // SIZEOF
    // Devuelve el tamaño en bytes
    int numero;
    sizeof(numero);
    sizeof(int);

    // malloc/free
    // reserva memora para 100 enteros
    int *ptr;
    ptr = (int *)malloc(100 * sizeof(int));
    // liberacion de memoria
    free(ptr);

    // reserva memoria
    // forma 1
    int *p;
    p = new int;
    // forma 2
    int *p = new int;
    // Liberar memoria
    delete p;

    // comprobar si la memoria es suficiente
    if (ptr == NULL)
    {
        cout << "error de asignacion de memoria";
        exit(1);
    }
    else
    {
        cout << "Direccion de memoria" << ptr;
    }

    // ARREGLOS DINAMICOS
    //  deckaracion de variables y puntero
    int numEdad, *edad;
    cout << "Ingrese el numero de edades: ";
    cin >> numEdad;
    // arreglo estatico en tiempo de compilacion
    int edad[numEdad];
    // arreglo dinamico en tiempo de ejecucion
    edad = new int[numEdad];

    // new: reserva la cantidad de memoria
    // delete: libera la memoria revervada

    // la otra parte
    int edad[numEdad];
    edad = new int[numEdad];
    delete[] edad;
    return 0;
}