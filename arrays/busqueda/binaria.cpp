#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "../ordenamiento/burbuja.cpp"
#include "../librerias/arrays.h"
using namespace std;
void insercionOrden(int v[], int n) {
    for (int i = 1; i < n; i++) {
        int aux = v[i];
        int j = i - 1;
        while (j >= 0 && v[j] > aux) {
            v[j + 1] = v[j];
            j--;
        }
        v[j + 1] = aux;
    }
}

/*void llenaDatos(int v[], int n) {
    srand(time(NULL));
    for (int i = 0; i < n; i++) {
        v[i] = rand() % 20 + 1;
    }
    insercionOrden(v, n);
    cout << "Array ordenado: ";
    for (int i = 0; i < n; i++) {
        cout << v[i] << "\t";
    }
}*/

void llenar(int v[], int n, int ri = 0, int rs = 10){
        srand(time(NULL));
        for (int i = 0;i < n;i++){
        v[i] = rand()%(rs - ri +1)+ri;
        //v[i] = ri + rand()%(rs+1 - ri)
        }
    }

bool encontrarBinaria(int v[], int n, int elemento) {
    int Iabajo = 0, Iarriba = n - 1, Icentro;
    while (Iabajo <= Iarriba) {
        Icentro = (Iabajo + Iarriba) / 2;
        if (v[Icentro] == elemento) {
            return true;
        }
        else if (v[Icentro] < elemento) {
            Iabajo = Icentro + 1;
        }
        else {
            Iarriba = Icentro - 1;
        }
    }
    return false;
}

int main() {
    int ne, dato;
    cout << "\nNro de Elementos del Array: ";
    cin >> ne;
    int vector[ne];
    llenar(vector, ne);
    cout << "\nIngrese el dato a buscar: ";
    cin >> dato;
    (encontrarBinaria(vector, ne, dato)) ? cout << "El elemento esta en el array" : cout << "El elemento no existe";
    return 0;
}