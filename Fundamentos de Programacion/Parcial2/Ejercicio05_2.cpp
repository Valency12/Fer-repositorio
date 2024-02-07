#include <iostream> 
using namespace std; 

int main(){
    int peso; 
    int altura;
    int IMC; 

    cout <<"Ingrese su peso: "<<endl;
    cin >>peso; 
    cout <<"Ingrese su altura: "<<endl;
    cin >>altura; 


    switch (peso)
    {
        case 0 ... 18:
        cout <<"Su peso es bajo"<<endl; 
        break; 
        case 19 ... 24: 
        cout <<"Usted tiene un peso normal"<<endl;
        break; 
        case 25 ... 29: 
        cout <<"Usted tiene sobrepeso"<<endl; 
        break; 
        case 30 ... 34: 
        cout <<"Usted esta obseso"<<endl;
        break; 
        case 35 ... 100000: 
        cout << "Usted esta extremadamente obeso"<<endl; 
        break; 
    default:
        cout <<"Error";
        break;
    }

    IMC = peso / altura; 
    cout <<"Su Indice de masa corporal es: "<<IMC<<endl; 

    system("pause");

    return 0; 
}