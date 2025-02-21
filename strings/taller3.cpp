#include <iostream>
using namespace std;
int main(){
    /*int original ,reemplazo;
    cout << "Ingrese cadena original: " << endl;
    cin >> original;
    cout << "Ingrese cadena de reemplazo: " << endl;
    cin >> reemplazo;*/
    string cadena1 {"Juan es mi amigo"};
    string objetivo {"Juan es mi pana"};
    string porcion {"A Juan le dicen Pepe"};
    cout << cadena1 << endl;
    int size = porcion.size();
    int pos = cadena1.find("Juan es mi pana");
    if (pos != std::string::npos)
        cadena1.replace(pos, size, porcion.substr(0, size));
    cout << cadena1 << endl;
}