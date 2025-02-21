#include <iostream>
using namespace std;
int main(){
    string cadena = "\ninformatica";
    cadena.clear();
    cout << cadena; //No muestra nada
    cadena = "informatica";
    cout << "La cadena " << cadena << " tiene " << cadena.length() << endl;
    cout << "Primer caracter: " << cadena.front() << endl; // Igual que cadena[0]
    cout << "Ultimo caracter: " << cadena.back() << endl; // Igual que cadena[[cadena.length()-1]]
    cadena.append(" moderna"); //Igual que cadena += "moderna"
    cout << cadena << endl;
    char car = '0';
    cadena.append(1, car);
    cout << cadena << endl;
    cadena = "informatica";
    if(cadena.find("1")!=-1)
        cout << "Posicion del primer caracter i: " << cadena.find("i") << endl;
    cout << "Posicion del segundo caracter i: " << cadena.find("i" , 1) << endl;
    string subcad;
    subcad = cadena.substr(2,3);
    cout << subcad << endl;
    subcad = cadena.substr(5);
    cout << subcad << endl;

    cadena.replace(6,5,"acion");
    cout << cadena << endl;
    return 0;
}