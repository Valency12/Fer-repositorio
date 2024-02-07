#include <iostream>
using namespace std;

int main()
{
    // Definimos nuestras variables
    int n;
    string caracter;
    // Pedimos al usuario que ingrese un numero
    cout << "Ingrese un numero:\n";
    cin >> n;
    // Para que no haya conflicto con el string y el int
    cin.ignore();

    // Pedir los caracteres personalizados
    cout << "Ingrese caracteres personalizados:\n";
    // evitar error al espaciar
    getline(cin, caracter);

    // Medir la cantidad de caracteres
    int longitud = caracter.length();

    if (longitud == 0)
    {
        cout << "Error al ingresar los caracteres\n";
        return 1;
    }

    // El orden que se establecera
    for (int i = 1; i <= n; i++)
    {
        cout << caracter[i % longitud];
    }

    cout << endl;
    system("pause");

    return 0;
}