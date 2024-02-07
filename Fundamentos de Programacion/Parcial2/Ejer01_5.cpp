#include <iostream>
using namespace std; 

int PRIMO(int n);

int main(){
    int n; 
    cout <<"Ingrese un numero: "<<endl; 
    cin >> n; 
    if(PRIMO(n)){
        cout <<"El numero es primo"<<endl; 
    }else{
        cout <<"El numero no es primo"<<endl; 
    }
    
    system("pause"); 
    return 0; 
}
int PRIMO(int n){
    bool esPrimo = true; 
    if(n < 2){
        esPrimo = false; 
    }else{

        for(int i = 2; i <= n / 2; i++){
            if(n % i == 0){
                esPrimo = false; 
            }
        }
    }
    
    return esPrimo; 
}