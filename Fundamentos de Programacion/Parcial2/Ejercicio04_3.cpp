#include <iostream> 
using namespace std; 

int main(){
    int res = 1; 
    int expo; 
    int n; 

    cout <<"Ingrese la base: "<<endl; 
    cin >> n; 
    cout <<"Ingrese el exponente: "<<endl; 
    cin >> expo; 

    for( int i = 1; i <= expo; i++){
        res = res * n;
    }
        cout <<"el resultado es: "<< res <<endl;
        
    system("pause"); 
    return 0; 
}