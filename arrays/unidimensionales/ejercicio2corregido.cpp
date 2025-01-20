#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

void llenaDatos(float v[], int ne) {
    srand(time(NULL));
    for (int i = 0; i < ne; i++) {
        v[i] = (rand() % 50 + 50) + (rand() % 100) / 100.0; // Generar números entre 50 y 99 con decimales
    }
}

void verDatos(float v[], int ne) {
    cout << "Los elementos del vector son: " << endl;
    for (int i = 0; i < ne; i++) {
        cout << v[i] << "  ";
    }
}

float sumapromedioCifras(float v[], int ne) {
    float suma = 0;
    for (int i = 0; i < ne; i++) {
        suma += v[i];
    }
    return suma / ne;
}

int contarDebajoPromedio(float v[], int ne, float promedio) {
    int contar = 0;
    for (int i = 0; i < ne; i++) {
        if (v[i] < promedio) {
            contar++;
        }
    }
    return contar;
}

void guardaElementosMenores(float v[], int ne, float promedio, float lista[]) {
    int j = 0;
    for (int i = 0; i < ne; i++) {
        if (v[i] < promedio) {
            lista[j] = v[i];
            j++;
        }
    }
}

int main() {
    int ne, menores;
    float promedioNumeros;
    cout << "Cuantos elementos tiene el vector?: " << endl;
    cin >> ne;
    float vector[ne];
    llenaDatos(vector, ne);
    verDatos(vector, ne);
    promedioNumeros = sumapromedioCifras(vector, ne);
    cout << "\nEl promedio de los datos generados es: " << promedioNumeros << endl;
    menores = contarDebajoPromedio(vector, ne, promedioNumeros);
    cout << "La cantidad de elementos debajo del promedio son " << menores << endl;
    float listaMenores[menores];
    guardaElementosMenores(vector, ne, promedioNumeros, listaMenores);
    verDatos(listaMenores, menores);
    return 0;
}