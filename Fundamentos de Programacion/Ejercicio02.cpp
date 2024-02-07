#include <iostream>
using namespace std;

int main()
{
    // Definir nuestras varaibles
    int num;
    int primorial = 1;
    int contador = 2;
    int cantidadPrimos = 0;

    // Ingresar datos
    cout << "ingrese un numero entero:\n";
    cin >> num;

    // Proceso para que evalue cada numero y ver si cumple
    while (cantidadPrimos < num)
    {
        bool esPrimo = true;
        for (int i = 2; i * i <= contador; i++)
        {
            if (contador % i == 0)
            {
                esPrimo = false;
                break;
            }
        }
        if (esPrimo)
        {
            primorial *= contador;
            cantidadPrimos++;
        }
        contador++;
    }
    // Salida de datos, si el proceso cumple

    if (primorial > 1)
    {
        cout << "El numero ingresado es un numero primorial.\n Su primorial es: " << primorial << endl;
    }
    else
    {
        cout << "El numero ingresado no es un numero primorial" << endl;
    }

    system("pause");
    return 0;
}