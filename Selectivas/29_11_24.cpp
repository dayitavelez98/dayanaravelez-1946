#include <iostream>
using namespace std;
main(){
    int n1, n2, result;
    char operacion;
    cout << "Ingrese el primer valor: ";
    cin >> n1;
    cout << "Ingrese el segundo valor: ";
    cin >> n2;
    cout << "Que operacion desea realizar: "<<endl<<"suma (+)"<<endl<<"resta(-)"<<endl<<"multiplicacion (*)"<<endl<<"division (/)"<<endl;
    cin >> operacion;
    switch(operacion){
        case '+':
                result = n1 + n2;
                cout << "El valor de la suma es: ";
                cout << result;
                break; 
        case '-':
                result= n1 - n2;
                cout << "El valor de la resta es: ";
                cout << result;
                break; 
        case '*':
                result = n1 * n2;
                cout << "El valor de la multiplicacion es: ";
                cout << result;
                break; 
        case '/':
                if (n2==0) {
                    cout << "No se puede realizar una division con un numerador de valor 0";
                } else {
                    result = n1 / n2;
                cout << "El valor de la division es: ";
                cout << result;
                }
                break; 
        default : 
                cout << "Caracter no valido.";
    }
}