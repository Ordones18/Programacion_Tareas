/*
Escribe un programa que solicite al usuario ingresar 10 números enteros entre 1 y 5 y los
almacene en un vector. Usa un bucle para contar cuántas veces aparece cada
número en el vector (del 1 al 5) y muestra el resultado.
*/
#include <iostream>
using namespace std;
int main()
{
  const int numeros=10;
  int enteros[numeros];
  int n_veces[5]={0};
  cout<<"Ingresa 10 numeros enteros entre 1 - 5"<<endl;
  for(int i=1;i<=numeros;i++)
    {
      cout<<"Entero "<<i<<endl; cin>>enteros[i];
      while (enteros[i] < 1 || enteros[i] > 5)
      {
          cout << "Rango incorrecto ingrese un numero entre 1 - 5: "<<endl;
          cin >> enteros[i];
      }
      n_veces[enteros[i] - 1]++;
    }
    for (int i = 0; i < 5; i++)
    {
        cout<<"El numero " << i+1 <<" aparece " << n_veces[i]<<" veces" <<endl;
    }
system("pause");
return 0;
}