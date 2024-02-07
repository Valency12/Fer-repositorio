#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// Función para intercambiar dos strings
void swap(string &a, string &b)
{
    string temp = a;
    a = b;
    b = temp;
}

// Algoritmo de ordenación de burbuja para strings
void bubbleSort(string arr[], int n)
{
    for (int i = 0; i < n - 1; ++i)
    {
        for (int j = 0; j < n - i - 1; ++j)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main()
{
    // Nombre del archivo
    string nombreArchivo = "alfabeto.txt";

    // Objeto ifstream para la lectura del archivo
    ifstream archivoEntrada(nombreArchivo);

    // Verificar si se pudo abrir el archivo
    if (!archivoEntrada.is_open())
    {
        cerr << "Error al abrir el archivo " << nombreArchivo << endl;
        return 1; // Salir con código de error
    }

    const int MAX_PALABRAS = 100;
    string palabras[MAX_PALABRAS];
    int numPalabras = 0;

    // Leer palabras del archivo
    while (archivoEntrada >> palabras[numPalabras] && numPalabras < MAX_PALABRAS)
    {
        ++numPalabras;
    }

    // Cerrar el archivo después de leer
    archivoEntrada.close();

    // Aplicar el algoritmo de ordenación (burbuja)
    bubbleSort(palabras, numPalabras);

    // Imprimir las palabras ordenadas
    for (int i = 0; i < numPalabras; ++i)
    {
        cout << palabras[i] << endl;
    }

    return 0; // Salir sin errores
}