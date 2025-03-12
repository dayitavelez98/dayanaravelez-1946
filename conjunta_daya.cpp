
string ordenarPorLongitud(const string& cadena) {
    
    string palabra = "";
    string resultado = "";
    string palabras[100]; 
    int count = 0;

    for (int i = 0; i <= cadena.length(); i++) {
        if (i == cadena.length() || cadena[i] == ' ') {
            if (palabra != "") {
                palabras[count++] = palabra;
                palabra = "";
            }
        } else {
            palabra += cadena[i];
        }
    }
    for (int i = 0; i < count - 1; i++) {
        for (int j = i + 1; j < count; j++) {
            if (palabras[i].length() < palabras[j].length()) {
                string temp = palabras[i];
                palabras[i] = palabras[j];
                palabras[j] = temp;
            }
        }
    }
    for (int i = 0; i < count; i++) {
        resultado += palabras[i];
        if (i != count - 1) {
            resultado += " ";
        }
    }

    return resultado;
}
