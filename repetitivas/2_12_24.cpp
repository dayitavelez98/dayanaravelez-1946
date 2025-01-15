//estructutras selcetivas repetitivas
#include <iostream>
using namespace std;
main(){
    int n, datos, contador, s;
    cout << "Cuantos datos desea ingresar: ";
    cin >> n;
    contador = 0;
    s = 0;
    while (contador<n){
        cout << "Ingrese el valor: ";
        cin >> datos;
        contador++;
        s = s + datos;
    }
    cout << "La suma de los "<<n<< " valores es igual a "<<s << endl;
}