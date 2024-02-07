#include <iostream>
using namespace std;

float NotaPromedio(float *); 
int SumaUVs(int *); 

int main(){
    string materia[4]; 
    int uvs[4]; 
    float nota[4]; 

    for(int i = 0; i < 4; i++){

    cout <<"ingrese nombre de la asignatura: "; 
    cin >>materia[i];
    cout <<"Ingrese la nota obtenida: "; 
    cin >>nota[i]; 
    cout <<"Ingrese la unidad valorativa de la materia: "; 
    cin >>uvs[i]; 
    cout << endl; 
    }

    float Promedio = NotaPromedio(nota);
    cout <<"Su promedio es: "<<Promedio<<endl; 
    cout <<"La suma de las unidades valorativas es: "<<SumaUVs(suma)<<endl;

    system("pause"); 
    return 0; 
}
float NotaPromedio(float *nota){
    float suma, promedio;
    for(int i = 0; i < 4; i++){
        suma = suma + nota[i]; 
    }
    promedio = suma / 4; 

    return promedio; 
}
int SumaUVs(int *suma){
    int suma_uvs[4];
    int suma; 
    for(int i = 0; i < 4; i++){
    suma = suma + suma_uvs[i];
    }

    return suma; 
}