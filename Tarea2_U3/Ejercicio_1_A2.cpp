/*
Escriba un programa que solicite al usuario ingresar las calificaciones de dos materias
para un grupo de estudiantes, almacene las calificaciones en dos vectores y luego
muestre la diferencia de calificaciones entre las dos materias para cada estudiante.
*/
#include <iostream> // Biblioteca para entrada y salida
using namespace std; // Para evitar escribir std:: antes de cout, cin, etc.
int main() {
    int estudiantes; // Variable para almacenar la cantidad de estudiantes
    string materia1, materia2; // Variables para almacenar los nombres de las materias
    cout << "Hola, vamos a comparar las notas de dos materias" << endl;
    // Solicitar al usuario la cantidad de estudiantes
    cout << "Ingresa la cantidad de estudiantes: ";
    cin >> estudiantes;
    // Crear arreglos para almacenar las notas de las dos materias
    float nota1[estudiantes], nota2[estudiantes];
    // Solicitar los nombres de las materias
    cout << "Ingresa el nombre de la materia 1: ";
    cin >> materia1;
    cout << "Ingresa el nombre de la materia 2: ";
    cin >> materia2;
    // Ingresar las notas para la primera materia
    cout<<endl;
    cout<< "Ingresa las notas para " << materia1 << ": "<<endl;
    for (int i = 0; i < estudiantes; i++)
    {
        cout << "Nota del estudiante " << i + 1 << ": ";
        cin >> nota1[i];
    }
    // Ingresar las notas para la segunda materia
    cout << "Ingresa las notas para " << materia2 << ": "<<endl;
    for (int i = 0; i < estudiantes; i++)
    {
        cout << "Nota del estudiante " << i + 1 << ": ";
        cin >> nota2[i];
    }
    // Mostrar la diferencia de calificaciones entre las dos materias
    cout<<endl;
    cout << "Diferencia de notas entre " << materia1 << " y " << materia2 << ":" << endl;
    for (int i = 0; i < estudiantes; i++) {
        float diferencia = nota1[i] - nota2[i];
        cout << "Estudiante " << i + 1 << ": " << diferencia << endl;
    }
    system("pause");
    return 0;
}
