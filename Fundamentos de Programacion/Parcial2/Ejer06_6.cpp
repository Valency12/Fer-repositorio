#include <iostream>
using namespace std; 

int AREA(int circulo, int radio); 

int main(){
    int radio, circulo; 

    cout <<"Ingrese el radio del circulo: "<<endl; 
    cin >> radio; 
    cout <<"El area del circulo es: "<<AREA(circulo, radio)<<endl; 

    system("pause"); 
    return 0; 
}
int AREA(int circulo, int radio){
    int area; 
    float pi = 3.1416; 
    
    area = pi * radio * radio; 

    return area; 
}
