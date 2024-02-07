#include <iostream>
using namespace std; 

int PROMEDIO(int promedio);

int main(){
    int n1, n2, n3, promedio; 
     
    cout <<"Ingrese sus tres notas para calcular su promedio: "<<endl; 
    cin >> n1 >> n2 >> n3; 
    cout <<PROMEDIO(promedio);

    system("pause"); 
    return 0; 
}
int PROMEDIO(int promedio){
    int n1, n2, n3;
    promedio = (n1 + n2 + n3) / 3; 
    
    return promedio; 
}