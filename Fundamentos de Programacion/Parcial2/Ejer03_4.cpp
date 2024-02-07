#include <iostream>
using namespace std; 

int main(){
    int n; 
    int n_oro = 8; 
    int intentos = 0; 
    int adivinado = false; 

    cout <<"Adivine el numero de oro"<<endl; 

    do
    {
    cout <<"Ingrese un numero: "<<endl; 
    cin >> n; 
    intentos++;
    if(n < n_oro){
        cout <<"El numero es mayor.Intente de neuvo"<<endl; 
    }else if(n > n_oro){
        cout <<"El numero es menor. Intente de nuevo"<<endl; 
    }else{
        adivinado = true; 
    }
        
    } while(!adivinado);

    cout <<"A adivinado el numero de oro"<<endl; 
    system("pause");
    return 0; 
}