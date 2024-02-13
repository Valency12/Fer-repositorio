#include <iostream>

using namespace std;

class Alumno
{

public:
    string nombre;
    int edad;
    int fNac;
    float notas[5];
    float promedio;
    int CalcularEdad(int);
    float CalcularPromedio(float[]);
};

int Alumno::CalcularEdad(int anioNac)
{
    return 2024 - anioNac;
}

float Alumno::CalcularPromedio(float notas[])
{
    float suma = 0;
    for (int i = 0; i < 5; i++)
    {
        suma += notas[i];
    }
    return suma / 5;
}

int main()
{
    // Creación del objeto
    Alumno alumno1;
    // Inicializando las propiedades o atributos del objeto
    alumno1.nombre = "Maria";
    alumno1.fNac = 2005;
    alumno1.notas[0] = 5;
    alumno1.notas[1] = 10;
    alumno1.notas[2] = 9;
    alumno1.notas[3] = 8;
    alumno1.notas[4] = 9;
    // Accediendo a un método
    alumno1.edad = alumno1.CalcularEdad(alumno1.fNac);
    alumno1.promedio = alumno1.CalcularPromedio(alumno1.notas);
    // Accediendo a las propiedad del objeto
    cout << "Nombre: " << alumno1.nombre << " año de nacimiento: " << alumno1.fNac << " edad: " << alumno1.edad << "\n";
    for (int i = 0; i < 5; i++)
    {
        cout << " Notas " << alumno1.notas[i] << "\n";
    }
    cout << " Promedio " << alumno1.promedio;

    return 0;
}