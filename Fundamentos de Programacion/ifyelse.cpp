#include <iostream>
using namespace std; 

int mai(){
    int num; 

    cout << "ingrese un numero: "<<endl;
    cin >> num; 

    if (num == 0){
        cout <<"El numero es 0"<<endl;
    }else if(num < 0){
        cout <<"El numero es negativo"<<endl;
    }else{
        cout<<"El numero es positivo"<<endl;
    }

    return 0; 
}