/*Desarrolla un programa en C++ que permita al usuario ingresar los elementos de una matriz 
cuadrada de tamaño nxn, (donde n es un número entero positivo ingresado por el 
usuario). Una vez que se han ingresado todos los elementos de la matriz, el programa debe 
buscar el número entero mayor dentro de la matriz. Luego, utilizando ese número, se 
generará y mostrará su tabla de multiplicar hasta el 12. */
#include <iostream>
#include <iomanip> // Para formato de salida
using namespace std;
int main() 
{
    int n; // Variable para el tamano de la matriz
    cout << "Ingrese el tamano de la matriz cuadrada: "; 
    cin >> n; 
    int matriz[n][n]; // creamos la matriz de tamaño estatico
    // Solicitar elementos de la matriz
    cout << "Ingrese los elementos de la matriz (" << n << " x " << n << "):" << endl;
    for (int i = 0; i < n; i++) // Recorrer filas de la matriz
	{ 
        for (int j = 0; j < n; j++) // Recorrer columnas de la matriz
		{ 
            cout << "Elemento [" << i+1 << "][" << j+1 << "]: "; // Solicitar cada elemento
            cin >> matriz[i][j]; // leer el valor del elemento
        }
    }
    int mayor = matriz[0][0]; // Inicializar la variable mayor con el primer elemento de la matriz
    // Buscar el numero mayor en la matriz
    for (int i = 0; i < n; i++) // Recorrer filas
	{ 
        for (int j = 0; j < n; j++) // Recorrer columnas
		{ 
            if (matriz[i][j] > mayor) // Si el elemento actual es mayor que el mayor encontrado hasta ahora
			{ 
                mayor = matriz[i][j]; // Actualizar el numero mayor
            }
        }
    }
    // Mostrar la matriz ingresada
    cout << endl << "La matriz ingresada es: " << endl;
    for (int i = 0; i < n; i++) // Recorrer filas
	{ 
        for (int j = 0; j < n; j++) // Recorrer columnas
		{ 
            cout << setw(5) << matriz[i][j]; // Mostrar cada elemento con formato setw con la libreria iomanip
        }
        cout << endl; 
    }
    // Mostrar el numero mayor encontrado en la matriz
    cout << endl << "El numero mayor en la matriz es: " << mayor << endl;
    // Imprimir la tabla de multiplicar del numero mayor
    cout << endl << "Tabla de multiplicar del numero " << mayor << ": " << endl;
    for (int i = 1; i <= 12; i++) // Generar tabla hasta el 12
	{ 
        cout << mayor << " x " << i << " = " << mayor * i << endl; 
    }
    return 0; 
}
