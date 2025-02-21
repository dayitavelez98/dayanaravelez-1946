#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "arrays.h"
using namespace std;

void generarNumeros(int numeros[], int cantidad, int min, int max) {
    for (int i = 0; i < cantidad; i++) {
        numeros[i] = min + rand() % (max - min + 1);
    }
    for (int i = 0; i < cantidad - 1; i++) {
        for (int j = 0; j < cantidad - i - 1; j++) {
            if (numeros[j] > numeros[j + 1]) {
                int temp = numeros[j];
                numeros[j] = numeros[j + 1];
                numeros[j + 1] = temp;
            }
        }
    }
}

int main() {
    srand(time(0));

    int min, max, cantidad;
    cout << "Ingresa el valor minimo del rango: ";
    cin >> min;
    cout << "Ingresa el valor maximo del rango: ";
    cin >> max;
    cout << "Ingresa la cantidad de numeros a generar: ";
    cin >> cantidad;

    int numeros[cantidad];
    generarNumeros(numeros, cantidad, min, max);


    int numeroElegido = numeros[rand() % cantidad];
    int intento;
    cout << "Adivina el numero que la maquina ha elegido: ";
    while (cin >> intento) {
        if (intento == numeroElegido) {
            cout << "Felicidades! Has adivinado el numero.\n";
            break;
        } else if (intento < numeroElegido) {
            cout << "El numero es mayor que " << intento << "\n";
        } else {
            cout << "El numero es menor que " << intento << "\n";
        }
        cout << "Intenta de nuevo: ";
    }
    
    cout << "Los numeros generados (ordenados) son: ";
    for (int i = 0; i < cantidad; i++) {
        cout << numeros[i] << " ";
    }
    cout << "\n";
    return 0;
}
