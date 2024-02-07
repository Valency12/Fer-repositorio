#include <iostream> 
using namespace std; 

int main(){
    int n; 
    bool r = true; 
    do
    {
        cout <<"Ingrese un numero: "<<endl; 
        cin >> n; 

        for(int i = 1; i < n; i++){
            cout <<i <<" "; 
        }

    } while(!r);
    system("pause"); 
    return 0; 
}