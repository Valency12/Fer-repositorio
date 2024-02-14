#include <iostream>
using namespace std;

class Producto
{
private:
    int id; 
    string nombre; 
    float precioActual; 
    int cantidadStock; 
public:
    int getid(); 
    void setid(int ID); 

    string getnombre(); 
    void setnombre(string name); 

    float getprecioActual(); 
    void setprecioActual(float precioActual); 

    int getcantidadStock(); 
    void setcantidadStock(int Cantidad); 

    void Imprimir(); 
    float calcularPrecioFinal(float); 
    float calcularDescuentoProducto(float); 
    int cantidadStock(int); 
};


int main()
{
    Producto producto; 
    int id; 
    string nombre; 
    float precioActual; 
    int cantidadStock; 
    int opc; 
    do
    {
    cout <<"Ingrese una opcion: \n[1] Ingresar producto\n[2] Imprimir Productos actuales\n[0] Salir\n>"; 
    cin >> opc; 

    switch (opc)
    {
    case 1:
        cout <<"------------------INGRESAR DATOS"<<endl; 
        cout <<"Ingrese el nombre del producto: \n>"; 
        
        break;
    case 2:
        /* code */
        break;
    case 3:
        cout <<"Saliendo"<<endl; 
        break;    
    default:
    cout <<"Error al seleccionar una opcion!"<<endl; 
        break;
    }
    } while (opc != 0);

    return 0;
}