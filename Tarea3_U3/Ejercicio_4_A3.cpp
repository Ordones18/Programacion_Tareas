/*Desarrolla un programa en C++ que permita al usuario ingresar dos matrices cuadradas 
de tamaño nxn (donde n es un número entero positivo ingresado por el usuario). Ambas 
matrices deben ser llenadas únicamente con números enteros pares. Si el usuario intenta 
ingresar un número impar, el programa debe solicitarle que ingrese un número par 
nuevamente. Una vez que ambas matrices estén completamente llenas, el programa 
deberá crear una tercera matriz donde cada elemento es el cubo del elemento 
correspondiente de la primera matriz. Luego, se deberán modificar los elementos de la 
última fila de la segunda matriz multiplicándolos por 2. Finalmente, se mostrarán las tres 
matrices: las dos originales y la resultante. */
#include <iostream>
#include <iomanip> // Para formato de salida
#include <cmath> // Para calcular potencias
using namespace std;
// Funcionn para verificar si el numero es par
bool Par(int num) 
{
    return num % 2 == 0;
}
int main() 
{
    int n;
    cout << "Ingrese el tamano de la matriz cuadrada: "; 
    cin >> n; 
    // Declarar matrices de un tamaño estatico
    int matriz1[n][n]; // Matriz 1
    int matriz2[n][n]; // Matriz 2 ( se multiplicara la ultima fila x2)
    int matrizCubo[n][n]; // Matriz 3 se eleva al cubo
    // Leer elementos de la primera matriz solo pares
    cout << "Ingrese los elementos de la primera matriz solo numeros pares:" << endl;
    for (int i = 0; i < n; i++) //recorrer filas
	{
        for (int j = 0; j < n; j++)  //recorrer columnas
		{
            int num;
            // Solicitar numeros hasta que el usuario ingrese un numero par
            do 
			{
                cout << "Elemento [" << i+1  << "][" << j+1  << "]: ";
                cin >> num;
                if (!Par(num)) 
				{ // Verificar si el numero no es par
                    cout << "El numero debe ser par." << endl;
                }
            } while (!Par(num)); // Repetir hasta que el numero sea par
            matriz1[i][j] = num; // Almacenar el numero en la matriz 1
        }
    }
    // Leer elementos de la segunda matriz solo numeros pares
    cout << "Ingrese los elementos de la segunda matriz solo numeros pares:" << endl;
    for (int i = 0; i < n; i++) //recorrer filas 
	{
        for (int j = 0; j < n; j++) //recorrer columnas
		{
            int num;
            // Solicitar numeros hasta que el usuario ingrese un numero par
            do 
			{
                cout << "Elemento [" << i+1 << "][" << j+1 << "]: ";
                cin >> num;
                if (!Par(num)) 
				{ // Verificar si el numero no es par
                    cout << "El numero debe ser par." << endl;
                }
            } while (!Par(num)); // Repetir hasta que el numero sea par
            matriz2[i][j] = num; // Almacenar el numero en la matriz 2
        }
    }
    // Crear la tercera matriz 
    for (int i = 0; i < n; i++) 
	{
        for (int j = 0; j < n; j++) 
		{
            matrizCubo[i][j] = pow(matriz1[i][j], 3); // Calcular el cubo de cada elemento de la matriz 1
        }
    }
    // Modificar los elementos de la ultima fila de la segunda matriz
    for (int j = 0; j < n; j++) 
	{
        matriz2[n - 1][j] *= 2; // Multiplica por 2 cada elemento de la ultima fila de la matriz 2
    }
    // Imprimir la primera matriz
    cout <<endl<< "Matriz 1:" << endl;
    for (int i = 0; i < n; i++) // Recorre las filas
	{
        for (int j = 0; j < n; j++) // Recorre las columnas
		{
            cout << setw(8) << matriz1[i][j]; // Imprime cada elemento con un formato de 8 espacios con iomanip
        }
        cout << endl; 
    }
    // Imprimir la segunda nueva matriz 
    cout <<endl<< "Matriz 2 multiplicada la ultima fila:" << endl;
    for (int i = 0; i < n; i++) // Recorre las filas
	{
        for (int j = 0; j < n; j++) // Recorre las columnas
		{
            cout << setw(8) << matriz2[i][j]; // Imprime cada elemento con un formato de 8 espacios con iomanip
        }
        cout << endl; 
    }
    // Imprimir la tercera matriz 
    cout <<endl<< "Matriz 3 Cubo de la primera matriz:" << endl;
    for (int i = 0; i < n; i++) // Recorre las filas
	{
        for (int j = 0; j < n; j++) // Recorre las columnas
		{
            cout << setw(8) << matrizCubo[i][j]; // Imprime cada elemento con un formato de 8 espacios  con iomanip
        }
        cout << endl; 
    }
    return 0; 
}
