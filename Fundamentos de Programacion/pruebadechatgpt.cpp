#include <iostream>
#include <fstream>
#include <string>

// Función para intercambiar dos strings
void swap(std::string &a, std::string &b)
{
    std::string temp = a;
    a = b;
    b = temp;
}

// Algoritmo de ordenación de burbuja para strings
void bubbleSort(std::string arr[], int n)
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
    std::string nombreArchivo = "alfabeto.txt";

    // Objeto ifstream para la lectura del archivo
    std::ifstream archivoEntrada(nombreArchivo);

    // Verificar si se pudo abrir el archivo
    if (!archivoEntrada.is_open())
    {
        //     std::cerr << "Error al abrir el archivo " << nombreArchivo << std::endl;
        return 1; // Salir con código de error
    }

    const int MAX_PALABRAS = 100;
    std::string palabras[MAX_PALABRAS];
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
        std::cout << palabras[i] << std::endl;
    }

    return 0; // Salir sin errores
}
