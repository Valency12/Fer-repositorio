#include <iostream>
#include <cmath>
using namespace std;

class Triangulo
{
private:
    string color;
    int medida_lado1;
    int medida_lado2;
    int medida_lado3;
    string tipo_triangulo;
    int hipotenusa;

public:
    string getclasificarTriangulo();
    void setclasificarTriangulo(string);

    int getcalcularHipotenusa();
    int setcalcularHipotenusa(int);

    string getcolor(); 
    void setcolor(string); 

    int getmedida1(); 
    int setmedida1(int); 

    int getmedida2(); 
    int setmedida2(int); 

    int getmedida3(); 
    int setmedida3(int); 


};

//PEDIR MEDIDAS
 int Triangulo::getmedida1(){
    return medida_lado1; 
 }; 
 int Triangulo::setmedida1(int medida1){
    medida1 = medida_lado1; 
 }; 

 int Triangulo::getmedida2(){
    return medida_lado2; 
 }; 
 int Triangulo::setmedida2(int medida2){
    medida2 = medida_lado2; 
 }; 

 int Triangulo::getmedida3(){
    return medida_lado3; 
 }; 
 int Triangulo::setmedida3(int medida3){
    medida3 = medida_lado3; 
 }; 

string  Triangulo::getcolor(){
    return color; 
}; 
void Triangulo :: setcolor(string Color){
    Color = color; 
}; 

//CLASIFICAR TRIANGULO
string Triangulo::getclasificarTriangulo()
{
    return tipo_triangulo;
};

void Triangulo::setclasificarTriangulo(string tipo_triangulo)
{
    if (medida_lado1 == medida_lado2 && medida_lado1 == medida_lado3)
    {
        cout << "Tipo de traiangulo Equilatero" << endl;
    }
    else if (medida_lado1 != medida_lado2 && medida_lado1 != medida_lado3)
    {
        cout << "Tipo de triangulo Escaleno" << endl;
    }
    else if (medida_lado1 == medida_lado2 && medida_lado1 != medida_lado3)
    {
        cout << "Tipo de triangulo Isoceles" << endl;
    }
};

//CALCULAR HIPOTENUSA
int Triangulo::getcalcularHipotenusa()
{
    return hipotenusa;
};

int Triangulo::setcalcularHipotenusa(int resultado)
{
    if (medida_lado1 == medida_lado2 && medida_lado1 != medida_lado3)
    {
        resultado = (medida_lado1 * medida_lado1) + (medida_lado2 * medida_lado2);
        resultado = hipotenusa;
        cout << "Resultado de hipotenusa: " << resultado << endl;
    }else{
        cout <<"No se puede sacar la hipotenusa! no es un triangulo rectangulo!"<<endl; 
    }
};

int main()
{
    Triangulo triangulo1, triangulo2, triangulo3; 
    string tipo_triangulo;
    int hipotenusa;
    string Color;
    int medida1, medida2, medida3; 

    cout << "Ingrese el color: " << endl;
    cin >> Color; 
    triangulo1.setcolor(Color);

    // triangulo1.setcalcularHipotenusa(hipotenusa);
    cout << "Ingrese la medida del primer lado: " << endl;
    cin >> medida1; 
    triangulo1.setmedida1(medida1); 
    cout << "Ingrese la medida del segundo lado: " << endl;
    cin >> medida2; 
    triangulo1.setmedida1(medida2); 
    
    cout << "Ingrese la medida del tercer lado: " << endl;
    cin >> medida3; 
    triangulo1.setmedida3(medida3); 

    triangulo1.setclasificarTriangulo(tipo_triangulo);

    


    return 0;
}