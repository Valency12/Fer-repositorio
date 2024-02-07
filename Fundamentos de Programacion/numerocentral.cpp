#include <iostream>
using namespace std; 

int main (){
    int a, b, c; 
    cout << "ingrese a:"<<endl; 
    cin >> a; 
    cout << "ingrese b:"<<endl; 
    cin >> b; 
    cout << "ingrese c:"<<endl; 
    cin >> c; 

    if (a > b & b < c){
        cout << "b es central"<<endl;
    }else if(b > a & a < c){
        cout <<"a es central"<<endl; 
    }else if(a > c & c < b){
        cout <<"c es central"<<endl;
    }else{
        cout <<"a, b y c no son distintos"<<endl;
    }

    system("pause");
    return 0;
}