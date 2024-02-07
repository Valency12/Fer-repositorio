#include <iostream>
#include <vector>
using namespace std;

struct Bebida
{
    float precio;
    string nombreBebida;
    string opcionde_caja;
    string nombre_bebida;
};
void BuscaryModificarPrecio(string);

vector<Bebida> packs;

int main()
{
    float caja_6 = 4.50;
    float caja_12 = 11.55;
    float caja_24 = 20.99;
    int cantidad_cajas;
    string producto;
    float precio_total;
    int opcion;

    // packs.push_back({"Caja de 6", 4.50});
    // packs.push_back({"Caja de 12", 11.55});
    // packs.push_back({"Caja de 24", 20.99});

    cout << "Ingrese la opcion:\n 1.Caja de 6\n2.Caja de 12\n3.Caja de 24\n ";
    cin >> opcion;
    cout << "Ingrese la cantidad de packs que desea llevar de cajas: ";
    cin >> cantidad_cajas;
    cout << "De que bebida desea llevar? ";
    cin >> producto;

    switch (opcion)
    {
    case 1:
        // caja de 6
        precio_total = caja_6 * cantidad_cajas;
        cout << "Total packs de " << producto << " es: " << precio_total << endl;
        break;

    case 2:
        // caja de 12
        precio_total = caja_12 * cantidad_cajas;
        cout << "Total packs de " << producto << " es: " << precio_total << endl;
        break;

    case 3:
        precio_total = caja_24 * cantidad_cajas;
        cout << "Total packs de " << producto << " es: " << precio_total << endl;
        break;

    default:
        cout << "Error al ingresar la orden del pedido" << endl;
        break;
    }

    system("pause");
    return 0;
}
// void BuscaryModificarPrecio(string nombreBebida){
//     string nuevaCaja;
//     float nuevoPrecio;

//     for (int i = 0; i < packs.size(); i++)
//     {
//         if (nombreBebida == packs[i].nombre_bebida)
//         {
//             cout <<"Desea modificar de 6, 12 o 14?"<<endl;
//             cin >>nuevaCaja;
//             cout << "Ingrese el nuevo precio de la caja: ";
//             cin >> nuevoPrecio;

//             packs[i].nombre_bebida = nuevaCaja;
//             packs[i].precio = nuevoPrecio;
//             return;
//         }
//     }
//     cout << "No se ha encontrado la bebida" << endl;
// }
