#include <iostream>
using namespace std;

int main()
{
    int arreglo[] = {1, 2, 4};
    int *ptr = arreglo;

    cout << *(ptr + 0) << endl;
    cout << *(ptr + 1) << endl;
    cout << *(ptr + 2) << endl;

    // Suma para navegar entre los elementos
    for (int i = 0; i < 3; i++)
    {
        cout << "Elemento de arreglo " << *(arreglo + i) << " dir memoria " << ptr++ << endl;
    }
    // Resta, distancia entre puntos
    cout << "Distancia entre punteros ptr2 - ptr0" << *(ptr + 2) - *(ptr + 0) << endl;
    return 0;
}