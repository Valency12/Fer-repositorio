#include <iostream>
using namespace std;

struct InfoPaquete
{
    string nombreRecibe;
    string nombreEnvia;
    float totalPagar;
    float pesoTotal;
    string lugarEnvio;
    float precioPaquete;
    int cant;
    float pesoPaquete;

} DatosPaquete;

float PrecioPaquete(float);
float PesoPaquete(float);

int main()
{
    bool continuar = true;
    do
    {
        cout << "---------------------REGISTRO----------------------------" << endl;
        cout << "Ingrese el nombre de la persona que envia: " << endl;
        cin >> DatosPaquete.nombreEnvia;
        cout << "ingrese el nombre de de la persona quien recibira el paquete: " << endl;
        cin >> DatosPaquete.nombreRecibe;
        cout << "Ingrese la cantidad de paquetes que desea enviar: " << endl;
        cin >> DatosPaquete.cant;
        cout << "Ingrese el peso del paquete a enviar: " << endl;
        cin >> DatosPaquete.pesoPaquete;
        // return 0;
    } while (!continuar);
}
float PrecioPaquete(flaot)
{

    return 0;
}
float PesoPaquete(float)
{
    for (int i = 0; i <= DatosPaquete.pesoPaquete; i++)
    {
        cout << "Ingrese el peso del paquete: " << endl;
        cin >> DatosPaquete.pesoPaquete[i];
    }
    return 0;
}