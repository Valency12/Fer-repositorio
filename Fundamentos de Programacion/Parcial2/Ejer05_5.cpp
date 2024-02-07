#include <iostream>
using namespace std; 

int FAH(int celcius, int fahren);

int main(){
    int celcius; 
    int fahren; 
    cout <<"Ingrese la cantidad en Celcius: "<<endl; 
    cin >> celcius; 
    cout <<"La conversion queda a: "<<FAH(celcius, fahren)<<endl; 
    system("pause");
    
    return 0; 
}
int FAH(int celcius, int fahren){
    int conver; 
    conver = (celcius * 9/5)+32; 

    return conver; 
}