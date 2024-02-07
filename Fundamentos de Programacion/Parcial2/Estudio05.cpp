#include <iostream> 
using namespace std; 

int main(){
    int nota; 
    cout <<"ingrese su nota: "; 
    cin >> nota; 

    if(nota == 10){
        cout << "Su nota es A "<<endl; 
    }else if (nota == 9){
        cout <<"Su nota es B"<<endl; 
    }else if (nota == 8){
        cout <<"Su nota es C"<<endl; 
    }else if(nota == 7){
        cout <<"Su nota es D"<<endl;
    }else if(nota <= 6){
        cout <<"Su nota es F"<<endl; 
    }else{
        cout <<"Error al ingresar la nota"<<endl; 
    }

    system("pause");
    return 0; 
}