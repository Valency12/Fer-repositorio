#include <iostream> 
using namespace std; 

int main(){
    int a; 
    int b; 
    int c; 

    cout <<"Ingrese el lado a: "<<endl;
    cin >> a; 
    cout <<"Ingrese el lado b: "<<endl;
    cin >> b; 
    cout <<"Ingrese el lado c: "<<endl;
    cin >> c; 

    if(a == b && a == c && c == a && c == b && b == a && b == c){
        cout <<"Es un triangulo equilatero"<<endl; 
    }else if(a == b && b == a && c != a && c != b){
        cout <<"Es un tringulo isosceles"<<endl; 
    }else if(a != b && a != c && b != c && b != a){
        cout <<"Es un tringulo escaleno"<<endl; 
    }else{
        cout <<"Error"; 
    }
    
    system("pause"); 
    return 0; 
}