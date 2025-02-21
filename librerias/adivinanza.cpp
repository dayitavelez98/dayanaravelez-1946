#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "arrays.h"
using namespace std;
using namespace vectorn;


int main(){
	srand(time(0));

    int min, max, cantidad;
    cout << "Ingresa el valor minimo del rango: ";
    cin >> min;
    cout << "Ingresa el valor maximo del rango: ";
    cin >> max;
    cout << "Ingresa la cantidad de numeros del rango a generar: ";
    cin >> cantidad;
	int numeros[cantidad];
    llenarVectorn(numeros, cantidad, min, max);
	cout << "Los numeros del rango generados son: "<< endl;
    for (int i = 0; i < cantidad; i++) {
        cout << numeros[i] << " ";
    }
    cout << "\n";
    int numeroElegido = numeros[rand() % cantidad];
    int intento;
    cout << "Adivina el numero que la maquina ha elegido: ";
    while (cin >> intento) {
        if (intento == numeroElegido) {
            cout << "Has adivinado el numero.\n";
            break;
        } else if (intento < numeroElegido) {
            cout << "El numero es mayor que " << intento << "\n";
        } else {
            cout << "El numero es menor que " << intento << "\n";
        }
        cout << "Intenta de nuevo: ";
    }
    return 0;
}
