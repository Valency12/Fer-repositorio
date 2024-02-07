#include <iostream> 
using namespace std; 

int main(){
    int valor; 
    float m; 
    int cm;
    int kg; 
    int g;   
        
        cout <<"Ingrese el valor que desea convertir: \n 1. Kilogramo a gramo \n 2. Centimetros a metro\n "<<endl; 
        cin >> valor; 
    switch (valor)
    {
        case 1: 
        cout <<"Ingrese la cantidad en kg: "<<endl; 
        cin >> kg; 
        g = kg * (100 / 1); 
        cout <<"La conversion queda a: "<<g<<" g"<<endl; 
        break;
        case 2: 
        cout <<"Ingrese la cantidad en cm: "<<endl; 
        cin >> cm; 
        m = cm * (1.0 / 100); 
        cout <<"La conversion queda a: "<<m<<" m"<<endl; 
        break;
        
        default:
        cout <<"Error al calcular la conversion"<<endl; 
        break;
    }
    system("pause");

    return 0; 
}