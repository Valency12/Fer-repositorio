#include <iostream>
using namespace std; 

int main(){
    int tu_opcion;

    cout <<"JUEGUEMOS PIEDRA, PAPEL O TIJERA"<<endl; 
    cout <<"1. Piedra\n 2. Papel\n 3. Tijera\n"; 
    cin >>tu_opcion; 

    do while (tu_opcion)
    {
        for(int i = 0; i <= 3; i++){
        
        switch (tu_opcion)
        {
            case 1: 
            cout <<"Papel\n "; 
            break; 
            case 2:
            cout <<"Tijera\n "; 
            break; 
            case 3:
            cout <<"Piedra\n "; 
            break; 
        default:
            cout <<"Ingresa una opcion para jugar\n"; 
            break;
        }
    }
        
    }

    system("pause"); 
    return 0; 

}