#include <iostream> 
#include <random>

using namespace std; 

int random(int, int); 

int main(){

    const int dimension = 10; 
    int numeros[dimension]; 
    int entrada; 
    int minimoCercano = 0; 

    //Generar numeros aleatorios y guardarlos en array numeros
    for(int i = 0; i < dimension; i++){
        numeros[i] = random(1, 10);
    }

    //Imprimir array de numeros
    for(int i = 0; i < dimension; i++){
        cout <<numeros[i]<<", "; 
    }

    //Pedir entrada al usuario
    cout <<"\n\nIngrese un numero: \n"; 
    cin >>entrada; 
    
    //Verificar el numero mas cercano
    for(int i = 0; i < dimension; i++){
        if (entrada > numeros[i])
        {
            minimoCercano = numeros[i]; 
            break; 
        }
    }
    //Imprimir el resultado
    cout <<"El numero minimo cercano es: "<<minimoCercano <<endl;

    system("pause"); 
    return 0; 
}

//Funcion para generar numeros aleatorios, minimos y maximos
int random(int min, int max){
    random_device rd; 
    mt19937 gen(rd()); 
    
    uniform_int_distribution<int> distribution(min, max); 

    return distribution(gen); 
}