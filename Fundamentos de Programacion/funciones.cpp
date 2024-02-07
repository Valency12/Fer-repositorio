#include <iostream>
using namespace std; 

 int SUMA(int n1, int n2);
 int RESTA(int n1, int n2);
 int DIVISION(int n1, int n2);
int MULTIPLICACION(int n1, int n2);
int FACTORIAL(int n1); 
int PRIMO(int n); 
int MODULO(int n1, int n2);

int main(){

    int n, n1, n2;
    cout << "Ingrese la opcion que desea operar: \n 1. Suma\n 2. Resta\n 3. Multiplicacion\n 4. Division\n 5. Factorial\n 6. Primo\n 7. Modulo"<<endl; 
    cin >> n;


    switch(n)
    {
    case 1:
        cout << "SUMA: \n";
        cout << "ingrese un numero: "; 
        cin >> n1; 
         cout << "ingrese otro numero: ";
         cin >> n2; 
         
         cout << "El resultado de la suma es: "<<SUMA(n1, n2)<<endl;

        break;
    case 2:
        cout << "RESTA: \n";
        cout << "ingrese un numero: "; 
        cin >> n1; 
         cout << "ingrese otro numero: ";
         cin >> n2; 
         
         cout << "El resultado de la resta es: "<<RESTA(n1, n2)<<endl;
         
        break;
    case 3:
        cout << "MULTIPLICACION: \n";
        cout << "ingrese un numero: "; 
        cin >> n1; 
         cout << "ingrese otro numero: ";
         cin >> n2; 
         
         cout << "El resultado de la multiplicacion es: "<<MULTIPLICACION(n1, n2)<<endl;
         
        break;
    case 4:
        cout << "DIVISION: \n";
        cout << "ingrese un numero: "; 
        cin >> n1; 
         cout << "ingrese otro numero: ";
         cin >> n2; 
         
         cout << "El resultado de la division es: "<<DIVISION(n1, n2)<<endl;
         
        break;
    case 5:
        cout << "FACTORIAL: \n";
        cout << "ingrese un numero: "; 
        cin >> n1; 
         
         cout << "El resultado del factorial es: "<<FACTORIAL(n1)<<endl;
         
        break;
    case 6:
        cout << "PRIMO: \n";
        cout << "ingrese un numero entero: "; 
        cin >> n; 
         
         cout << "El resultado es: "<<PRIMO(n)<<endl ;
         
        break;
    case 7:
        cout << "MODULO: \n";
        cout << "ingrese un numero: "; 
        cin >> n1; 
         cout << "ingrese otro numero: ";
         cin >> n2; 
         
         cout << "El resultado del modulo es: "<<MODULO(n1, n2)<<endl;
         
        break;

    default:
        cout << "error al ingresar los datos"; 
        break;
    }
    system("pause");
    return 0;
}

int SUMA(int n1, int n2){
    int r_suma; 
    r_suma = n1 + n2; 
    return r_suma; 
}
 int RESTA(int n1, int n2){
    int r_resta; 
    r_resta = n1 - n2;
    return r_resta; 
 }
 int DIVISION(int n1, int n2){
    int r_division; 
    r_division = n1 / n2; 
    return r_division; 
}
 int MULTIPLICACION(int n1, int n2){
    int r_multiplicacion; 
    r_multiplicacion = n1 * n2; 
    return r_multiplicacion; 
}
int FACTORIAL(int n1){
    int r_factorial = 1; 
    if (n1 > 0){
        for (int i = n1; i > 1; i--){
            r_factorial = r_factorial * i; 
        }
    }else if(n1 == 0){
        r_factorial = 1;
    }else{
        cout <<"error al resolver el factorial\n";
    }
    return r_factorial; 
}
int PRIMO(int n){
    bool esPrimo = true;

    if (n <= 1) {
        esPrimo = false;
    } else {
        for (int i = 2; i <= n / 2; i++) {
            if (n % i == 0) {
                esPrimo = false;
                break;
            }
        }
    }

    if (esPrimo) {
        cout << n << " es un numero primo." << endl;
    } else {
        cout << n << " no es un numero primo." << endl;
    }

    return esPrimo; 
}
int MODULO(int n1, int n2){
    int r_modulo;
    r_modulo = n1 % n2; 
    return r_modulo; 
}
