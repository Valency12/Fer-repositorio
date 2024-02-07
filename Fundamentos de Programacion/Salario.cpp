#include <iostream>
using namespace std; 

float ISSS (float sal_n);
float AFP(float sal_n);
float Renta(float sal_n);

int main(){
    float salario_n, salario_l, renta, d_isss, d_afp, d_renta; 
    cout <<"Ingrese el salario nominal: ";
    cin >> salario_n; 

    d_afp = AFP(salario_n);
    d_isss = ISSS(salario_n);
    d_renta = Renta(salario_n);



    cout << "Su salario nominal es: $"<<salario_n<<endl; 
    cout <<"Su descuento por AFP es: $"<<d_afp<<endl; 
    cout<<"Su desceunto por ISS es: $"<<d_isss<<endl; 

    return 0;
}

float ISSS (float sal_n){

    float desc_ISSS;
    desc_ISSS = sal_n * 0.03;

    if(sal_n > 30){
    return desc_ISSS = 30; 
    }
}

float AFP(float sal_n){
    float desc_afp;
    desc_afp = sal_n * 7.25 /100;
    return desc_afp; 
}

float Renta(float sal_n){
    switch (float renta)
    {
    case 0 ... 472.00:
        renta = 0; 
        break;
    case 472.00 ... 895.24:
        renta = (salario_n - 472.00) * 0.1; 
        renta =

        break;
    case 0 ... 472.00:
        renta = 0; 
        break;
    
    default:
        break;
    }
    

    return; 
}