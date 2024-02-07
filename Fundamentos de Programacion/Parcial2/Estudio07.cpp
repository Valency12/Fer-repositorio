#include <iostream> 
using namespace std; 

int main(){
    int biciesto;
    int opcion;
    int ano; 
    cout <<"Ingrese el ano: "<<endl; 
    cin >> ano; 
    cout <<"Por cual desea dividirlo?: \n 1. 4 \n 2. 400\n"; 
    cin >>opcion; 
    
    switch (opcion)
    {
        case 1: 
            if(biciesto == 0){
            biciesto = ano / 4; 
            cout <<"El ano es biciesto"<<endl; 
            }else{
                cout<<"No es biciesto"<<endl;
            }
            break;
        case 2: 
            if(biciesto == 0){
            biciesto = ano / 400; 
            cout <<"El ano es biciesto"<<endl; 
            }else{
                cout<<"No es biciesto"<<endl; 
            }
            break;
        
    default:
        cout <<"Error"; 
        break;
    }

    system("pause"); 
    return 0; 
}