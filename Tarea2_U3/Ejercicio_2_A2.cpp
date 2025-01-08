/*
Escriba un programa que solicite al usuario ingresar los precios de una lista de
productos en dos tiendas diferentes, almacene los precios en dos vectores y luego
muestra cuál tienda tiene el precio más bajo para cada producto.
*/
#include <iostream> // Biblioteca para entrada y salida
using namespace std; // Para evitar escribir std:: antes de cout, cin, etc.
int main() {
    int productos; // Variable para almacenar la cantidad de productos
    cout << "Hola, vamos a comparar los precios de dos tiendas" << endl;
    // Solicitar al usuario la cantidad de productos
    cout << "Ingresa la cantidad de productos: ";
    cin >> productos;
    // Crear arreglos para almacenar los precios de los productos
    float tienda1[productos], tienda2[productos];
    // Ingresar los precios para la primera tienda

    cout<< "Ingresa los precios para la tienda 1: "<<endl;
    for (int i = 0; i < productos; i++)
    {
        cout << "Precio del producto " << i + 1 << ": ";
        cin >> tienda1[i];
    }
    // Ingresar los precios para la segunda tienda
    cout << "Ingresa los precios para la tienda 2: "<<endl;
    for (int i = 0; i < productos; i++)
    {
        cout << "Precio del producto " << i + 1 << ": ";
        cin >> tienda2[i];
    }
    // Mostrar cuál tienda tiene el precio más bajo para cada producto
    cout<<endl;
    cout << "Precios mas bajos por producto:" << endl;
    for (int i = 0; i < productos; i++) {
        if (tienda1[i] < tienda2[i]) {
            cout << "Producto " << i + 1 << ": Tienda 1" << endl;
        } else if (tienda2[i] < tienda1[i]) {
            cout << "Producto " << i + 1 << ": Tienda 2" << endl;
        } else {
            cout << "Producto " << i + 1 << ": Ambas tiendas tienen el mismo precio" << endl;
        }
    }
    system("pause"); // Pausar el programa antes de cerrarlo (opcional, depende del entorno)
    return 0; // Indicar que el programa finalizó correctamente
}