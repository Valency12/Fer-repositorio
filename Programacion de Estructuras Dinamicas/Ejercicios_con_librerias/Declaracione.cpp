#include "Declaracione.hpp"

void Leer_Persona_Empleado(struct PersonaEmpleado, struct Persona, struct Year_nacimiento)
{
    for (int i = 0; i < 2; i++)
    {
        cout << "Empleado #" << i + 1 << endl;
        cout << "Nombre: \n>";
        cout << empleado[i].persona.nombre << endl;
        cout << "Fecha de nacimiento: \n";
        cout << "Dia: ";
        cout << empleado[i].persona.fecha.dia;
        cout << " Mes: ";
        cout << empleado[i].persona.fecha.mes;
        cout << " Año: ";
        cout << empleado[i].persona.fecha.year;
        cout << endl;
        cout << " Edad: \n";
        cout << empleado[i].persona.edad << endl;
        cout << "Altura: \n";
        cout << empleado[i].persona.altura << endl;
        cout << "Peso: \n";
        cout << empleado[i].persona.peso << endl;
        cout << "Horas trabajadas: \n";
        cout << empleado[i].num_horas_trabajadas << endl;
        cout << "Salario: \n";
        cout << empleado[i].salario << endl;
    }
}
void Escribir_Persona_Empleado()
{
    for (int i = 0; i < 3; i++)
    {
        cout << "Empleado #" << i + 1 << endl;
        cout << "Ingrese su nombre: \n>";
        cin >> empleado[i].persona.nombre;
        cout << "Ingrese su fecha de nacimiento: \n";
        cout << "Dia: ";
        cin >> empleado[i].persona.fecha.dia;
        cout << "Mes: ";
        cin >> empleado[i].persona.fecha.mes;
        cout << "Año: ";
        cin >> empleado[i].persona.fecha.year;
        cout << endl;
        cout << "Ingrese su edad: \n";
        cin >> empleado[i].persona.edad;
        cout << "Ingrese su altura: \n";
        cin >> empleado[i].persona.altura;
        cout << "Ingrese su peso: \n";
        cin >> empleado[i].persona.peso;
        cout << "Ingrese el numero de horas trabajadas: \n";
        cin >> empleado[i].num_horas_trabajadas;
        cout << "Ingrese su salario: \n";
        cin >> empleado[i].salario;
    }
}
