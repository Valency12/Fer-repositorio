#include <iostream>
using namespace std; 

int main(){
    int n; 
    cout <<"Ingrese un numero entero: "<<endl; 
    cin >> n; 

    for(int i = 2; i <= n; i += 2){
        cout<< i <<endl; 
    }

    system("pause"); 
    return 0;
}