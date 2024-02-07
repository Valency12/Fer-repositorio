#include <iostream>
using namespace std;

struct DatosAve
{
    string nombre;
    string color;
    int fechaIngreso;
    string indicador;
} ave;

void ModificarColorAve(DatosAve *ave);
void modificarnombre(DatosAve *);

int main()
{
    int opcion;
    int cantAve;
    string nombrebuscar;
    string nuevocolor;

    do
    {

        cout << "----------------------------------------------" << endl;
        cout << "\t REGISTRO DE AVES" << endl;
        cout << "----------------------------------------------" << endl;
        cout << "Ingrese la opcion: \n 1. registrar ave\n 2. Modificar nombre\n 3. Modificar Color \n 4. Validacion de Fotografias\n 5.Mostrar cambios\n 6. Salir" << endl;

        cin >> opcion;
        system("pause");
        // system("cls");

        switch (opcion)
        {
        case 1:
            cout << "----------REGISTRAR NUEVA AVE-----------" << endl;
            cout << "la cantidad de aves a registrar: " << endl;
            cin >> cantAve;
            for (int i = 0; i <= cantAve; i++)
            {
                cout << "ingrese el nombre del ave: " << endl;
                cin >> ave.nombre[i];
            }
            cout << "ingrese la fecha que ingreso el ave: " << endl;
            for (int i = 0; i < cantAve; i++)
            {
                cin >> ave.fechaIngreso;
            }
            cout << "ingrese el color del ave: " << endl;
            for (int i = 0; i < cantAve; i++)
            {
                cin >> ave.color;
            }

            break;
        case 2:
            cout << "----------NUEVO NOMBRE-----------" << endl;
            cout << "ingrese el nombre del ave que desea modificar: " << endl;
            cin >> nombrebuscar;

            if (nombrebuscar == ave.nombre)
            {
                modificarnombre(&ave);
            }

            cout << "no se ha encontrado ese ave" << endl;

            break;
        case 3:
            cout << "----------NUEVO COLOR-----------" << endl;
            cout << "Ingrese el color del ave: " << endl;
            cin >> ave.color;
            ModificarColorAve(&ave);
            break;
        case 4:
            cout << "----------fOTOGRAFIA-----------" << endl;
            break;
        case 5:
            cout << "----------BITACORA-----------" << endl;
            break;
        case 6:
            cout << "----------SALIENDO-----------" << endl;
            break;

        default:
            break;
        }

        system("pause");
    } while (opcion != 6);
    return 0;
}

void ModificarColorAve(DatosAve *ave)
{
    string nuevoColor;
    cout << "ingrese el nuevo color del ave: " << endl;
    cin >> nuevoColor;
    ave->color = nuevoColor;
    cout << "El nuevo color es: " << ave->color << endl;
}

void modificarnombre(DatosAve *Ave)
{
    cout << "Ingrese el nuevo nombre: " << endl;
    cin >> Ave->nombre;
    cout << "Nombre modificado exitosamente." << endl;
}