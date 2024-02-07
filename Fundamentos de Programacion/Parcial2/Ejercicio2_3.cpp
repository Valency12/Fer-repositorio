#include <iostream> 
using namespace std; 

int main(){
    int n;
    int tabla; 
    int numero;

    cout << "Ingresa un numero entero:"<<endl; 
    cin >> n; 
    if(n <= 0){
        cout <<"Por favir ingresa un numero entero: "; 
        cin >> numero; 
    }else{
        

    }
    for(int j = 0; j < n; j++){

        cout <<endl; 
        for(int i = 0; i <= 10; i++){
            tabla = n * i;
            cout <<n <<" x "<<i <<" = " << tabla<<endl; 
        }

    }

    system("pause");

    return 0; 
}