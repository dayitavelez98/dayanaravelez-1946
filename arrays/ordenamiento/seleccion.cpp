#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

void llenaVector(int v[], int n){
    srand(time(NULL));
    for (int i = 0;i < n;i++){
        v[i] = rand()%20+1;
        //cin >> v[i];
    }
}

void muestraVector(int v[], int n){
    for(int i = 0;i < n; i++){
        cout << v[i] << " ";
    }
}
int ordenaSeleccion(int v[], int n){
    int contar = 0, aux;
    for (int i = 0;i < n - 1; i++){
        for(int j = i + 1; j < n ; j++){
            contar ++;
            if (v[i] > v[j]){
                aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
        }
    }
    return contar;
}

int ordenaSeleccion2(int v[], int n){
    int contar = 0, aux;
    bool cambio = true;
    for (int i = 0;i < n - 1 && cambio ; i++){
        cambio = false;
        for(int j = i + 1; j < n ; j++){
            contar ++;
            if (v[i] > v[j]){
                aux = v[i];
                v[i] = v[j];
                v[j] = aux;
                cambio = true;
            }
        }
    }
    return contar;
}

main(){
    int ne, comparaciones, comparaciones2; 
    cout << "Ingrese numero de elementos: ";
    cin >> ne;
    int vec[ne];
    llenaVector(vec, ne);
    cout << "Vector original: ";
    muestraVector(vec, ne);
    comparaciones = ordenaSeleccion(vec, ne);
    comparaciones2 = ordenaSeleccion2(vec, ne);
    cout<<"\nVector ordenado: ";
    muestraVector(vec, ne);
    cout << "\n El numeo de comparaciones es: " << comparaciones;
    cout << "\n El numeo de comparaciones es: " << comparaciones2;

}