#include <iostream> 
using namespace std; 


int factorial(int n){
    int fact = 1; 

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

    system ("pause");
    return fact; 
}

int main(){
    int n, sal; 
    cout <<"Ingrese un numero entero positivo: \n";
    cin >> n; 
    sal = factorial(n);

    if (sal != -1){
        cout <<"El factorial de: "<<n<<"es: "<<sal<<endl; 
    }
    return 0; 
}
