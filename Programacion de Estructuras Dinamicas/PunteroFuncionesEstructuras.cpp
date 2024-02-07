#include <iostream>
#include <ctime>
using namespace std;

struct RendimientoEthernet
{
    float envio;
    float recepcion;
} monitor;

void leerRendimientoActualEthernet(float &);                     // por referencia
void registrosRendimientoEthernet(struct RendimientoEthernet &); // se pone el struct, el nombre del struct y el &

int main()
{

    return 0;
}

void leerRendimientoActualEthernet(float &actualRecepcion)
{
    int t = time(nullptr);
    srand(t);                            // esta es la semilla
    actualRecepcion = rand() % (10 + 1); // este transforma a numero entero
    // rango de 1 a 10
}
void registrosRendimientoEthernet(struct RendimientoEthernet &rendimiento)
{
    float actualEnvio = 0;
    float actualRecepcion = 0;

    leerRendimientoActualEnvioEthernet(actualEnvio);
    leerRendimientoActualRecepcionEthernet(actualRecepcion);
}
