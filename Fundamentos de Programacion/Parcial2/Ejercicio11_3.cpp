#include <iostream>
using namespace std; 

int main(){
    int n = 0;
    int fact = 1;  
    cout <<"Ingrese un numero: "<<endl; 
    cin >>n; 

    if(n > 1){
        for(int i = n; i > 1; i--){
            fact = fact * i; 
        }
    }else if(n == 0){
        fact = 1; 
    }else{
        cout <<"Error"<<endl; 
    }
    cout <<"El factorial de "<<n<< " es: "<<fact<<endl; 
    system("pause");

    return 0; 
}