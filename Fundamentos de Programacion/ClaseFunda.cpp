#include <iostream>
using namespace std; 

float NotaPromedio(float *);

int main(){
    
    float Notas[4];

    for (int i = 0; i < 4; i++){
    cout <<"Ingrese la nota: "<<endl; 
    cin >>Notas[i]; 
    }
    float Promedio = NotaPromedio(float &);

    cout << "Su promedio es: "<< Promedio; 

    system("pause");
    return 0; 
}

float NotaPromedio(float *promedio, float Notas[4]){
    float suma, promedio; 
    for(int i = 0; i < 4; i++){
        suma = suma + Notas[i]; 
    }
    *promedio = suma / 4; 

    return *promedio; 
}