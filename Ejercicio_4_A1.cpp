/*
Escribe un programa que solicite al usuario ingresar 10 números enteros y los almacene
en un vector. Usa un bucle for y una estructura de decisión para revisar cada número
y, si es negativo, reemplazarlo con un 0. Al final, muestra el vector modificado.
*/
#include<iostream>
using namespace std;
int main()
{
  //declaramos las variables que vamos a necesitar
  //declaramos una constante en =10
  const int n_veces=10;
  int numeros[n_veces];
  //Pedimos ingresar los numero al usuario
  cout<<"Ingrese un numero entero 10 veces"<<endl;
  //Creamos un bucle para ingresar los 10 numeros
  for(int i=0; i<n_veces; i++)
  {
    cout<<"Numero "<<i+1<<" : "; cin>>numeros[i];
  }
  //Creamos un bucle para revisar si un numero es negativo y reemplazar por cero
  for(int i=0; i<n_veces; i++)
  {
    //Creamos un if y si es negativo se reemplaza por cero
    if(numeros[i]<0)
    {
      numeros[i]=0;
    }
  }
  //Imprimimos el resultado con el nuevo vector usando un bucle
  cout<<"El nuevo vector es: ";
  for(int i=0; i<n_veces; i++)
  {
    cout<<numeros[i]<<" ";
  }
  cout<<endl;

	system("pause");
  return 0;
}