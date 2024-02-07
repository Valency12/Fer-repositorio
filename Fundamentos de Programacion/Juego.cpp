#include <iostream> 
#include <stdlib.h>
#include <time.h>

using namespace std; 

int main(){ 
     int a, t; 
     int piedra = 1; 
     int papel = 2; 
     int tijera = 3; 
     int res; 

    cout <<"ingrese una de las opciones:\n 1. piedra\n 2. papel\n 3. tijera\n";
    cin >>piedra>>papel>>tijera; 

    t = time(NULL);
    srand(t);
    a=rand()%3+1;
    cout <<a<<"\n"<<t<<"\n"; 


    switch (a)
    {
    case 1:
       cout <<"piedra gana\n"<<a;
        break;
    case 2:
       cout <<"papel gana\n"<<a;
        break;
    case 3:
       cout <<"tijera gana\n"<<a;
        break;
    
    default:
        break;
    }

    system("pause");
   
    return 0; 
}