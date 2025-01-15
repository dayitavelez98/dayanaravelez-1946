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
    if (a > b){
        if (a > c){
            cout << "el mayor es: " << a << endl;
        }
        else{
            cout << "el mayor es: " << c << endl;
        }
    }
    else{
        if (b > c){
            cout << "el mayor es: " << b << endl;
        }
        else{
            if (c > a){
                cout << "el mayor es: " << c << endl;
            }
            else{
                cout << "son iguales" << endl;
            }
        }
    }
}

