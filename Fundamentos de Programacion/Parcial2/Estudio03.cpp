#include <iostream> 
using namespace std;

int main(){
    int n1, n2, n3; 
    cout <<"Ingrese el primer numero: "; 
    cin >> n1; 
    cout <<"Ingrese el segundo numero: "; 
    cin >> n2; 
    cout <<"Ingrese el tercer numero: "; 
    cin >> n3; 

    if(n1 > n2 && n1 > n3){
        cout << "El numero mas grande de los tres es: "<<n1<<endl; 
    }else if(n2 > n1 && n2 > n3){
        cout << "El numero mas grande de los tres es: "<<n2<<endl; 
    }else if(n3 > n1 && n3 > n2){
        cout << "El numero mas grande de los tres es: "<<n3<<endl; 
    }else{
        cout <<"Error en calcculos xd"<<endl; 
    }
    system("pause");

    return 0; 
}