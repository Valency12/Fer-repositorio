#include <iostream>
using namespace std;

class Empleado
{
private:
    string nombre; 
    double salario; 
    string modalidad; 
    double ISSS = 0.03; 
    double AFP = 0.07; 
    double Renta = 0.1; 
    string Genero; 
    int Nacimiento; 
public:
//    Empleado(); 
//    Empleado(string, double, string, string, int); 

   string getNombre(); 
   void setNombre(string name);

   double getsalario(); 
   void setsalario(double salary); 

   string getmodalidad(); 
   void setmodalidad(string modality); 

    string getGenero(); 
    void setGenero(string Gender); 

    int getNacimiento(); 
    void setNacimiento(int fecha); 

    void mostrar(); 
    double CalcularDeducciones(); 
    double SalarioActual(double descuento); 
    // string CalcularRetiro(int nacimiento); 
};

// Empleado::Empleado(){

// }; 
// Empleado::Empleado(string _nombre, double _salario, string _modalidad, string _genero, int _nacimiento){

// };

string Empleado::getNombre(){
    return nombre; 
};
void Empleado::setNombre(string name){
    nombre = name; 
}; 

double Empleado:: getsalario(){
    return salario; 
}; 
void Empleado::setsalario(double salary){
    salario = salary; 
}; 

 string Empleado::getmodalidad(){
    return modalidad; 
 }; 
 void Empleado::setmodalidad(string modality){
    modalidad = modality; 
 }; 

string Empleado::getGenero(){
    return Genero; 
}; 
void Empleado::setGenero(string Gender){
    Gender = Genero; 
}; 

int Empleado:: getNacimiento(){
    return Nacimiento; 
}; 
void Empleado::setNacimiento(int fecha){
    fecha = Nacimiento; 
}; 

void Empleado::mostrar(){
    cout <<"---------------Datos de empleado"<<endl; 
    cout <<"Nombre: "<<nombre<<endl; 
    cout <<"Salario: "<<salario<<endl; 
    cout<<"Modalidad: "<<modalidad<<endl;
    cout <<"Genero: "<<Genero<<endl;
    cout <<"Nacimiento: "<<Nacimiento<<endl;  
}; 
double Empleado::CalcularDeducciones(){
    double deducciones = 0; 
    if (modalidad == "Servicio Profesional")
    {
        deducciones = salario * Renta; 
    }else if (modalidad == "Planilla")
    {
        deducciones = (salario * Renta)+(salario * ISSS)+(salario * AFP);
    }
    return deducciones; 
}; 
double Empleado::SalarioActual(double descuento){
    double actual = 0; 
    actual = salario - descuento; 
    return actual; 
}; 

int main()
{
    Empleado empleado; 
    string nuevoNombre; 
    string nuevoGenero; 
    int fechaNacimiento;
    double nuevoSalario;  
    string nuevaModalidad; 
    double impuestos = 0; 
    int opc; 
    do
    {    
    cout <<"Ingrese su opcion: \n[1] Ingresar datos\n[2] Mostrar datos\n[3] Deducciones salariales\n[4] Calculo Retiro\n[0] Salir\n "<<endl; 
    cin >> opc; 
    switch (opc)
    {
    case 1:
    cout <<"-----------------------------"<<endl; 
    cout <<"Ingrese su nombre: "<<endl; 
    cin >>nuevoNombre; 
    empleado.setNombre(nuevoNombre); 
    // cout <<empleado.getNombre(); //PARA IMPRIMIR
    cout <<"Ingrese su genero: "<<endl; 
    cin >> nuevoGenero; 
    empleado.setGenero(nuevoGenero); 
    cout <<"Ingrese su fecha de nacimiento: "<<endl; 
    cin >> fechaNacimiento; 
    empleado.setNacimiento(fechaNacimiento); 
    cout <<"Ingrese su salario: "<<endl; 
    cin >> nuevoSalario; 
    empleado.setsalario(nuevoSalario); 
    cout <<"Ingrese la modalidad: "<<endl; 
    cin >> nuevaModalidad; 
    empleado.setmodalidad(nuevaModalidad); 
        break;
    case 2:
        empleado.mostrar(); 
        break;
    case 3:
        impuestos = empleado.CalcularDeducciones(); 
        cout <<"Deduccion Salarial: "<<impuestos<<endl; 
        cout <<"Su salario neto: "<<empleado.SalarioActual(impuestos)<<endl; 
        break;
    case 4:
        // cout <<empleado.CalcularRetiro(fechaNacimiento)<<endl; 
        break;
    case 0:
        cout <<"Saliendo"<<endl; 
        break;
    
    default:
    cout <<"Error al seleccionar una opcion"<<endl; 
        break;
    }

    } while (opc != 0);

    return 0;
}

