#include <iostream>
using namespace std; 

int main(){

    char vocal;  
    cout <<"Ingrese una vocal: "<<endl; 
    cin >> vocal; 

    switch (vocal)
    {
        case 'a': 
        cout << "Es una vocal abierta"<<endl; 
        break; 
        case 'e': 
        cout << "Es una vocal abierta"<<endl; 
        break; 
        case 'o': 
        cout << "Es una vocal abierta"<<endl; 
        break; 
        case 'u': 
        cout << "Es una vocal cerrada"<<endl;
        break;
        case 'i': 
        cout << "Es una vocal cerrada"<<endl;
        break; 
    default:
        cout <<"No es vocal"; 
        break;
    }

    system("pause"); 
    return 0; 
}