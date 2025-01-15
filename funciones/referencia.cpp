#include <iostream>
using namespace std;

void operaciones(floar num1, float num2, float &suma, float &resta, float &multiplicacion, float &division, int &resultado)
{
    suma = num1 + num2;
    resta = num1 - num2;
    multiplicacion = num1 * num2;
    division = num1 / num2;
    resultado = (int)num1 % (int)num2;
}

main()
{
    float a, b, suma, resta, multiplicacion, division;
    int resultado;

    cout << "ingrese el primer numero: ";
    cin >> a;
    cout << "Ingrese el segundo numero: ";
    cin >> b;
    operaciones(a, )
}