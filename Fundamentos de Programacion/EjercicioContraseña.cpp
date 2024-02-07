#include <iostream>
using namespace std; 

int main(){

    int contra; 

    while(contra != 123){
        cout << "ingrese su clave:\n";
        cin >> contra; 
        if (contra != 123){
            cout << "su clave es incorrecta, vuelva a intentarlo\n"; 
        }else{
            cout << "su clave es correcta\n"; 
        }
    }

    system("pause");

    return 0; 
}