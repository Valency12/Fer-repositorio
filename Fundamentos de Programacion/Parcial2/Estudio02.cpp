#include <iostream>
using namespace std; 

int main (){
int n; 
int diasfaltantes;

    cout <<"Ingrese un numero del 1 al 7: "<<endl; 
    cin >> n; 

    switch (n){
        case 1: 
            cout <<" Lunes"<<endl;
            break; 

        case 2: 
            cout <<" Martes"<<endl;
            break;

        case 3: 
            cout <<" Miercoles"<<endl;
            break;

        case 4: 
            cout <<" Jueves"<<endl;
            break;

        case 5: 
            cout <<" Viernes"<<endl;
            break;

        case 6: 
            cout <<" Sabado"<<endl;
            break;

        case 7: 
            cout <<" Domingo"<<endl;
            break;
        
    default:
        cout <<"error"; 
        break;
    }

    if (n <= 7){
        diasfaltantes = 7 - n; 
        cout << "faltan " <<diasfaltantes <<" dias para llegar al dia domingo"<<endl; 
    }else{
        cout<<"Error en entrada de datos";
    }

    system ("pause");

    return 0; 
}