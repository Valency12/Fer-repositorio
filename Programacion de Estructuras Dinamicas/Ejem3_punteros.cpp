#include <iostream>
using namespace std;

struct Persona
{
    char nombre[30];
    int edad;
    float altura;
    float peso;
    // declaracion de varible y puntero
} personal, *ptr_personal;

void Funcion1(int &b);
void Funcion2(int *a);

int main()
{
    int n = 50;
    cout << n;
    Funcion1(n);
    Funcion2(&n);
    cout << n;
    cout << "------------------------------" << endl;
    // asignando valores a los miembros de la estructura
    personal = {"roberto nolasco", 36, 1.82, 85};
    // declaracion de puntero de estructura
    Persona *ptr_personal;
    // declaracion de memoria de la estructura
    ptr_personal = &personal;
    // acceder a un campo de la estructura ustilizando punteros ->
    ptr_personal->nombre;
    ptr_personal->edad;
    ptr_personal->altura;
    ptr_personal->peso;

    return 0;
}

// paso de parametros por referencia (c++)
void Funcion1(int &b)
{
    cout << (++b) << endl;
}
// paso de paramotros por direccion(c)
void Funcion2(int *b)
{
    cout << (*b += 10) << endl;
}