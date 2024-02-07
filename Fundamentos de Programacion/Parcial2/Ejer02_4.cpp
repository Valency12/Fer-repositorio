#include <iostream> 
using namespace std; 

int main(){
    int n; 
    int suma; 
    int par;
    int r;  

    cout << "Ingrese un numero: "<<endl; 
    cin >> n;

    for(int i = 0; i <= 10; i++){
        r = n * i; 
        cout <<n <<" x "<<i <<" = "<<r <<endl; 
    }
    
    system("pause"); 
    return 0;
}