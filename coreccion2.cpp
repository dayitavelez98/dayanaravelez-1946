#include <iostream>
using namespace std;
enum TipoCadena { NUMERICA, ALFABETICA, ALFANUMERICA, VACIA };
TipoCadena identificarCadena(const char* cadena) {
    bool tieneLetras = false, tieneNumeros = false;
    if (cadena[0] == '\0')
        return VACIA;
    for (int i = 0; cadena[i] != '\0'; i++) {
        char c = cadena[i];
        if (c >= 48 && c <= 57) {
            tieneNumeros = true;
        } 
        else if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122)) {
            tieneLetras = true;
        } 
        else {
            return ALFANUMERICA;
        }
        if (tieneLetras && tieneNumeros) return ALFANUMERICA;
    }
    if (tieneLetras) return ALFABETICA;
    if (tieneNumeros) return NUMERICA;
    return ALFANUMERICA; 
}
