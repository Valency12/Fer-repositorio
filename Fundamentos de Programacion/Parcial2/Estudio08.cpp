#include <iostream> 
using namespace std; 

int main(){
    int n;
    int operar; 
    cout <<"Ingrese un numero: "<<endl; 
    cin >>n; 

    if(operar == 0){
        operar = n / 2;
        cout <<" es multiplo de 2 "<<endl; 
    }else if (operar != 0){
        cout <<"No es multiplo de 2"<<endl;
    }else{
        cout <<"No es multiplo de ningun numero"<<endl; 
    }

    // }else if( n / 3 == 0){
    //     cout <<" es multiplo de 3 "<<endl;
    // }else if( n / 5 == 0){
    //     cout <<" es multiplo de 5 "<<endl; 
    // }else if( n / 7 == 0){
    //     cout <<" es multiplo de 7 "<<endl; 
    // }else if( n / 11 == 0){
    //     cout <<" es multiplo de 11 "<<endl;
    // }else if( n / 13 == 0){
    //     cout <<" es multiplo de 13 "<<endl;
    // }else if( n / 17 == 0){
    //     cout <<" es multiplo de 17 "<<endl;

    system("pause");
    return 0; 
}