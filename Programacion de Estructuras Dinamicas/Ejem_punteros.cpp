#include <iostream>
using namespace std;

int main()
{
    int prt[] = {1, 2};
    // ASIGNACION
    // declarar variable
    int a;
    // declarar variable con puntero
    int *p;

    // asignar valor al puntero
    p = &a;
    // imprimir direccion
    cout << p;
    // COMPARACION
    cout << "prt0 > prt2: " << (*(prt + 0) > *(prt + 1)) << endl;
    cout << "prt0 == prt2: ";
    cout << "prt0 < prt2: ";
    return 0;
}