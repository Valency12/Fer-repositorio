#include <iostream>
using namespace std;

class Producto
{
private:
    int id;
    string nombre;
    float precio;
    int cantidadStock;

public:
    string nombre;
    int getid();
    void setid(int ID);

    string getnombre();
    void setnombre(string name);

    float getprecioActual();
    void setprecioActual(float precioActual);

    // int getcantidadStock();
    // void setcantidadStock(int Cantidad);

    void Imprimir();
    float calcularPrecioFinal(float);
    float calcularDescuentoProducto(float);
    int cantidadstock(int);
};

int Producto::getid()
{
    return id;
};
void Producto::setid(int ID)
{
    ID = id;
};

string Producto ::getnombre()
{
    return nombre;
};
void Producto::setnombre(string name)
{
    name = nombre;
};

float Producto::getprecioActual()
{
    return precio;
};
void Producto::setprecioActual(float PrecioActual)
{
    PrecioActual = precio;
};

void Imprimir(Producto);
int main()
{
    Producto producto;
    int id;
    string nombre;
    float precio;
    int cantidadStock;
    int opc;
    do
    {
        cout << "Ingrese una opcion: \n[1] Ingresar producto\n[2] Imprimir Productos actuales\n[0] Salir\n>";
        cin >> opc;

        switch (opc)
        {
        case 1:
            cout << "------------------INGRESAR DATOS" << endl;
            cout << "Ingrese el nombre del producto: \n>";
            cin >> nombre;
            producto.setnombre(nombre);
            cout << "Ingrese el ID: \n>";
            cin >> id;
            producto.setid(id);
            cout << "Ingrese el precio actual: \n>";
            cin >> precio;
            producto.setprecioActual(precio);
            cout << "***Producto agregado exitosamente***" << endl;

            break;
        case 2:
            cout << "------------------IMPRIMIR DATOS" << endl;
            cout << "Nombre: " << producto.getnombre() << endl;
            cout << producto.Imprimir(producto.nombre);
            break;
        case 3:
            cout << "Saliendo" << endl;
            break;
        default:
            cout << "Error al seleccionar una opcion!" << endl;
            break;
        }
    } while (opc != 0);

    return 0;
}

// {
//     cout << "------------------IMPRIMIR DATOS" << endl;
//     cout << "Nombre: " << producto.getnombre() << endl;
//     cout <<producto.nombre<<endl;
//     cout << "ID: " << producto.getid() << endl;
//     cout << "Precio Actual: " << producto.getprecioActual() << endl;
// }
