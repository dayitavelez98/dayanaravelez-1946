#include <iostream>
using namespace std;

int suma(int a, int b)
{
    if(b == 0)
        return a;
    else
        return suma(a + 1,b - 1)
}

int  exponencial(int a, int b)
{
    if(b == 0)
        return 1;
    else
        return a * exponencial(a,b - 1);
}
main()
{
    int a, b;
    cout << "Introduce el primer numero: ";
    cin >> a;
    cout << "Introduce el segundo numero: ";
    cin >> b;
    cout << "Suma " << suma(a,b) << endl;
    cout << "El numero " << a << " elevado a " << b << " es: " << exponencial(a,b) << endl;

    
}