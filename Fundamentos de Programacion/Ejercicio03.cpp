#include <iostream>
using namespace std; 

int main(){

//Definimos variables
    const int kaprekar = 6174;
    const int numCifras = 4;
    int numero = 0;
    int entrada;

  //Entrada del numero
  cout << "Ingrese numero :" << endl;
  cin >> entrada;

    //El numero sera de 4 digitos
  if (entrada > 1000 && entrada < 9999)
  {
    numero = entrada;

    do
    {
      int digitos[numCifras];
      int ascendente = 0;
      int descendente = 0;

      // Separar numeros por sus cifras
      for (int i = 0; i < numCifras; i++)
      {
        digitos[i] = numero % 10;
        numero = numero / 10;
      }

      // Bubble Sort: Menor a mayor 
      for (int i = 0; i < numCifras - 1; i++)
      {
        for (int j = 0; j < numCifras - i - 1; j++)
        {
          if (digitos[j] > digitos[j + 1])
          {
            int temp = digitos[j];
            digitos[j] = digitos[j + 1];
            digitos[j + 1] = temp;
          }
        }
      }

      // Crear numero ascendente
      for (int i = 0; i < numCifras; i++)
      {
        ascendente = ascendente * 10 + digitos[i];
      }

      // Bubble Sort: Mayor a menor
      for (int i = 0; i < numCifras - 1; i++)
      {
        for (int j = 0; j < numCifras - i - 1; j++)
        {
          if (digitos[j] < digitos[j + 1])
          {
            int temp = digitos[j];
            digitos[j] = digitos[j + 1];
            digitos[j + 1] = temp;
          }
        }
      }

      // Crear numero descendente
      for (int i = 0; i < numCifras; i++)
      {
        descendente = descendente * 10 + digitos[i];
      }

      numero = abs(ascendente - descendente);

    } while ((numero != kaprekar) && (numero != 0));

    //Salida de datos segun si cumple el proceso 
    if (numero == kaprekar)
    {
      cout << "El numero " << entrada << " es Kaprekar" << endl;
    }
    else
    {
      cout << "El numero " << entrada << " no es Kaprekar" << endl;
    }
  }
  else
  {
    cout << "Ingrese un numero con 4 cifras" << endl;
  }

  system("pause");

    return 0;
}
