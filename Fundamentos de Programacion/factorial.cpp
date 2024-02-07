#include <iostream> 
using namespace std; 

int main(){
    int n = 0; 
    int fact = 1; 

    cout <<"Ingrese un numero:\n";
    cin >>n; 

    if (n > 0){
        for (int i = n; i > 1; i--){
            fact = fact * i; 
        }
    }else if(n == 0){
        fact = 1;
    }else{
        cout <<"error\n";
    }

    cout <<"El factorial de "<<n<<endl<<"es: \n"<<fact<<"\n";
    system ("pause");

    return 0; 
}