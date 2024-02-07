#include <iostream>
using namespace std;

int main()
{
    // Definimos variables
    int num;
    int suma = 0;
    int extraernum;

    // Pedimos datos al usuario
    cout << "Ingrese un numero:\n";
    cin >> num;

    // Proceso
    while (num != 0)
    {
        extraernum = num % 10;
        num /= 10;
        suma += extraernum;
    }

    // Salida de datos
    cout << "La suma de los digitos es:\n";
    cout << suma << endl;

    system("pause");

    return 0;
}