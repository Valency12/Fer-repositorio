#include <iostream>
using namespace std;

struct Alumno
{
    int codigo;
    string nombre;
    int year;
    // declaracion de variables
} alumno1, alumno2;

int main()
{
    // declarar variable tipo struct
    struct Alumno alumno3;
    alumno3.codigo = 90123;
    // asignando valores a todos los
    // miembros del struct
    alumno1 = {
        12345,
        "Pedro",
        1987};
    cout << alumno1.codigo;
    // tamaño en bytes
    cout << sizeof(Alumno);

    return 0;
}