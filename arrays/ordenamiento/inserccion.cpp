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
int ordenaInserccion(int v[], int n){
    int contar = 0, aux, j;
    for (int i = 1;i < n ; i++){
        aux = v[i];
        j = i - 1;
        while (j >= 0){
            contar ++;
            if (aux < v[j]){
                v[j + 1] = v[j];
                v[j] = aux;
            }
            j--;
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
    comparaciones = ordenaInserccion(vec, ne);
    cout<<"\nVector ordenado: ";
    muestraVector(vec, ne);
    cout << "\n El numeo de comparaciones es: " << comparaciones;

}