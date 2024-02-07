#include <iostream>
using namespace std; 

int main(){
    int num, res;
    cout <<"ingrese un numero: "<<endl; 
    cin >>num;

    res = num %= 2;

    switch(res){
        case 1: 
        cout<<num<<"el numero es impar"<<endl; 
        break;
        case 0:
        cout<<num<<"el numero es par"<<endl;
        break;
        default: 
        cout<<"error al ingresar el numero"<<endl;
    }
    system("pause");
    return 0; 
}