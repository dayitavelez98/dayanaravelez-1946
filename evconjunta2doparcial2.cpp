/*Proponga el cuerpo de una función que al recibir un array de tipo char; 
identifique si la cadena de caracteres es numérica, alfanumérica o alfabética.
Sugerencia: Use la tabla ASCII para orientación de los tipos de datos.*/
#include <iostream>
#include <cctype>
using namespace std;
void identificarTipoCadena(const char* str) {
    bool esNumerica = true;
    bool esAlfanumerica = true;
    bool esAlfabetica = true;

    for (int i = 0; str[i] != '\0'; i++) {
        if (!isdigit(str[i])) {
            esNumerica = false; 
        }
        if (!isalnum(str[i])) {
            esAlfanumerica = false; 
        }
        if (!isalpha(str[i])) {
            esAlfabetica = false; 
        }
    }

    if (esNumerica) {
        cout << "La cadena es numérica." << endl;
    } else if (esAlfabetica) {
        cout << "La cadena es alfabética." << endl;
    } else if (esAlfanumerica) {
        cout << "La cadena es alfanumérica." << endl;
    } else {
        cout << "La cadena contiene caracteres no clasificados como numéricos, alfabéticos o alfanuméricos." << endl;
    }
}

/*int main() {
    const char* cadena1 = "123456";
    const char* cadena2 = "abc123";
    const char* cadena3 = "abcde";
    identificarTipoCadena(cadena1); 
    identificarTipoCadena(cadena2); 
    identificarTipoCadena(cadena3);  
    return 0;
}*/
