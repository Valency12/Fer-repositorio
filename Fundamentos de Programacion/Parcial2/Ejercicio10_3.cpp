#include <iostream>
using namespace std; 

int main(){
    int dis = 25; 
    int pasos; 

    if(dis <= 25){
        cout <<"Ingrese cuantos pasos a dado: "<<endl; 
        cin >>pasos;
        for(int i = 0; i <= dis; i++){
            cout << pasos - i; 
        }

    }else{
        cout <<"Error al ingresar los pasos"<<endl; 

    }

    system("pause"); 

    return 0; 
}