#include <iostream> 
#include <cmath>
using namespace std; 

int main(){

    float a,b,c,x1,x2,r; 

    cout <<"El prgrama resuelve las raices de ax al2 +bx+c"<<endl; 
    cout <<"ingrese A: ";
    cin >> a; 
    cout <<"ingrese B: ";
    cin >> b; 
    cout <<"ingrese C: ";
    cin >> c; 

    if(a != 0){
        r = pow(b,2)-4*a*c;
        if(r >= 0){
            x1 = (-b +sqrt(r))/2/a;
            x2 = (-b -sqrt(r))/2/a;
            cout << "las raices de la ecuacion son: "<<endl <<"x1: "<< x1 <<"x2: "<<x2 <<endl; 
        }else{
            cout<< "Las raices son numeros complejos, no puedo resolver"<<endl; 
        }
    }else if(b != 0){
        cout <<"la ecuacion es lineal, tiene una raiz"<<endl;
        x1 = -c/b;
        cout << "la raiz es: "<<x1 <<endl; 
    }else{
        cout<<"Datos ingresados son erroneos";
    }

    return 0; 
}