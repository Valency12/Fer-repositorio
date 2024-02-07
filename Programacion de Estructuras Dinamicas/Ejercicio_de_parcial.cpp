#include <iostream>
using namespace std;

void hospedaje(string &, int &, int &, float &, float &);
void factura(string, int &, int &, float &, float, float);

int main()
{
    float total_a_Pagar;
    string name;
    int tipo_habitacion;
    float total_impuesto_turista;
    const float impuesto_incremento = 1.18;
    int cant_dias;

    cout << "==========HOTEL=========" << endl;
    hospedaje(name, cant_dias, tipo_habitacion, total_a_Pagar, total_impuesto_turista);
    cout << "==========FACTURA============" << endl;
    factura(name, cant_dias, tipo_habitacion, total_a_Pagar, impuesto_incremento, total_impuesto_turista);

    return 0;
}

void hospedaje(string &nombre, int &cant_dias, int &tipo_habitacion, float &total_a_Pagar, float &total_impuesto_turista)
{
    const float impuesto_incremento = 1.18;
    do
    {
        cout << "Ingrese su nombre: \n>";
        cin >> nombre;
        cout << "Ingrese la cantidad de dias: \n>";
        cin >> cant_dias;
        cout << "ingrese el tipo de habitacion que desea: \n[1] Sencilla $45.00\n[2] Doble ejecutiva $70.00\n[3] Suite presidencial $150.00\n[4] Salir\n";
        cin >> tipo_habitacion;

        if (tipo_habitacion == 1)
        {
            total_a_Pagar = cant_dias * 45.00;
            total_impuesto_turista = total_a_Pagar * impuesto_incremento;
            cout << "El precio total a pagar: " << total_a_Pagar << endl;
        }
        else if (tipo_habitacion == 2)
        {
            total_a_Pagar = cant_dias * 70.00;
            total_impuesto_turista = total_a_Pagar * impuesto_incremento;
            cout << "El precio total a pagar: " << total_a_Pagar << endl;
        }
        else if (tipo_habitacion == 3)
        {
            total_a_Pagar = cant_dias * 150.00;
            total_impuesto_turista = total_a_Pagar * impuesto_incremento;
            cout << "El precio total a pagar: " << total_a_Pagar << endl;
        }
        else if (tipo_habitacion == 4)
        {
            cout << "Saliendo" << endl;
        }
        else
        {
            cout << "Error" << endl;
        }

    } while (tipo_habitacion > 4);
}
void factura(string nombre, int &cant_dias, int &tipo_habitacion, float &total_a_Pagar, float impuesto_incremento, float total_impuesto_turista)
{

    cout << "Nombre cliente: " << endl;
    cout << nombre << endl;
    cout << "Tipo habitacion: " << endl;
    cout << tipo_habitacion << endl;
    cout << "Cantidad dias hospedaje: " << endl;
    cout << cant_dias << endl;
    cout << "-----------------------------------" << endl;
    cout << "Impuesto aplicado: " << endl;
    cout << impuesto_incremento << endl;
    cout << "Total a pagar: " << endl;
    cout << total_a_Pagar << endl;
    cout << "Total a pagar con impuesto aplicado: " << endl;
    cout << total_impuesto_turista << endl;
    cout << "Muchas gracias por preferirnos, vuelva pronto" << endl;
    cout << "------------------------------------" << endl;
}