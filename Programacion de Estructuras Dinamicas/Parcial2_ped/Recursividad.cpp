#include <iostream>
using namespace std;

int factorial(int);
int factoraialRecursiva(int num);

int main()
{
    cout << "Sin funcion recursiva: " << endl;
    cout << factorial(5);
    cout << "Con funcion recursiva: " << endl;
    cout << factoraialRecursiva(5);

    return 0;
}
int factorial(int n)
{
    int total = 1;
    for (int i = 0; i <= 5; i++)
    {
        total *= i;
    }

    return total;
}
int factoraialRecursiva(int num)
{
    if (num <= 1)
    {
        return num;
    }
    return num * factoraialRecursiva(num - 1);
}