#include <iostream>
using namespace std;

int main()
{
    int lote;
    string bebida;
    cout << "Ingrese el lote: " << endl;
    cin >> lote;

    cout << "Ingrese la bebida: " << endl;
    cin >> bebida;

    cout << "\tBebida\t|  Lote\n"
         << endl;
    cout << "\t" << bebida << "\t|" << lote << endl;

    system("pause");
    return 0;
}