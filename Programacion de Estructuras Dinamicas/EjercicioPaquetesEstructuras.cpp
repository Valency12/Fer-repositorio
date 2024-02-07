// en este es el main
#include <iostream>
#include "lib.hpp"

using namespace std;

int main()
{
    struct InfoPaquete infoPaq;
    int opc;
    int pesoLb;
    int cont;
    do
    {
        cout << "Ingrese una opcion:"
             << "\n"
             << "1 - Registrate en el sistema"
             << "\n"
             << "2 - Conocer el precio de un paquete"
             << "\n"
             << "3 - Facturar paquetes"
             << "\n";
        cin >> opc;

        switch (opc)
        {
        case 1: // Registro
            cout << "Ingrese el nombre para facturar"
                 << "\n";
            cin >> infoPaq.nombre;
            cout << "Ingrese el lugar para el envio "
                 << "\n";
            cin >> infoPaq.lugarEnvio;
            cout << "Ingrese el nombre de la persona que recibe "
                 << "\n";
            cin >> infoPaq.personaRecibe;
            cout << " --------------- Detalles del registro -------------- "
                 << "\n";
            cout << "El nombre de la persona que envia " << infoPaq.nombre << "\n";
            cout << "El nombre de la persona que recibe " << infoPaq.personaRecibe << "\n";
            cout << "El lugar de envio " << infoPaq.lugarEnvio << "\n";
            break;
        case 2: // Calcular precio de un paquete
            cout << "Ingresa el peso de un paquete en Lbs. ";
            cin >> pesoLb;
            cout << "El costo del paquete $" << CalcularPrecioPaquete(pesoLb) << " ($7.00 Lb)"
                 << "\n";
            break;
        case 3: // Ingreso y detalle de pago del paquete
            cout << "Ingrese la cantidad de paquetes a facturar ";
            cin >> infoPaq.cantPaquetes;
            for (int i = 1; i <= infoPaq.cantPaquetes; i++)
            {
                cout << "Ingrese el peso del paquete, el precio de Lb es $7.00 ";
                cin >> infoPaq.pesoPaquetes[i];
                infoPaq.PrecioPaquetes[i] = CalcularPrecioPaquete(infoPaq.pesoPaquetes[i]);
            }
            for (int i = 1; i <= infoPaq.cantPaquetes; i++)
            {
                cout << "Peso del paquete " << i << " " << infoPaq.pesoPaquetes[i] << "lbs"
                     << "Precio del paquete "
                     << " - $" << infoPaq.PrecioPaquetes[i] << "\n";
            }
            infoPaq.descuento = CalcularDescuento(CalcularTotal(infoPaq.cantPaquetes, infoPaq.PrecioPaquetes), CalcularPesoTotal(infoPaq.cantPaquetes, infoPaq.pesoPaquetes));
            infoPaq.TotalFacturar = CalcularTotal(infoPaq.cantPaquetes, infoPaq.PrecioPaquetes);
            infoPaq.pesoTotal = CalcularPesoTotal(infoPaq.cantPaquetes, infoPaq.pesoPaquetes);
            cout << " ----------------- Detalles de factura ------------------ "
                 << "\n";
            cout << "El nombre de la persona que envia " << infoPaq.nombre << "\n";
            cout << "El nombre de la persona que recibe " << infoPaq.personaRecibe << "\n";
            cout << "El lugar de envio " << infoPaq.lugarEnvio << "\n";
            cout << "La cantidad de paquetes a enviar es " << infoPaq.cantPaquetes << "\n";
            cout << "El peso total de la encomienda " << infoPaq.pesoTotal << " lbs"
                 << "\n";
            cout << "El total a pagar sin descuento $" << infoPaq.TotalFacturar << "\n";
            cout << "El descuento obtenido $" << infoPaq.descuento << "\n";
            cout << "El total a pagar $" << infoPaq.TotalFacturar - infoPaq.descuento << "\n";
            break;
        default:
            cout << "Opcion no valida";
            break;
        }

        cout << "Desea continuar en el sistema 1-Si, 0-No"
             << "\n";
        cin >> cont;
    } while (cont == 1);

    return 0;
}