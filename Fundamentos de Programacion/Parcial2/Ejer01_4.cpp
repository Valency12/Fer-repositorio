#include <iostream> 
using namespace std; 

int main(){
    int numeroAdivinar = 12; 
    int intento; 
    bool adivinado = false; 
    int intentos = 0; 

    cout <<"Bienvenido al juego, adivine el numero del 1 al 100"<<endl; 
    
    do
    {
        cout <<"Ingresa un numero: "<<endl;
        cin >> intento;
        intentos++; 
        if(intento < 1 || intento > 100){
            cout <<"El numero debe de estar en el rango del 1 al 100"<<endl; 
        }else if(intento < numeroAdivinar){
            cout <<"El numero es mayor. Intenta de nuevo"<<endl;
        }else if(intento > numeroAdivinar){
            cout <<"El numero es menor. Intenta de nuevo"<<endl; 
        }else{
            adivinado = true;
        }
    } while(!adivinado);
    cout <<"Felicidades, adivino el numero "<<endl; 

    system("pause");
    return 0; 
}