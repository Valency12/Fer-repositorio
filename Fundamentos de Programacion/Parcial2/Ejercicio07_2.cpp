#include <iostream> 
using namespace std; 

int main(){
    int opcion; 

    cout <<"Ingrese que figura desea: \n1. triangulo \n2. cuadrado\n3. Circulo\n"; 
    cin>>opcion; 


    switch (opcion)
    {
        case 1: 
        cout <<"TRIANGULO"<<endl;
        cout <<"     *"<<endl;
        cout <<"   *   *"<<endl;
        cout <<"  *     *"<<endl;
        cout <<" *       *"<<endl;
        cout <<"* * * * * *"<<endl;
        break; 
        case 2:
        cout <<"CUADRADO"<<endl; 
        cout <<"*************** "<<endl;
        cout <<"*             *"<<endl;
        cout <<"*             *"<<endl;
        cout <<"*             *"<<endl;
        cout <<"*             *"<<endl;
        cout <<"*             *"<<endl;
        cout <<"***************"<<endl;
        break; 
        case 3: 
        cout <<"CIRCULO"<<endl;
        cout <<"   * * * * *"<<endl;
        cout <<" *          * "<<endl; 
        cout <<"*            * "<<endl; 
        cout <<"*            * "<<endl; 
        cout <<" *          * "<<endl; 
        cout <<"   * * * *"<<endl; 
        break; 

    default:
    cout<<"Error"<<endl; 
        break;
    }

    system("pause");
    
    return 0; 
}