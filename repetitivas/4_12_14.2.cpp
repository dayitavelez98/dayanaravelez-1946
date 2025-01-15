#include <iostream>
using namespace std;
main(){
    float Inferior, Superior;
    float num;
    float suma = 0;
    int fueraIntervalo = 0;
    bool limiteIgual = false;
while (Inferior >= Superior) {
        cout << "El límite inferior debe ser menor que el superior. Inténtalo de nuevo." << endl;
        cout << "Introduce el límite inferior: ";
        cin >> Inferior;
        cout << "Introduce el límite superior: ";
        cin >> Superior;
    }
    while (true) {
        cout << "Introduce un número (0 para terminar): ";
        cin >> num;
        if (num == 0) {
            break;
        }
        if (num > Inferior && num < Superior) {
            suma += num;
        } else {
            fueraIntervalo++;
        }
        if (num == Inferior || num == Superior) {
            limiteIgual = true;
        }
    }
    cout << "La suma de los números dentro del intervalo (excluyendo los límites) es: " << suma << endl;
    cout << "Cantidad de números fuera del intervalo: " << fueraIntervalo << endl;
    if (limiteIgual) {
        cout << "Se ha introducido un número igual a uno de los límites." << endl;
    } else {
        cout << "No se ha introducido ningún número igual a los límites." << endl;
    }
}