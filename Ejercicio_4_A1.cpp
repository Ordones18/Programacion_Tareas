/*
Escribe un programa que solicite al usuario ingresar 10 números enteros y los almacene
en un vector. Usa un bucle for y una estructura de decisión para revisar cada número
y, si es negativo, reemplazarlo con un 0. Al final, muestra el vector modificado.
*/
#include <iostream>
using namespace std;

int main()
{
  const int n_veces = 10;
  int numeros[n_veces];
  cout<<"Ingresa un numero entero 10 veces"<<endl;
  for(int i=0;i<n_veces;i++)
  {
    cout<<"Numero "<<i+1<<" :"; cin>>numeros[i];
  }
  for(int i=0;i<n_veces;i++)
  {
    if(numeros[i]<0)
    {
      numeros[i]=0;
    }
  }
  cout<<"El nuevo vector es:";
  for(int i=0;i<n_veces;i++)
  {
    cout<<numeros[i]<<" ";
  }
    cout<<endl;
  system("pause");
  return 0;
}