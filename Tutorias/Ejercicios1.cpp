#include <iostream>
using namespace std;

void mascotas(int edad);

int main()
{
    int edades;
    cout << "Ingrese la edad de su mascota:\n";
    cin >> edades;

    mascotas(edades);

    return 0;
}

void mascotas(int edad)
{
    if (edad < 1)
    {
        cout << "Es un largo camino con un gran amigo\n";
    }
    else if (edad >= 2)
    {
        cout << "Su mascota ya esta bebe\n ";
    }
    else if (edad = 6)
    {
        cout << "su mascota ya es un viejito amargado\n";
    }
    else
    {
        cout << "error al evaluar la edad";
    }

    system("pause");

    cout << mascotas << endl;
}
