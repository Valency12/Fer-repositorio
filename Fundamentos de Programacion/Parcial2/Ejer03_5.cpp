#include <iostream>
using namespace std; 

float DOLAR_A_EURO(int dolar, float euro); 
float EURO_A_DOLAR(int dolar, float euro); 
float DOLAR_A_PESO(float dolar, float peso); 
float PESO_A_DOLAR(float dolar, float peso);

int main(){
    int opcion; 
    int dolar; 
    float euro; 
    float peso; 

    cout <<"Ingrese la opcion que desea: \n 1. Dolar a euro \n 2. Euro a dolar \n 3. Dolar a peso mexicano \n 4. Peso mexicano a dolar \n"<<endl; 
    cin >> opcion; 

    switch (opcion)
    {
        case 1: 
        cout <<"DOLAR A EURO"<<endl; 
        cout <<"Ingrese la cantidad en dolar: "<<endl; 
        cin >>dolar; 

        cout <<"Su conversion queda a: "<<DOLAR_A_EURO(dolar, euro) <<endl; 

        break; 

        case 2: 
        cout <<"EURO A DOLAR"<<endl; 
        cout <<"Ingrese la cantidad en euro: "<<endl; 
        cin >> euro; 

        cout <<"Su conversion queda a: "<<EURO_A_DOLAR(dolar, euro)<<endl; 

        break; 

        case 3: 
        cout <<"DOLAR A PESO MEXICANO"<<endl; 
        cout <<"Ingrese la cantidad en dolar: "<<endl; 
        cin >> dolar; 

        cout << "Su conversion queda a: "<<DOLAR_A_PESO(dolar, peso)<<endl; 

        break; 
        
        case 4:
        cout <<"PESO MEXICANO A DOLAR"<<endl; 
        cout <<"Ingrese la cantidad en pesos mexicanos: "<<endl; 
        cin >> peso; 
        cout <<"Su conversion queda a: "<<PESO_A_DOLAR(dolar, peso)<<endl; 
        break; 

    default:
        cout <<"Error"<<endl; 
        break;
    }
    
    system("pause");
    return 0; 
}

float DOLAR_A_EURO(int dolar, float euro){
    float conver1; 
    euro = 1.11; 

    conver1 = dolar / euro; 

    return conver1; 
}
float EURO_A_DOLAR(int dolar, float euro){
    float conver2; 
    dolar = 100.0; 

    conver2 = euro / dolar; 

    return conver2; 
}
float DOLAR_A_PESO(float dolar, float peso){
    peso = 18.47; 
    float conver3;
    conver3 = dolar * peso;  
 
    return conver3; 
}
float PESO_A_DOLAR(float dolar, float peso){
    dolar = 100; 
    float conver4; 
    conver4 = peso / dolar;

    return conver4; 
}
