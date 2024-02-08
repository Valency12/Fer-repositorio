#include <iostream>
using namespace std;

class Cajero
{
private:
    string TipoATM;
    string Banco;
    float Cantidad_di_almacenada = 2000;
    string ubicacion;

public:
    int Retirar(int);
    void VerEstadoCuenta();
    int Depositar(int);
    void setEjercicioATM(string); 
    string getEjercicioATM();
};

int Cajero::Retirar(int total)
{
    int monto; 
    cout <<"Ingrese el monto: \n>";
    cin >> monto;
    total = Cantidad_di_almacenada - monto; 
    cout <<"El total que queda es de: "<<total<<endl; 
    return Cantidad_di_almacenada - monto;
}

void Cajero::VerEstadoCuenta()
{
}
int Cajero::Depositar(int total)
{
    int monto; 
    cout <<"Ingrese el monto: \n>";
    cin >> monto;
    total = Cantidad_di_almacenada + monto; 
    cout <<"Deposito exitosamente! Usted ha depositado "<<monto<<endl; 
    cout  <<"Su cantidad almacenada queda a: "<<total<<endl; 
}
//USANDO EL SET
void Cajero::setEjercicioATM(string _banco){
    Banco = _banco;
} 
//USANDO EL GET
string Cajero::getEjercicioATM(){
    return Banco; 
}

int main()
{
    int pin;
    int opc;
    int monto;
    int total; 
    Cajero Total;
    do
    {
    cout << "Ingrese su pin: \n>";
    cin >> pin;
    if (pin == 123)
    {
        cout << "Pin correcto" << endl;
        do
        {
            cout << "Eliga su opcion:\n[1] Retirar\n[2] Ver Estadod de Cuenta\n[3] Depositar\n[0] Salir\n>";
            cin >> opc; 
            switch (opc)
            {
            case 1:
                Total.Cajero::Retirar(total);
                break;
            case 2:
                
                break;
            case 3:
                Total.Cajero::Depositar(total); 
                break;
            case 0:
                cout << "Saliendo" << endl;
                break;

            default:
                cout << "Error al elegir una opcion" << endl;
                break;
            }
        } while (opc == 0);
    }
    else
    {
        cout << "Pin incorrecto vuelva a ingresarlo" << endl;
    }
     } while (pin != 123);

    return 0;
}