#include <iostream> 
using namespace std; 

int main(){
    int n; 
    int tabla; 

    cout <<"Ingresa un numero entero:"<<endl; 
    cin >> n; 

    for(int i = 0; i <= 10; i++){
        tabla = n * i;
        cout <<n <<" x "<<i <<" = " << tabla<<endl; 
    }

    system("pause");

    return 0;
}