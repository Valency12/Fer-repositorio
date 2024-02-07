#include <iostream>
using namespace std; 

int main(){
    int a; 
    int b; 
    int suma; 
    cout <<"Ingrese el numero donde iniciara: "<<endl;
    cin >> a; 
    cout <<"ingrese el otro numero donde terminara: "<<endl;
    cin >> b; 

    for(int i = a; i <= b; i++){
        suma = suma + i; 
    }
    cout <<suma<<endl; 
    system("pause"); 
    return 0; 
}