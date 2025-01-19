/*Dado un arreglo multidimensional A[m][n] y un escalar k (número entero ingresado por 
teclado), escribe un programa en C++ que multiplique cada elemento del arreglo por k y 
almacene el resultado en un nuevo arreglo B[m][n]; después, cada elemento del arreglo 
B[m][n] elevarlo al cuadrado si es que es par, si no lo es calcular su raíz cuadrada y 
almacenar los resultados en un nuevo arreglo C[m][n]; finalmente mostrar los arreglos A 
(arreglo original) B y C. */
#include <iostream>
#include <cmath> // Biblioteca para funciones matematicas como sqrt y pow
using namespace std;
int main() 
{
    int m, n, k; // declararcion de variables para las dimensiones del arreglo y el escalar
    cout<<"---------------Bienvenido---------------"<<endl;
    cout << "Ingrese el numero de filas para la matriz : "; 
    cin >> m; 
    cout << "Ingrese el numero de columnas para la matriz: ";
    cin >> n; 
    int A[m][n], B[m][n]; // Declaramos el arreglo A y B
    double C[m][n]; // Declaracion del arreglo C como tipo double para manejar raices cuadradas
    // Ingresar elementos del arreglo A
    cout << "Ingrese los elementos del arreglo A[" << m << "][" << n << "]: "<<endl; // Solicitar elementos de A
    for (int i = 0; i < m; i++) // Bucle para recorrer las filas
	{ 
        for (int j = 0; j < n; j++) // Bucle para recorrer las columnas
		{ 
            cout << "A[" << i+1 << "][" << j+1 << "]: "; // Mensaje para ingresar cada elemento ademas vamos mostrando la posicion [1][1] ....
            cin >> A[i][j]; 
        }
    }
    // Solicitar el escalar k
    cout << "Ingrese el escalar k: "; // Mensaje para ingresar el escalar k
    cin >> k; // Leer el escalar k

    // Operaciones para llenar B y C
    for (int i = 0; i < m; i++) // Bucle para recorrer las filas
	{ 
        for (int j = 0; j < n; j++) // Bucle para recorrer las columnas
		{ 
            B[i][j] = A[i][j] * k; // Multiplicar cada elemento de A por k y almacenarlo en B
            if (B[i][j] % 2 == 0) // Verificar si el elemento de B es par
			{ 
                C[i][j] = pow(B[i][j], 2); // Elevar al cuadrado si es par
            } 
			else 
			{
                C[i][j] = sqrt(B[i][j]); // Calcular la raiz cuadrada si es impar
            }
        }
    }
    // Mostrar los arreglos
    cout <<endl<< "Arreglo A (original): "<<endl; // Encabezado para mostrar el arreglo A
    for (int i = 0; i < m; i++) // Bucle para recorrer las filas de A
	{ 
        for (int j = 0; j < n; j++) // Bucle para recorrer las columnas de A
		{ 
            cout << A[i][j] << " "; // Mostrar cada elemento de A
        }
        cout << endl; 
    }
    cout <<endl<< "Arreglo B (multiplicado por k): "<<endl; // Encabezado para mostrar el arreglo B
    for (int i = 0; i < m; i++) // Bucle para recorrer las filas de B
	{ 
        for (int j = 0; j < n; j++) // Bucle para recorrer las columnas de B
		{ 
            cout << B[i][j] << " "; // Mostrar cada elemento de B
        }
        cout << endl;
    }
    cout <<endl<< "Arreglo C resultado final: "<<endl; // Encabezado para mostrar el arreglo C
    for (int i = 0; i < m; i++) // Bucle para recorrer las filas de C
	{ 
        for (int j = 0; j < n; j++) // Bucle para recorrer las columnas de C
		{ 
            cout << C[i][j] << " "; // Mostrar cada elemento de C
        }
        cout << endl; 
    }
    return 0; 
}


