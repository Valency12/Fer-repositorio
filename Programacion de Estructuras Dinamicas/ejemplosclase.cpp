#include <iostream>
using namespace std;

struct Estudiante
{
    string nombre;
    string materias[3];
    char apellido[30];
} estudiante[3];

int main()
{
    Estudiante estudiante1;
    Estudiante estudiante2;
    // int a;
    //
    cout << "Ingrese su nombre: " << endl;

    for (int i = 0; i <= 3; i++)
    {
        cout << "Ingrese el nombre de la materia: " << endl;
        cin >> i;
    }
    return 0;
}