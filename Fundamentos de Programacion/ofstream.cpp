#include <iostream>
#include <fstream>

using namespace std; 


int main(){
    //falta terminar
    ofstream miarchivo("ejemplo1311.txt");
    if(miarchivo.is_open()){
        miarchivo <<"Linea1"<<endl; 
        miarchivo <<"linea2"<<endl; 
        miarchivo.close(); 
    }else{
        cout <<"No es posible abrir el archivo"<<endl; 
    }
    //another part 

    system("pause"); 
    return 0; 
}