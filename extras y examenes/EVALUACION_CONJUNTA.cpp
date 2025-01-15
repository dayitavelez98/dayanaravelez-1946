#include <iostream>
using namespace std;
main(){
    int n = 2, d = 1, x, nt = 0;
    cout << "Ingrese el numero de terminos que desea ingresar: ";
    cin >> nt;
    nt = n/d;
    n = n + d;
    d = d + 2;
    if (nt % 2 == 0){
        x  = ((n/d)-(n/d)+(n/d)-(n/d)+(n/d));
        cout << x;
    } else { 
        x = ((2/1)-(3/3)+(6/5)-(11/7)-((n+d)/d+2));
        cout << x;
    }
}
