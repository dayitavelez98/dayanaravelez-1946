//uso de operadores de incremento y decremento
#include <iostream>
using namespace std;
main(){
    int n1 = 10, n2 = 20, resultado;
    n1++;//n1 = n1 +1
    ++n2;//n2 = n2 + 1
    cout << "n1 va a ser igual a: "<< n1 << endl;
    cout << "n2 va a ser igual a: "<< n2 << endl;
    //operaciones de preincremento
    resultado = ++n1;
    cout << "El resultado va a ser igual a:" << resultado << endl;
    resultado = n2++;
    cout << "n2 <= " << n2 << endl;
    cout << "El resultado va a ser igual a:" << resultado << endl;
}