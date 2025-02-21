#include <iostream>
#include <string>
using namespace std;

void reemplazarCadena() {
    string cadenaOriginal;
    string cadenaReemplazo;
    string cadenaBuscar;
    cout << "Ingrese la cadena original: ";
    getline(cin, cadenaOriginal); 
    cout << "Ingrese la cadena a reemplazar: ";
    getline(cin, cadenaBuscar);
    cout << "Ingrese la cadena de reemplazo: ";
    getline(cin, cadenaReemplazo);
    int size = cadenaReemplazo.size();
    int pos = cadenaOriginal.find(cadenaBuscar);
    if (pos != string::npos) {
        cadenaOriginal.replace(pos, 0, cadenaReemplazo.substr(0,size));
        cout << "Cadena despues del reemplazo: " << cadenaOriginal << endl;
    } else {
        cout << "La cadena a reemplazar no fue encontrada." << endl;
    }
}

int main() {
    reemplazarCadena();
    return 0;
} 