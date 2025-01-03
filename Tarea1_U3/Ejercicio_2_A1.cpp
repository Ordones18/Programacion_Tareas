/*
Escribe un programa que solicite al usuario ingresar 10 numeros enteros entre 1 y 5 y los
almacene en un vector. Usa un bucle para contar cuantas veces aparece cada
numero en el vector (del 1 al 5) y muestra el resultado.
*/
#include<iostream>
using namespace std;
int main()
{
    //declaramos las variables
    //necesitamos unas constante que sea =10
    const int numeros=10;
    int enteros[numeros];
    int n_veces[5]={0}; //Nos permitira hacer un conteo de cuantas veces se repite un numero

    cout<<"Ingrese 10 numeros enteros entre 1 - 5: "<<endl;
    //Usamos un bucle para pedir los numeros
    for(int i=0; i<numeros; i++)
    {
        cout<<"Entero "<<i+1<<" :"; cin>>enteros[i];
        //Usamos un bucle while por si el usuario ingresa un numero fuera del rango 1 - 5
        while(enteros[i]<1 || enteros[i]>5)
        {
            cout<<"Rango incorrecto ingrese un numero entre 1 - 5: "<<" ";
            cin>>enteros[i];
        }
        //calculamos cuantas veces se repite cada numero
        n_veces[enteros[i]-1]++;
    }

    //Creamos un bucle para imprimir los resultados
    for(int i=0 ; i<5 ; i++)
    {
        cout<<"El numero "<<i+1<<" aparece "<<n_veces[i]<<" veces "<<endl;
    }
    system("pause");
    return 0;
}