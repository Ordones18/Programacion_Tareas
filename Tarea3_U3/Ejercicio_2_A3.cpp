/*Elabora un programa que llene dos matrices de 4 x 4 con números decimales 
proporcionados por el usuario. Luego, sume las dos matrices y el resultado almacénalo en 
una tercera matriz. Imprima las tres matrices. 
Nota: Recuerde que la suma de matrices se realiza de posición a posición.*/
#include <iostream> 
using namespace std;
int matriz1;
int main() 
{
    const int tamano = 4; // Tamano de las matrices 4x4
    double matriz1[tamano][tamano], matriz2[tamano][tamano], result[tamano][tamano]; // Declaracion de las tres matrices
    // Llenar la primera matriz con numeros dados por el usuario
    cout << "Ingrese los elementos de la primera matriz 4x4: "<<endl;
    for (int i = 0; i < tamano; i++) // Bucle para recorrer las filas de la primera matriz
	{ 
        for (int j = 0; j < tamano; j++) // Bucle para recorrer las columnas de la primera matriz
		{ 
            cout << "matriz1[" << i+1 << "][" << j+1 << "]: "; 
            cin >> matriz1[i][j];
        }
    }
    // segunda matriz con numeros proporcionados por el usuario
    cout <<endl<< "Ingrese los elementos de la segunda matriz 4x4: "<<endl;
    for (int i = 0; i < tamano; i++) // Bucle para recorrer las filas de la segunda matriz
	{ 
        for (int j = 0; j < tamano; j++) // Bucle para recorrer las columnas de la segunda matriz
		{ 
            cout << "matriz2[" << i+1 << "][" << j+1 << "]: "; 
            cin >> matriz2[i][j]; 
        }
    }
    // Sumar las dos matrices y almacenar el resultado en la tercera matriz
    for (int i = 0; i < tamano; i++) // Bucle para recorrer las filas de las matrices
	{ 
        for (int j = 0; j < tamano; j++) 
		{
            // Bucle para recorrer las columnas de las matrices
            int matrix2;
            result[i][j] = matriz1[i][j] + matriz2[i][j]; // Sumar los elementos correspondientes y almacenarlos en resultado
        }
    }
    // Mostrar la primera matriz
    cout <<endl<<"Primera matriz: "<<endl;
    for (int i = 0; i < tamano; i++) // Bucle para recorrer las filas de la primera matriz
	{ 
        for (int j = 0; j < tamano; j++) // Bucle para recorrer las columnas de la primera matriz
		{ 
            cout << matriz1[i][j] << " "; // Imprimir cada elemento de la primera matriz
        }
        cout << endl; 
    }
    // Mostrar la segunda matriz
    cout <<endl<< "Segunda matriz: "<<endl;
    for (int i = 0; i < tamano; i++) // Bucle para recorrer las filas de la segunda matriz
	{ 
        for (int j = 0; j < tamano; j++) // Bucle para recorrer las columnas de la segunda matriz
		{ 
            cout << matriz2[i][j] << " "; // Imprimir cada elemento de la segunda matriz
        }
        cout << endl; 
    }
    // Mostrar la matriz resultante
    cout <<endl<< "La suma de las matrices es: "<<endl;
    for (int i = 0; i < tamano; i++) // Bucle para recorrer las filas de la matriz resultante
	{ 
        for (int j = 0; j < tamano; j++) // Bucle para recorrer las columnas de la matriz resultante
		{ 
            cout << result[i][j] << " "; // Imprimir cada elemento de la matriz resultante
        }
        cout << endl; 
    }
    return 0; 
}

