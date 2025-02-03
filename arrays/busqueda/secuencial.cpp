#include <iostream>
using namespace std;
bool isEncontrado(int v[], int n, int elemento){
    bool encontrado = false;
    for (int i = 0; i < n ;i++){
        if (v[i] == elemento){
            /*encontrado = true;
            break;*/
            return true;
        }
    }
    return false;
}
void llenaDatos(int v[], int n){
    for (int i = 0; i < n ;i++){
        v[i]=(i+1)*3;
    }
}
void verElemento(int v[], int n){
    for (int i = 0; i < n ;i++){
        cout << v[i] << "\t";
    }
}
main(){
    int vector[5], dato;
    llenaDatos(vector , 5);
    cout << "Ingresa el dato a buscar: ";
    cin >> dato;
    (isEncontrado(vector, 5, dato))?cout << "El elemento esta en el array" : cout << "Es un elemento no existente";
}