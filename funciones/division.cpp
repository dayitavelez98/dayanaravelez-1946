#include <iostream>
using namespace std;

int dividir(int a, int b, int &cociente){
    if ( b == 0 )
        return -1;
    if ( a < b )
        return a;
    else {
        cociente ++;
        return dividir (a - b, b , cociente);
    }
}

int main (){
    int dividendo, divisor, cociente = 0 , residuo = 0;
    cout << "Ingrese el valor del dividendo: ";
    cin >> dividendo;
    cout << "Ingrese el valor del divisor: ";
    cin >> divisor;
    residuo = dividir(dividendo, divisor, cociente);
        if (residuo == -1)
                cout << "No se puede dividir por cero";
        else{
                cout << "El residuo es: " << residuo << endl;
                cout << "El cociente es: " << cociente << endl;
        }
}