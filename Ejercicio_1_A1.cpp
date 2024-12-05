/*
Escribe un programa que solicite al usuario ingresar las calificaciones de 20 estudiantes
en un vector. Usa un bucle para determinar cuántos estudiantes obtuvieron una
calificación de 0 a 5, de 6 a 8, y de 9 a 10. Al final, muestra el total de estudiantes en
cada rango.
*/
#include<iostream>
using namespace std;

int main()
{
    const int estudiantes=20;
    int calificaciones[estudiantes];
    int nota1=0, nota2=0, nota3=0, notas_invalidas=0;
    cout<<"***Bienvenido, vamos a calcular las notas de tus estudiantes***"<<endl;
    cout<<"Ingresa las calificaciones de 20 estudiantes en un rango de 0 - 10:"<<endl;

    for(int i=1;i<=estudiantes;i++)
    {
        cout<<"Estudiante "<<i<<endl; ; cin>>calificaciones[i];
    }
    for(int i=0;i<=estudiantes;i++)
    {
        if (calificaciones[i]>=0 && calificaciones[i]<=5)
        {
            nota1++;
        }
        else if (calificaciones[i]>=6 && calificaciones[i]<=8)
        {
            nota2++;
        }
        else if (calificaciones[i]>=9 && calificaciones[i]<=10)
        {
            nota3++;
        }
        else if (calificaciones[i]>=11)
        {
            notas_invalidas++;
        }
    }
    cout<<"Los estudiantes con calificaciones de 0 - 5 son: "<<nota1<<endl;
    cout<<"Los estudiantes con calificaciones de 6 - 8 son: "<<nota2<<endl;
    cout<<"Los estudiantes con calificaciones de 9 - 10 son: "<<nota3<<endl;
    cout<<"Ingresaste " << notas_invalidas<<" notas invalidas fuera del rango"<<endl;
return 0;
}
