#include <fstream>
#include <iostream> 
using namespace std; 

int main(){
    ofstream miarchivo("comidaPreferida.txt");
    if(miarchivo.is_open()){
        miarchivo <<"la comida preferida del mes es: "; 
        miarchivo.close(); 
    }else{
        cout <<"No es posible abrir el archivo"; 
    }

    system("pause"); 
    return 0; 
}