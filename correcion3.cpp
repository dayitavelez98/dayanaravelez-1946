#include <iostream>
using namespace std;

int main() {
    int valor;
    cout << "Ingrese un numero entre 1 y 20: ";
    cin >> valor;

    const char* categoria = 
        (valor >= 1 && valor <= 5) ? "Deficiente" :
        (valor >= 6 && valor <= 10) ? "Regular" :
        (valor >= 11 && valor <= 15) ? "Bueno" :
        (valor >= 16 && valor <= 18) ? "Muy Bueno" :
        (valor > 18 && valor <= 20) ? "Excelente" :
        "Valor fuera de rango";

    cout << "La categoria es: " << categoria << endl;
    
    return 0;
}
