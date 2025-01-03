/*
Crea un programa que solicite al usuario ingresar 10 números enteros en un vector.
Calcula la media de los valores y luego, usando un bucle, calcula la desviación
estándar de los valores. Muestra la media y la desviación estándar.
*/
#include<iostream>
#include<cmath> //para usar pow
using namespace std;
int main()
{
    //declaramos las variables
    //necesitamos una constante que sea =10
    const int n_veces=10;
    int numeros[n_veces];
    double suma=0, media, varianza=0; //Necesitamos declarar varianza en 0 por que e necesario para calcular la desviacion estandar
    //solicitamos al usuario ingresar los numeros
    cout<<"Ingrese 10 numeros enteros: "<<endl;
    //Iniciamos un bucle para ingresar los 10 numeros
    for(int i=0; i<n_veces; i++)
    {
        cout<<"Numero "<<i+1<<" : "; cin>> numeros[i];
        //hacemos la operacion de la suma de los numeros ingresados
        suma+= numeros[i];
    }
    //calculamos la media
    media= suma/ n_veces;
    //calculamos la varianza necesaria para calcular la desviacion estandar
    //iniciamos un bucle
    for(int i=0 ; i < n_veces; i++)
    {
        varianza+= pow(numeros[i]-media, 2); //usamos pow para usar la formula de la varianza
    }
    varianza /= n_veces;
    //Calculamos la desviacion estandar
    double desviacion_estandar = sqrt(varianza);
    //Imprimimos los resultados
    cout<<"La media es: "<< media<<endl;
    cout<<"La desviacion estandar es: "<< desviacion_estandar <<endl;
    system("pause");
    return 0;
}