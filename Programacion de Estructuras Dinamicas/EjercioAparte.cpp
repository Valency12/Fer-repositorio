#include <iostream>
using namespace std;

void cuenta(int x);

int main()
{
    cuenta(6);
    return 0;
}

void cuenta(int x)
{
    if (x == 0)
    {
        return; // si cumple esto termina
    }
    else
    {
        cout << x; // si no cumple le restaria 1 cada vez que no cumpla 654321
        cuenta(x - 1);
    }
}