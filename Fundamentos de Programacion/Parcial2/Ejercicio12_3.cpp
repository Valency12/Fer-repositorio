#include <iostream>
using namespace std; 

int main(){
    int n1; 
    int n2; 
    int n3; 

    cout <<"Ingrese tres numeros: "<<endl; 
    cin >> n1 >> n2 >> n3; 

    if(n1 > n2 && n1 > n3){
        cout <<"El maximo de los tres es: "<<n1<<endl; 
    }else if(n2 > n1 && n2 > n3){
        cout <<"El maximo de los tres es: "<<n2<<endl;
    }else if(n3 > n1 && n3 > n2){
        cout <<"El maximo de los tres es: "<<n3<<endl;
    }else{
        cout <<"Error al calcular el numero"<<endl; 
    }
    system("pause"); 

    return 0; 
}