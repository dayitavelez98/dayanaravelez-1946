#include <stdio.h>
#include <iostream>
using namespace std;
main()
{
    int num, M, divisor;
    cout << "Ingrese un valor: ";
    cin >> num;
    cout << "Ingrese el divisor: ";
    cin >> divisor;
    M = num % divisor;
    if (M==0){
        cout << "El numero " << num << " es multiplo de " << divisor;
    }
    num = 0;
}