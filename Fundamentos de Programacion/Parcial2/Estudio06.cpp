#include <iostream> 
using namespace std; 

int main(){
    int n; 
    cout << "Ingrese un numero del conjunto de los numeros reales: "; 
    cin >> n; 

    if(n < 0){
        cout <<"El numero es negativo"<<endl; 
    }else if(n > 0){
        cout <<"El numero es positivo"<<endl; 
    }else if(n == 0){
        cout <<"El numero es 0"<<endl; 
    }else{
        cout <<"Error, no es un numero"<<endl; 
    }

system("pause");

    return 0; 
}