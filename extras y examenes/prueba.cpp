#include <iostream>
using namespace std;
main(){
    int n1, n2, n3, ax;
    cout << "Ingrese n1: ";
    cin >> n1;
    cout << "Ingrese n2: ";
    cin >> n2;
    cout << "Ingrese n3: ";
    cin >> n3;
    cout <<"Los valores originales son: n1= "<<n1<<", n2= "<<n2<< " y n3= "<<n3<<endl;
    ax = n3;
    n3 = n2;
    n2 = n1;
    n1 = ax;
    cout << "Los valores ahora son: "<<endl;
    cout << "n1 = "<<n1<<endl;
    cout << "n2 = "<<n2<<endl;
    cout << "n3 = "<<n3<<endl;
}