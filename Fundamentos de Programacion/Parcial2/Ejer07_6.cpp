#include <iostream> 
using namespace std; 

int CIRCULO_AREA(int radio, int area, int perimetro); 
int CIRCULO_PERIMETRO(int radio, int area, int perimetro);
int CUADRADO_AREA(int lado, int area);
int CUADRADO_PERIMETRO(int lado, int perimetro);

int main(){
    int opcion, radio, area, perimetro, lado; 

    cout <<"Ingrese la figura:\n 1. Ciculo\n 2. Cuadrado\n 3. Rectangulo\n 4. Triangulo\n 5. Trapecio\n"<<endl; 
    cin >>opcion; 

    switch (opcion)
    {
        case 1:
        cout <<"CIRCULO"<<endl; 
        cout <<"---Area---"; 
        cout <<"Ingrese el radio: "<<endl; 
        cin >> radio; 
        cout <<"El area es: "<<CIRCULO_AREA(radio, area, perimetro)<<endl; 
        cout <<"---Perimetro---"<<endl; 
        cout <<"Ingrese el radio: "<<endl; 
        cin >> radio; 
        cout <<"El perimetro es: "<<CIRCULO_PERIMETRO(radio, area, perimetro)<<endl; 
        break; 

        case 2: 
        cout <<"CUADRADO"<<endl;
        cout <<"Ingrese el lado: "<<endl; 
        cin >> radio; 
        cout <<"El area es: "<<CUADRADO_AREA(lado, area)<<endl; 
        cout <<"---Perimetro---"<<endl; 
        cout <<"Ingrese el lado: "<<endl; 
        cin >> radio; 
        cout <<"El perimetro es: "<<CUADRADO_PERIMETRO(lado, perimetro)<<endl;
        break; 

        case 3: 
        cout <<"RECTANGULO"<<endl;
        cout <<"---Area---";
        break; 

        case 4:
        cout <<"TRIANGULO"<<endl;
        cout <<"---Area---";
        break; 

        case 5: 
        cout <<"TRAPECIO"<<endl;
        cout <<"---Area---";
        break; 

    default:
            cout <<"Error"<<endl; 
        break;
    }
    system("pause");
    return 0; 
}
int CIRCULO_AREA(int radio, int area, int perimetro){
    float pi = 3.1416; 
    area = pi * radio * radio; 
    return area; 
}

int CIRCULO_PERIMETRO(int radio, int area, int perimetro){
    float pi = 3.1416; 
    perimetro = 2 * pi * radio; 
    return perimetro; 
}

int CUADRADO_AREA(int lado, int area){
    area = lado * lado; 
    return area; 
}

int CUADRADO_PERIMETRO(int lado, int perimetro){
    perimetro = lado + lado + lado + lado; 
    return perimetro; 
}
