#include <iostream>
using namespace std; 

int main(){
    int clave; 
    int contra = 123; 
    int claves = 0; 
    bool escorrecto = false; 

    do
    {
    cout <<"Ingrese su clave: "<<endl; 
    cin >> clave; 
    claves++; 
    if (clave != contra){
        cout <<"Contraseña incorrecta, vueva a intentarlo"<<endl; 
    }else{
        escorrecto = true; 
    }
    } while(!escorrecto);

    cout <<"Usted ha desbloqueado su celular cuenta"<<endl; 
    system("pause"); 

    return 0; 
}