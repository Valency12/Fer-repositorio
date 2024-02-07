#include <iostream> 
using namespace std; 

int main(){
    int opcion, d, A, altura, base, lado_a; 
    cout <<"El area de cual figura desea calcular?: \n 1. Circulo\n 2. Triangulo\n 3. Rectangulo\n 4. Cuadrado\n"; 
    cin >>opcion; 

    switch (opcion)
    {
        case 1:
        cout <<"CIRCULO: "<<endl; 
        A = 3.1416 * d; 
        cout <<"Ingrese el diametro: "<<endl; cin >> d;
        cout <<"El area es: "<<A<<endl;
        break; 

        case 2: 
        cout <<"TRIANGULO: "<<endl;
        cout <<"Ingrese el altura: "<<endl; cin >> altura;
        cout <<"Ingrese la base: "<<endl; cin >> base;
        A = (base * altura) / 2; 
        cout <<"El area es: "<<A<<endl;        
        break; 

        case 3:  
        cout <<"RECTANGULO: "<<endl;
        cout <<"Ingrese el altura: "<<endl; cin >> altura;
        cout <<"Ingrese la base: "<<endl; cin >> base;
        A = base * altura; 
        cout <<"El area es: "<<A<<endl;
        break; 

        case 4:  
        cout <<"CUADRADO: "<<endl;
        cout <<"Ingrese el lado a: "<<endl; cin >> lado_a;
        cout <<"Ingrese el lado a: "<<endl; cin >> lado_a;
        A = lado_a * lado_a; 
        cout <<"El area es: "<<A<<endl;
        break; 
        
    default:
        cout << "Error al calcular el Area"<<endl; 
        break;
    }

    system("pause"); 

    return 0;
}