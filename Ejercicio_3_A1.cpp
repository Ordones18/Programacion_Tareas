/*
Crea un programa que solicite al usuario ingresar 10 números enteros en un vector.
Calcula la media de los valores y luego, usando un bucle, calcula la desviación
estándar de los valores. Muestra la media y la desviación estándar.
*/
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    const int n_veces = 10;
    int numeros[n_veces];
    double suma = 0, media, varianza = 0;
    // Solicitar numeros
    cout << "Ingrese 10 numeros enteros:" << endl;
    for (int i = 0; i < n_veces; ++i)
    {
        cout<<"Numero "<<i+1<<endl; cin >> numeros[i];
        suma += numeros[i];
    }
    // Calcular media
    media = suma / n_veces;
    // Calcular varianza
    for (int i = 0; i < n_veces; ++i) {
        varianza += pow(numeros[i] - media, 2);
    }
    varianza /= n_veces;
    // Calcular desviacion estandar
    double desviacion_estandar = sqrt(varianza);
    // Mostrar resultados
    cout << "La media es: " << media << endl;
    cout << "La desviacion estandar es: " << desviacion_estandar << endl;
    return 0;
}