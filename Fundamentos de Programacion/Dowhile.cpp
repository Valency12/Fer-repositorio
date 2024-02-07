#include <iostream> 
using namespace std; 

int main(){
    int opc; 
    do{
    cout <<"Ingrese una opcion:\n1.Piedra\n2.Papel\n3.Tijera\n0.Salir\n";
    cin >>opc; 
    }while(opc != 0 && opc != 1 && opc != 2 && opc != 3);
    switch(opc){
        case 1:
        cout <<"Piedra \n";
        break; 
        case 2:
        cout <<"Papel \n";
        break;
        case 3:
        cout <<"Tijera \n";
        break;
        case 0:
        cout <<"Salir \n";
        break;
        default:
        cout <<"opcion invalida\n";
    }

    system ("pause");
    return 0; 
}