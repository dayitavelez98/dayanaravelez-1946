#include <iostream>
using namespace std;
main(){
    char dia;
    cout << "Ingrese un caracter: ";
    cin >> dia;
    switch (dia){
        case 'L':
        case 'l':
            cout << "Es lunes";
            break;
        case 'M':
        case 'm':
            cout << "Es martes";
            break;
        case 'T':
        case 't':
            cout << "Es miercoles";
            break;
        case 'J':
        case 'j':
            cout << "Es jueves";
            break;
        case 'V':
        case 'v':
            cout << "Es viernes";
            break;
    }
}