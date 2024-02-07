#include <iostream>
#include <fstream>
#include <ctime>

using namespace std; 

void CreateFile();
string GetCurrentDate();

int main(){
    string nombre_consumidor; 
    
    cout <<"Ingrese su nombre: "; 
    cin >> nombre_consumidor;

    CreateFile(); 

return 0; 
}

string GetCurrentDate(){
    time_t t = time(0);
  tm *now = localtime(&t);
  return to_string(now->tm_mday) + "-" + to_string(now->tm_mon + 1) + "-" + to_string(now->tm_year + 1900);
}
void CreateFile(){
    string nombre_consumidor; 
  ofstream file;
  string fileName ="RegistodeVentas.txt";

  file.open(fileName, fstream::app);

  if (file.is_open())
  {
    file << "Nombre: "<<nombre_consumidor; 
    file <<"Fecha: "<<GetCurrentDate()<<endl; 
  }
  else
  {
    cout << "Error: No se puede abrir el archivo" << endl;
  }

  file.close();
}