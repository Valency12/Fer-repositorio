#include <iostream>
using namespace std; 

int main(){
    int n; 
    cout <<"Ingrese un numero negativo: "<<endl; 
    cin >> n; 

    for(int i = n; i <= 0; i++){
        cout <<i <<endl; 
    }
    system("pause");
    return 0; 
}