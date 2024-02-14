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
   Empleado(); 
   Empleado(string, double, string, string, int); 

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
    string CalcularRetiro(int nacimiento); 
};

Empleado::Empleado(){

}; 
Empleado::Empleado(string _nombre, double _salario, string _modalidad, string _genero, int _nacimiento){

};
string Empleado::getNombre(){
    return nombre; 
};
double Empleado:: getsalario(){
    return salario; 
}; 
 string Empleado::getmodalidad(){
    return modalidad; 
 }; 
string Empleado::getGenero(){
    return Genero; 
}; 
int Empleado:: getNacimiento(){
    return Nacimiento; 
}; 







void setNombre(string name){
    nombre = name; 
};


int main()
{

    return 0;
}