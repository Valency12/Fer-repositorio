#include <iostream> 
using namespace std; 

int main(){
    int n, modulo;
    bool primo = true;  

    cout << "ingrese un numero entero:\n";
    cin >> n; 

    for(int i = n-1; i >= 2; i = i-1){
        cout <<"El numero es  "; 
        modulo = n % i; 

        if(modulo == 0){
            primo = false;     
            break;
        }
    }
    
    if(primo){
        cout <<"Es primo";
    }else{
        cout << "No es primo";
    }

    return 0;
}