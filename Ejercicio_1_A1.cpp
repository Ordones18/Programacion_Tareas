/*
Escribe un programa que solicite al usuario ingresar las calificaciones de 20 estudiantes
en un vector. Usa un bucle para determinar cuantos estudiantes obtuvieron una
calificacion de 0 a 5, de 6 a 8, y de 9 a 10. Al final, muestra el total de estudiantes en
cada rango.
*/
#include<iostream>
using namespace std;
int main()
{
    //declaramos las variables que vamos a necesitar
    const int estudiantes=20;
    float calificaciones[estudiantes];
    int nota1=0, nota2=0, nota3=0, notas_invalidas=0; //iniciamos en 0 por que aquí vamos almacenar los rangos de 0-5 6-8 9-10 o si esta fuera del rango
    //Pedimos al usuario ingresar las notas
    cout<<"***Bienvenido, vamos a calcular las notas de tus estudiantes**" <<endl;
    cout<<"Ingresa las calificaciones de 20 estudiantes en rango de 0 - 10:" <<endl;
    //Iniciamos el bucle para pedir las notas
    for(int i=0; i<estudiantes; i++)
    {
        cout<<"Estudiante "<<i+1<<" : "; cin>>calificaciones[i];
    }
    //Iniciamos un bucle para saber en que rango estan las notas
    for(int i=0; i<estudiantes; i++)
    {
        //Vamos a determinar los rangos con un if y else if
        if(calificaciones[i]>=0 && calificaciones[i]<=5)
        {
            nota1++; //almacenamos en nota1 el rango 0-5
        }
        else if(calificaciones[i]>=6 && calificaciones[i]<=8)
        {
            nota2++; //almancenamos en nota2 el rango 6-8
        }
        else if(calificaciones[i]>=9 && calificaciones[i]<=10)
        {
            nota3++; //almancenamos en nota2 el rango 9-10
        }
        else if(calificaciones[i]>=11)
        {
            notas_invalidas++; //almacenamos las notas fuera del rango para informar al usuario
        }
    }
    //Imprimimos los resultados
    cout<<"Los estudiantes con calificaciones de 0 - 5 son: "<<nota1<<endl;
    cout<<"Los estudiantes con calificaciones de 6 - 8 son: "<<nota2<<endl;
    cout<<"Los estudiantes con calificaciones de 9 - 10 son: "<<nota3<<endl;
    cout<<"Ingresaste "<<notas_invalidas<<" notas invalidas fuera del rango"<<endl;
    system("pause");
    return 0;
}