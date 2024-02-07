#include <iostream>
using namespace std;

void CalculadoraReferencia(int, int, int &, int &); // REFERENCIA USANDO &
void CalculadoraValor(int, int, int, int);

int main()
{
    int suma = 0;
    int resta = 0;

    // PASO DE PARAMETROS POR VALOR
    cout << "Paso por valor: " << endl;
    CalculadoraValor(4, 7, suma, resta); // recibe dos enteros, y donde se guardara el total y la diferencia
    cout << suma << endl;
    cout << resta << endl;

    // PASO DE PARAMETROS POR REFERENCIA
    cout << "Paso por refencia: " << endl;
    CalculadoraReferencia(4, 7, suma, resta);
    cout << suma << endl;
    cout << resta << endl;

    return 0;
}

void CalculadoraReferencia(int v1, int v2, int &total, int &diferencia)
{
    total = v1 + v2;
    diferencia = v1 - v2;
}
void CalculadoraValor(int v1, int v2, int total, int diferencia)
{
    total = v1 + v2;
    diferencia = v1 - v2;
}

// En la parte de declaracion arriba solo se define el & y los otros tipo de parametro
// En la parte de definicion (abajo) se definie el tipo de parametro y el nombre de estos
// El paso de parametros por valor es el noromal de las funciones que suelo ocupar
//  El paso de parametros por referencia ocupa el &

// Para llamar ambas funciones, solo es por nombre, en el llamado de referencia no es necesario el &