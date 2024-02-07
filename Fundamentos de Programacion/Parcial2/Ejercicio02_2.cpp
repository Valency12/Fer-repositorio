#include <iostream> 
using namespace std; 

int main(){
int a; 
int b; 
int r; 
int opcion; 


cout <<"Que operacion desea realizar?: \n 1. Suma \n 2. Resta \n 3. Multiplicacion \n 4. Division\n "; 
cin >> opcion; 

cout <<"Ingrese el primer numero: "<<endl; 
cin >> a; 
cout <<"Ingrese el segundo numero: "<<endl; 
cin >> b; 

switch (opcion)
{
    case 1: 
    r = a + b;
    cout << "EL total es: "<<r<<endl; 
    break; 
    case 2: 
    r = a - b;
    cout << "EL total es: "<<r<<endl; 
    break; 
    case 3: 
    r = a * b;
    cout << "EL total es: "<<r<<endl; 
    break; 
    case 4: 
    r = a / b;
    cout << "EL total es: "<<r<<endl; 
    break; 

default:
cout <<"Error al ingresar la opcion"<<endl; 
    break;
}

system("pause");

    return 0;
}