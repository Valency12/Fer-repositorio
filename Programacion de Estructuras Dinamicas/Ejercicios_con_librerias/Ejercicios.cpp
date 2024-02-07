#include <iostream>
#include "Declaracione.cpp"
using namespace std;

struct Year_nacimiento
{
    int dia;
    string mes;
    int year;
};

struct Persona
{
    string nombre;
    int edad;
    float altura;
    float peso;
    struct Year_nacimiento fecha;
};

struct PersonaEmpleado
{
    float salario;
    int num_horas_trabajadas;
    struct Persona persona;
} empleado[3];

int main()
{
    struct PersonaEmpleado guardar1;
    struct Persona guardar2;
    struct Year_nacimiento guardar3;

    Escribir_Persona_Empleado();
    cout << "============REGISTRO DE EMPLEADOS===========" << endl;
    Leer_Persona_Empleado(guardar1, guardar2, guardar3);

    return 0;
}
