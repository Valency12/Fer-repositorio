#include <iostream>
using namespace std; 

int main(){
    int n; 

    cout << "ingrese un numero entero:\n"; 
    cin >> n; 
    
    for(int i = 2; i < n ; i = i+2){
        cout <<"Estos son los pares:\n"<<i<<endl;
    }
    system("pause");

    return 0; 
}