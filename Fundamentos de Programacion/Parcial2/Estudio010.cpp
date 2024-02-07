#include <iostream> 
using namespace std; 

int main(){
    int n1, n2, n3;
    int r_n1, r_n2, r_n3;   
    cout <<"Ingrese el primer numero: \n"; 
    cin >> n1; 
    cout <<"Ingrese el segundo numero: \n"; 
    cin >> n2; 
    cout <<"Ingrese el tercer numero: \n"; 
    cin >> n3; 

    r_n1 = n2 + n3;
    if(r_n1 == n1){
        cout <<"El primer numero si es igual a la suma del segundo con el tercero"<<endl;
    }else{
        cout <<"No se cumple el caso 1"<<endl;
    }

    r_n2 = n1 + n3; 
    if(r_n2 == n2){
        cout <<"El segundo numero si es igual a la suma del primero con el tercero"<<endl; 
    }else{
        cout<<"No se cumple el caso 2"<<endl; 
    }

    r_n3 = n1 + n2; 
    if(r_n3 == n3){
        cout <<"El tercer numero si es igual a la suma del primero con el segundo"<<endl;
    }else{
        cout <<"No se cumple el caso 3"<<endl; 
    }

    system("pause");

    return 0; 
}