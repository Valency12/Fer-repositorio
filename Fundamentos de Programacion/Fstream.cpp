#include <iostream>
#include <fstream> 

using namespace std; 

void Write(); 

int main(){
        Write(); 
    system("pause"); 
    return 0; 
}

void Escribir(){
    string filName = "ejemplo_de_archivo.txt"; 
    ofstream file; 
    file.open(fileName, fstream::app);

    if(file.is_open()){
        file << "Something"<<endl; 
    }else{
        cout <<"No se puede abrir el archivo"<<endl; 
        file.close();
    }
} 
