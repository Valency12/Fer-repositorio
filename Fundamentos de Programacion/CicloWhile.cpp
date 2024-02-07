#include <iostream> 
using namespace std; 

int main(){
    int num; 

    while(num != 0){
    cout << "ingrese un numero: \n";
    cin >> num; 

        if( num < 0){
            cout <<"es negativo"<<endl;
        }else{
            cout <<"es positivo"<<endl; 
        }
    }

    system("pause");

    return 0; 
}