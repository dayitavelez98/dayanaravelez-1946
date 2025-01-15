#include <iostream>
using namespace std;
main (){
    int a, b, c;
    cout << "ingrese el valor 1:\n";
    cin >> a;
    cout << "ingrese el valor 2:\n";
    cin >> b;
    cout << "ingrese el valor 3:\n";
    cin >> c;
    if(a > b && a > c){
            cout << "el mayor es:\n" << a << endl;
        }else if (b > a && b > c){ /*(c>a && c>b)*/
            cout << "el mayor es:\n" << b << endl;
        }else if(c > a && c > b){
            cout << "El mayor es:\n" << c << endl;
        }else if (a > b || a > c){
            cout << "el mayor es:\n" << a << endl;
        }else{
                cout << "Todos son iguales" << endl;
        }
}