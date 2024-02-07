#include <iostream>
using namespace std; 

int main() {
    int n;
    int suma = 0;
    int numero = 2; // Comenzamos con el primer número par, que es 2

    cout << "Ingresa un número entero positivo: ";
    cin >> n;

    if (n <= 0) {
        cout << "Debes ingresar un número entero positivo." <<endl;
    } else {
        do {
            suma += numero;
            numero += 2; // Avanzamos al siguiente número par
            n--; // Decrementamos n en 1
        } while (n > 0);

        cout << "La suma de los primeros números pares es: " << suma <<endl;
    }
    system("pause"); 
    return 0;
}
