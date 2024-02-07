#include <iostream>
#include <cmath> 

using namespace std; 

int main(){
    int num, raiz; 

    cout << "ingrese un numero: ";
    cin >> num; 

    if (num > 0){
        cout << "el numero es negativo";
        raiz = (sqrt(num));
        cout << "la raiz de su numero es: "<< raiz <<endl;
    }

    system("pause");
    return 0; 
}

