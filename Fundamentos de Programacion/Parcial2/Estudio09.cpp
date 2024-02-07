#include <iostream> 
using namespace std; 

int main(){
    float total_fact; 
    float t_propina; 
    int opcion; 
    int opcion1; 

    cout <<"Ingrese el total a pagar: "<<endl; 
    cin >> total_fact; 

        cout <<"Desea agregar propina?: \n 1. Si \2. No\n"<<endl; 
        cin >> opcion; 

    switch(opcion){
        case 1:
        cout << "Cuanto desea aportar?: "<<endl; 
        cout << " 1. 10% \n 2. 15% \n 3. 20% \n"<<endl; 
        cin >> opcion1;

        switch (opcion1){    
            case 1: 
            t_propina = total_fact + 0.10;
            cout <<"Su total con el 10 x ciento de propina queda a: "<<t_propina<<endl; 
            break; 
            case 2: 
            t_propina = total_fact + 0.15;
            cout <<"Su total con el 15 x ciento de propina queda a: "<<t_propina<<endl; 
            break; 
            case 3: 
            t_propina = total_fact + 0.20;
            cout <<"Su total con el 20 x ciento de propina queda a: "<<t_propina<<endl; 
            break;

        default:
            cout <<"El total sin propina es: "<<total_fact<<endl; 
            break;
         } 
            break; 
        case 2:
        cout <<"El total a pagar es: "<<total_fact <<endl; 
        break; 
        default:
        cout <<"Su total a pagar es: "<<total_fact<<endl; 
        break;
        
    }

    system("pause");

    return 0; 
    }
