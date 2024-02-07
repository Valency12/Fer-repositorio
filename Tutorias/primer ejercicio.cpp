#include <iostream>

using namespace std; 

//declarar
int dolarayen(int dolar);

int main (){
    int dolar;

//invocar 
    cout << "ingrese la cantidad de dolares:";
    cin >> dolar; 

    cout << "conversion: yenes"<<dolarayen;

    return 0; 
}
//definir 
    int dolarayen(int dolar){
    int yen = 146;
    return dolar*yen; 
}