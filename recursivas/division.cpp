#include <iostream>
using namespace std;

int calcularDiv(int num, int den, int resultado = 0) {
    if (num < den) {
        return resultado;
    }
    return calcularDiv(num - den, den, resultado + 1);
}

int main() {
    int num, den;
    cout << "Escribe el numerador: ";
    cin >> num;
    cout << "Escribe el denominador: ";
    cin >> den;
    if (den == 0) {
        cout << "Error: no es posible dividir entre cero." << endl;
        return 1;
    }
    int cociente = calcularDivision(num, den);
    cout << "El cociente de " << num << " dividido por " << den << " es: " << cociente << endl;
    return 0;
}