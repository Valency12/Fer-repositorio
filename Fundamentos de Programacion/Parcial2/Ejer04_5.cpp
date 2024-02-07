#include <iostream> 
using namespace std; 

int numMenor(int n1); 

int main(){
    int n;
    int ingresados = 10;  
    cout <<"Ingrese un numero: "<<endl; 
    cin >> n;

    
    if(n < ingresados){
        for(int i = 0; i <= ingresados; i++){
        cout <<"numero: "<<endl; 
        cin >> n; 
        }
    }else{
        cout <<"Error"<<endl; 

    }

    system("pause"); 

    return 0; 
}

int numMenor(int n1); 