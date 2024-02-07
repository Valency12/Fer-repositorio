#include <iostream> 
using namespace std;

int main(){
    int n; 
    int fact = 1; 
    cout <<"Ingrese un numero entero positivo: ";
    cin >> n; 

    if (n == 0 || n == 1){
        fact = 1; 
    }else if(n > 0){
        fact = 1; 
        for (int i = n; i > 1; i--){
            fact = fact * i; 
        }
    }else{
        cout <<"Error"<<endl;
    }
    if (n > 0){ 
    cout <<"El factorial es: \n"<<fact; 
    }

    system("pause");

    return 0; 
}