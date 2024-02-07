#include <iostream>
using namespace std;

int main(){
    
    char letra; 

    cout <<"Ingrese una letra del alfabeto: "<<endl; 
    cin >> letra; 

    switch (letra)
    {
        case 'a': 
        cout << "La letra "<<letra<<" es una vocal"<<endl; 
        break ; 
        case 'e': 
        cout << "La letra "<<letra<<" es una vocal"<<endl; 
        break ; 
        case 'i': 
        cout << "La letra "<<letra<<" es una vocal"<<endl; 
        break ; 
        case 'o': 
        cout << "La letra "<<letra<<" es una vocal"<<endl; 
        break ; 
        case 'u': 
        cout << "La letra "<<letra<<" es una vocal"<<endl; 
        break ; 
    default:
        cout << "La letra "<< letra <<" es una consonante"<<endl; 
        break;
    }

    system("pause");
    return 0; 
}
