#include <iostream>
using namespace std;
int main() {
    int numero;
    cout << "Introduce un número: ";
    cin >> numero;
    (numero > 0) ? cout << "El número es positivo." << endl :
    (numero < 0) ? cout << "El número es negativo." << endl :
    cout << "El número es cero." << endl;
    return 0;
}