#include <iostream>
using namespace std;

struct Doctor
{
    string Nombre;
    int edad;
    string especialidad;
};
struct Paciente
{
    int cantidadPacientes[5];
    string Nombre;
    int edad;
    string motivo;
    // int tiempo;
    Doctor quienAtendio;
    string consultaMedica;
};
struct Nodo
{
    struct Paciente registro_paciente;
    struct Doctor registro_doc;
    struct Nodo *siguiente;
};

struct Nodo *frenteCola = nullptr;
struct Nodo *finalCola = nullptr;

void Datos_doctor(Doctor);
bool Vacia();
void Datos_paciente(Paciente);
void AtenderPaciente(Paciente);
void Imprimir();
void MostrarPacientesEspera();

int main()
{
    Paciente nuevoRegistro_paciente;
    Doctor nuevoRegistro_doc;
    int opc;
    do
    {
        cout << "Doctor: \n[1] Neurologo\n[2] Nutricionista\n[0] Salir\n>";
        cin >> opc;
        cin.ignore();

        switch (opc)
        {
        case 1:
            do
            {
                cout << "-------------------Doctor 1" << endl;
                Datos_doctor(nuevoRegistro_doc);
                cout << "Ingrese una opcion: \n[1] Ingresar paciente\n[2] Atender Paciente\n[3] Mostrar pacientes\n[4] Mostrar pacientes en espera\n[5] Promedio tiempo\n[0] Salir\n>";
                cin >> opc;
                cin.ignore();
                switch (opc)
                {
                case 1:
                    cout << "Datos del paciente-----------" << endl;
                    cout << "Nombre: ";
                    getline(cin, nuevoRegistro_paciente.Nombre);
                    cout << "Edad: ";
                    cin >> nuevoRegistro_paciente.edad;
                    cin.ignore();
                    cout << "Motivo de consulta: ";
                    getline(cin, nuevoRegistro_paciente.motivo);
                    Datos_paciente(nuevoRegistro_paciente);
                    break;
                case 2:
                    cout << "Atender Paciente-----------" << endl;
                    AtenderPaciente(nuevoRegistro_paciente);
                    break;
                case 3:
                    cout << "Pacientes Atendidos-----------" << endl;
                    Imprimir();
                    break;
                case 4:
                    cout << "Pacientes en espera-----------" << endl;
                    MostrarPacientesEspera();
                    Imprimir();
                    break;
                case 5:
                    cout << "Promedio de tiempo-----------" << endl;
                    break;
                case 0:
                    cout << "Regresando al menu principal" << endl;
                    break;

                default:
                    cout << "Ingrese una opcion valida" << endl;
                    break;
                }
                break;
            } while (opc != 0);
        case 2:
            do
            {
                cout << "-------------------Doctor 2" << endl;
                Datos_doctor(nuevoRegistro_doc);
                cout << "Ingrese una opcion: \n[1] Ingresar paciente\n[2] Atender Paciente\n[3] Mostrar pacientes\n[4] Mostrar pacientes en espera\n[5] Promedio tiempo\n[0] Salir\n>";
                cin >> opc;
                cin.ignore();
                switch (opc)
                {
                case 1:
                    cout << "Datos del paciente-----------" << endl;
                    cout << "Nombre: ";
                    getline(cin, nuevoRegistro_paciente.Nombre);
                    cout << "Edad: ";
                    cin >> nuevoRegistro_paciente.edad;
                    cin.ignore();
                    cout << "Motivo de consulta: ";
                    getline(cin, nuevoRegistro_paciente.motivo);
                    Datos_paciente(nuevoRegistro_paciente);
                    break;
                case 2:
                    cout << "Atender Paciente-----------" << endl;
                    AtenderPaciente(nuevoRegistro_paciente);
                    break;
                case 3:
                    cout << "Pacientes Atendidos-----------" << endl;
                    Imprimir();
                    break;
                case 4:
                    cout << "Pacientes en espera-----------" << endl;
                    MostrarPacientesEspera();
                    Imprimir();
                    break;
                case 5:
                    cout << "Promedio de tiempo-----------" << endl;
                    break;
                case 0:
                    cout << "Regresando al menu principal" << endl;
                    break;

                default:
                    cout << "Ingrese una opcion valida" << endl;
                    break;
                }

                break;
            case 0:
                cout << "Saliendo" << endl;
                break;
            default:
                cout << "Opcion invalida!" << endl;
                break;
            } while (opc != 0);
        }

    } while (opc != 0);
    return 0;
}
void Datos_doctor(Doctor nuevoRegistro_doc)
{
    struct Nodo *nuevoNodo = new Nodo();
    nuevoNodo->registro_doc = nuevoRegistro_doc;
    nuevoNodo->siguiente = nullptr;
    if (frenteCola == nullptr)
    {
        frenteCola = nuevoNodo;
    }
    else
    {
        finalCola->siguiente = nuevoNodo;
    }
    finalCola = nuevoNodo;
}
bool Vacia()
{
    if (frenteCola == nullptr && finalCola == nullptr)
    {
        cout << "Agenda completa, regrese mañana" << endl;
        return true;
    }
    else
    {
        cout << "Agenda vacia, hay cupos disponibles" << endl;
        return false;
    }
}
void Datos_paciente(Paciente nuevoRegistro_paciente)
{
    struct Nodo *nuevoNodo = new Nodo();
    nuevoNodo->registro_paciente = nuevoRegistro_paciente;
    nuevoNodo->siguiente = nullptr;
    if (frenteCola == nullptr)
    {
        frenteCola = nuevoNodo;
    }
    else
    {
        finalCola->siguiente = nuevoNodo;
    }
    finalCola = nuevoNodo;
}
void AtenderPaciente(Paciente nuevoRegistro_paciente)
{
    for (int i = 1; nuevoRegistro_paciente.cantidadPacientes[i] < 5; i++)
    {
        if (nuevoRegistro_paciente.cantidadPacientes != nullptr)
        {
            cout << "Aun quedan cupos disponibles en agenda" << endl;
        }
        else
        {
            cout << "Ya no hay cupos disponibles!" << endl;
        }
    }
}
void Imprimir()
{
    struct Nodo *temp = frenteCola;
    while (temp != nullptr)
    {
        cout << "Nombre paciente: " << temp->registro_paciente.Nombre << endl;
        cout << "Edad paciente: " << temp->registro_paciente.edad << endl;
        cout << "Motivo consulta: " << temp->registro_paciente.motivo << endl;
        cout << "Doctor: " << temp->registro_doc.Nombre << endl;
        temp = temp->siguiente;
    }
}
void MostrarPacientesEspera()
{
    if (!Vacia())
    {
        struct Nodo *temp = frenteCola;
        if (frenteCola == finalCola)
        {
            finalCola = nullptr;
            frenteCola = nullptr;
        }
        else
        {
            frenteCola = temp->siguiente;
        }
        delete temp;
    }
}