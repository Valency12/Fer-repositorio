#include <iostream>
using namespace std; 

int main(){
    int num;

    cout<<"ingrese un numero entero: ";
    cin>>num; 
        if (num < 0){
            cout << "es negativo"<<endl;
        } else{ 
            cout<<"es positivo"<<endl;
        }
           
        
    system("pause");
    return 0; 
}