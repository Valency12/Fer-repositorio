// Funciones por referencia
// cambie el valor del cum
// solicitar al usuario;
// obtener el promedio el cual representa el cum

#include <iostream>
using namespace std;

struct DatosCum
{
    int cantidadMaterias[3];
    float notas[3];
    string nombre;
    int uvs;
    float cum;
} alumno1;

int calcularPromedioCum(int cum1, int cum2, int total);
int calcularPromedioNotas(int notas, int prom);

int main()
{

    struct DatosCum pedirNotas;
    cout << "ingrese su nombre: " << endl;
    cin >> alumno1.nombre;

    return 0;
}

int calcularPromedioCum(int cum1, int cum2, int total)
{
    for (int i = 0; i <= alumno1.cantidadMaterias[3]; i++)
    {
        cout << "Ingrese el cum: " << endl;
        cin >> alumno1.cantidadMaterias[i];
    }
}
int calcularPromedioNotas(int notas, int prom)
{
    for (int j = 0; j < alumno1.notas[3]; j++)
    {
        cout << "Ingrese sus notas: " << endl;
        // cin >> DatosCum.pedirNotas[j];
    }
}