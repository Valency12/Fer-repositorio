#include <iostream>
using namespace std; 

int main(){

    int n1, n2, res; 
    int seleccion = 0; 

    cout <<"ingrese el primer numero: \n";
    cin >> n1; 

    cout <<"ingrese el segundo numero: \n";
    cin >> n2;

    cout <<"ingrese el numero de la operacion que quiere realizar:\n 1.Summa\n 2.Multiplcar\n 3.Division\n\n Ingrese el numero\n";
    cin >> seleccion;

        
    switch (seleccion)
    {
    case 1:
        res = n1 + n2; 
        cout << "El resultado es:\n"<<res<<endl; 
        break;
    case 2:
        res = n1 * n2; 
        cout << "El resultado es:\n"<<res<<endl; 
        break;
    case 3:
        res = n1 / n2; 
        cout << "El resultado es:\n"<<res<<endl; 
        if (res < 0){
            cout << "No es division exacta\n";
        }
        break;
    
    default:
        cout << "Error al realizar los calculos\n";
        break;
    }

    system("pause");
    return 0;
}