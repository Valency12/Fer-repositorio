#include <iostream> 
using namespace std; 

int main(){
    char caracter; 
    int n; 

    cout <<"Ingrese un caracter: "<<endl; 
    cin >> caracter; 

    cout <<"Ingrese un numero: "; 
    cin >> n; 

    for(int i = 0; i < n; i++){
        cout << caracter <<endl; 
    }
    system("pause");

    return 0; 
}