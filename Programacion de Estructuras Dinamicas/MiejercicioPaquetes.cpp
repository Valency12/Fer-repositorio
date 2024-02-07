#include <iostream>
using namespace std;

struct Datos
{
    char nombre[40];
    char lugarEnvio[30];
    char personaRecibe[30];
    char descripcion[50];
    int cantidadPaquetes;
    float pesoPaquetes[10];
    float precioPaquetes[10];
    float pesoTotal;
    float TotalFacturar;
    float descuento;
} paquete;

// DECLARACION DE FUNCIONES
float CalcularPrecioPaquete(float peso);
float CalcularPesoTotal(int cant, float pesoPaquete[]);
float CalcularTotal(int cant, float PrecioPaquete[]);
float CalcularDescuento(float Total, float PesoTotal);

int main()
{
    Datos infoPaq;
    int opc;
    int pesoLb;
    int cont;

    cout << "==========PAQUETERIA EL PATO============" << endl;
    cout << "Ingrese una opcion: \n [1] Registrarse en el sistema\n [2] Conocer el precio de un paquete \n [3] Facturar paquetes\n [4] Salir\n";
    cin >> opc;

    switch (opc)
    {
    case 1:
        /* code */
        break;

    default:
        break;
    }

    return 0;
}

// DEFINICION DE FUNCIONES
float CalcularPrecioPaquete(float peso)
{

    return;
}

float CalcularPesoTotal(int cant, float pesoPaquete[])
{

    return;
}

float CalcularTotal(int cant, float PrecioPaquete[])
{
    return;
}

float CalcularDescuento(float Total, float PesoTotal)
{

    return;
}
