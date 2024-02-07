#include <iostream>
using namespace std;

class Alumno
{
public:
    string nombre;
    int edad;
    int yearNac;
    float promedio;
    int notas[5];
};

int CalcularEdad(int);
float CalcularPromedio(float notas[5]);
// float Alumno::CalcularPromedio();

int main()
{
    Alumno alumnno1;
    int Edad;
    float *promedio;

    cout << "Ingrese su nombre: \n>";
    getline(cin, alumnno1.nombre);
    cout << "Ingrese el año de nacimiento: \n>";
    cin >> alumnno1.yearNac;
    cin.ignore();
    // cout << "Ingresa tu edad: \n>";
    // cin >> alumnno1.edad;
    // cin.ignore();
    CalcularEdad(Edad);
    cout << "Ingrese las notas: " << endl;
    for (int i = 1; i < 5; i++)
    {
        cout << "Nota " << i << ": ";
        cin >> alumnno1.notas[i];
    }
    cout << "El promedio de sus notas es: \n>";
    CalcularPromedio(promedio);

    return 0;
}

int CalcularEdad(int Edad)
{
    Alumno alumno1;
    Edad = 2024 - alumno1.yearNac;
    cout << "Su edad es: " << Edad << endl;
    return Edad;
}
float CalcularPromedio(float notas[5])
{
    float suma = 0;
    for (int i = 0; i < 5; i++)
    {
        suma += notas[i];
    }
    // cout << "Promedio: " << prom = suma / 5;
    return suma / 5;
}