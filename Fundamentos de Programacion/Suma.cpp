#include <iostream>
using namespace std; 

int factorial(int n);

int main(){
    int suma = 0; 
    float x; 
    int fact; 
    int  n; 

    for(int i = 0; i <= 5; i++){
        suma= suma + i; 
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
    }
    suma = suma + x * n/ fact; 

    cout <<suma<<endl; 
    system("pause");

    return 0; 
}
int factorial(int n){
    int fact = 1; 

    return ; 
}