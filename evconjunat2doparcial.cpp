#include <iostream>
#include <string>
using namespace std;

int main() {
    int valor;
    cout << "Introduce un valor entre 1 y 20: ";
    cin >> valor;

    if (valor < 1 || valor > 20) {
        cout << "Valor fuera de rango." << endl;
        return 1;
    }

    // Definir las categorías como un arreglo de cadenas
    string categorias[] = {
        "Deficiente", "Deficiente", "Deficiente", "Deficiente", "Deficiente",
        "Regular", "Regular", "Regular", "Regular", "Regular",
        "Bueno", "Bueno", "Bueno", "Bueno", "Bueno",
        "Muy bueno", "Muy bueno", "Muy bueno", "Excelente", "Excelente", "Excelente"
    };

    // Imprimir la categoría correspondiente
    cout << "Categoría: " << categorias[valor - 1] << endl;

    return 0;
}
