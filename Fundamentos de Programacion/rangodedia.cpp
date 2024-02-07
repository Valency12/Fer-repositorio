#include <iostream> 
using namespace std; 

int main(){
    int dia; 

    cout << "ingrese un numero para ver que dia de la semana le corresponde: ";
    cin >> dia; 


    switch (dia)
    {
    case 1:
        cout<<"lunes \n";
        break;

    case 2:
        cout<<"martes \n";
        break;

    case 3:
        cout<<"miercoles \n";
        break;

    case 4:
        cout<<"jueves \n";
        break;
    
    case 5:
        cout<<"viernes \n";
        break;

    case 6:
        cout<<"sabado \n";
        break;

    case 7:
        cout<<"domingo \n";
        break;
        
    default:
        break;
    }

    system("pause");

    return 0;
}