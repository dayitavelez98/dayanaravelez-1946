//https://github.com/dayitavelez98/dayanaravelez-1946
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

void llenaVector(int v[], int n) {
    srand(time(NULL));
    for (int i = 0; i < n; i++) {
         v[i] = rand() % 20 + 1;
        //cin >> v[i];
    }
}

int ordenaBurbujav1(int v[], int n) {
    int aux, contador = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - 1; j++) {
            contador++;
            if (v[j] > v[j + 1]) {
                aux = v[j];
                v[j] = v[j + 1];
                v[j + 1] = aux;
            }
        }
    }
    return contador;
}

int ordenaBurbujav2(int v[], int n) {
    int mejora = 1;
    int aux, contador = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - mejora; j++) {
            contador++;
            if (v[j] > v[j + 1]) {
                aux = v[j];
                v[j] = v[j + 1];
                v[j + 1] = aux;
            }
        }
        mejora++;
    }
    return contador;
}

int ordenaBurbujav3(int v[], int n){
    int aux, contador = 0, mejora = 1;
    bool cambio=true;
    for (int i = 0; i < n && cambio;i++){
    cambio=false;
        for (int j = 0; j < n-mejora; j++){
            contador++;
            if (v[j] > v[j+1]){
                aux = v[j];
                v[j]=v[j+1];
                v[j+1] = aux;
                cambio=true;
            }
        }
        mejora++;
    }
    return contador;
}

void muestraVector(int v[], int n) {
    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
}

void copiaVector(int origen[], int destino[], int n) {
    for (int i = 0; i < n; i++) {
        destino[i] = origen[i];
    }
}

int main() {
    int ne;
    cout << "Numero de elementos: ";
    cin >> ne;
    int vec[ne], copia[ne];
    llenaVector(vec, ne);
    cout << "Vector original: " << endl;
    muestraVector(vec, ne);
    cout << endl;
    copiaVector(vec, copia, ne);
    cout <<endl<< "El numero de comparaciones burbujas version 1 es igual: " << ordenaBurbujav1(copia, ne) << endl;
    cout <<endl<< "El numero de comparaciones burbujas version 2 es igual: " << ordenaBurbujav2(copia, ne) << endl;
    cout <<endl<< "El numero de comparaciones burbujas version 3 es igual: " << ordenaBurbujav3(copia, ne) << endl;
    cout << "Vector ordenado con la ultima version: " << endl;
    muestraVector(copia, ne);

    return 0;
}
