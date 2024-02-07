#include <iostream>
using namespace std; 

int main()
{
    int num; 

    cout << "ingrese un numero negativo"<<endl;
    cin >> num;

    if (num < 0){
        cout << "Correcto y es numero negativo: "<< num <<endl;
    }else{
        cout << "No es numero negativo"<<endl;
    }
    system("pause");

return 0; 
}