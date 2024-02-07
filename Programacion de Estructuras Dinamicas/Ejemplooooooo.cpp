// un programa que funcione atraves de una fucnion que solicite al usuario
// el peso en libras de un paquetey el numero de paquetes, calcular el precio por paquete, el precio total a pagar
// tomando en cuenta que el peso de la libra es de 7 dolares, si pesa mas de 15 libras, se aplicara el 10% al precio total.
//  el programa debera mostrar el detalle del peso,  el numero de paquetes, precio por paquete, el total, el descuento y el total aplicado al descuento.
#include <iostream>
using namespace std;

int peso_total(int);
float precio_paquete(float);

int main()
{
    int precio;
    float peso;
    int n_paquetes;
    int peso_x_libra = 7;
    int total_peso;
    cout << "----------------------------------" << endl;
    cout << "Ingrese el peso en libras: ";
    cin >> peso;
    cout << "Ingrese el numero de paquetes: ";
    cin >> n_paquetes;
    cout << "----------------------------------" << endl;
    cout << "\t\tDATOS: " << endl;
    cout << "----------------------------------" << endl;
    cout << "Precio por libra: " << peso_x_libra << endl;
    cout << "Cantidad de paquetes: " << n_paquetes << endl;
    cout << "Peso total: " << peso_total(total_peso) << endl;
    cout << precio_paquete(precio);

    system("pause");
    return 0;
}

float precio_paquete(float precio)
{
    int peso_x_libra = 7;
    int peso;
    float precioTotal;
    float totalconDescuento;

    if (peso < 15)
    {
        precioTotal = peso_x_libra * peso;
        cout << "Precio total a pagar es de: " << precioTotal << endl;
    }
    else if (peso >= 15)
    {
        totalconDescuento = precioTotal * 0.1;
        cout << "Precio total con descuento: " << totalconDescuento << endl;
    }
    else
    {
        cout << "Error al calcular el precio total" << endl;
    }

    return precio;
}
int peso_total(int total_peso)
{
    int n_paquetes;
    int peso;
    total_peso = n_paquetes * peso;
    return total_peso;
}
