#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;
struct Articulo {
    string nombre;
    double precio;
    int cantidad[4]; 
};

void leerDatos(vector<Articulo>& articulos) {
    ifstream archivo("ejercicios.txt"); 
    string linea;
    string id, nombre, sucursal;
    double precio;
    int cantidad;

    if (archivo.is_open()) {
        while (getline(archivo, linea)) {
            stringstream ss(linea);
            ss >> id >> nombre >> cantidad >> precio >> sucursal;
            Articulo articulo;
            articulo.nombre = nombre;
            articulo.precio = precio;
            if (sucursal == "Norte") {
                articulo.cantidad[0] += cantidad;
            } else if (sucursal == "Sur") {
                articulo.cantidad[1] += cantidad; 
            } else if (sucursal == "Este") {
                articulo.cantidad[2] += cantidad; 
            } else if (sucursal == "Centro") {
                articulo.cantidad[3] += cantidad; 
            }
            bool encontrado = false;
            for (auto& art : articulos) {
                if (art.nombre == articulo.nombre) {
                    encontrado = true;
                    break;
                }
            }
            if (!encontrado) {
                articulos.push_back(articulo);
            }
        }
        archivo.close();
    } else {
        cout << "No se pudo abrir el archivo de datos.\n";
    }
}
void calcularCantidadesTotales(const vector<Articulo>& articulos) {
    for (const auto& articulo : articulos) {
        int total = 0;
        for (int j = 0; j < 4; ++j) {
            total += articulo.cantidad[j];
        }
        cout << "Cantidad total de " << articulo.nombre << ": " << total << endl;
    }
}

void calcularCantidadSucursalSur(const vector<Articulo>& articulos) {
    int totalSur = 0;
    for (const auto& articulo : articulos) {
        totalSur += articulo.cantidad[1]; 
    }
    cout << "Cantidad total de articulos vendidos en la sucursal Sur: " << totalSur << endl;
}
void calcularCantidadTecladoSucursalNorte(const vector<Articulo>& articulos) {
    int cantidadTecladoNorte = 0;
    for (const auto& articulo : articulos) {
        if (articulo.nombre == "Teclado") {
            cantidadTecladoNorte = articulo.cantidad[0];
            break;
        }
    }
    cout << "Cantidad de teclados vendidos en la sucursal Norte: " << cantidadTecladoNorte << endl;
}
void calcularRecaudacionSucursal(const vector<Articulo>& articulos) {
    double recaudacion[4] = {0}; 
    for (const auto& articulo : articulos) {
        for (int j = 0; j < 4; ++j) {
            recaudacion[j] += articulo.precio * articulo.cantidad[j];
        }
    }
    cout << "Recaudacion total en cada sucursal:\n";
    const string sucursales[4] = {"Norte", "Sur", "Este", "Centro"};
    for (int i = 0; i < 4; ++i) {
        cout << sucursales[i] << ": " << recaudacion[i] << endl;
    }
}
double calcularRecaudacionTotal(const vector<Articulo>& articulos) {
    double recaudacionTotal = 0;

    for (const auto& articulo : articulos) {
        for (int j = 0; j < 4; ++j) {
            recaudacionTotal += articulo.precio * articulo.cantidad[j];
        }
    }
    return recaudacionTotal;
}
string sucursalMayorRecaudacion(const double recaudacion[4]) {
    double maxRecaudacion = recaudacion[0];
    int sucursalIndex = 0;
    for (int i = 1; i < 4; ++i) {
        if (recaudacion[i] > maxRecaudacion) {
            maxRecaudacion = recaudacion[i];
            sucursalIndex = i;
        }
    }
    const string sucursales[4] = {"Norte", "Sur", "Este", "Centro"};
    return sucursales[sucursalIndex];
}
void guardarResultadosEnArchivo(const vector<Articulo>& articulos, const double recaudacion[4], double recaudacionTotal) {
    ofstream archivo("consolidado.txt");
    for (const auto& articulo : articulos) {
        int total = 0;
        for (int j = 0; j < 4; ++j) {
            total += articulo.cantidad[j];
        }
        archivo << "Cantidad total de " << articulo.nombre << ": " << total << endl;
    }

    int totalSur = 0;
    for (const auto& articulo : articulos) {
        totalSur += articulo.cantidad[1]; 
    }
    archivo << "Cantidad total de articulos vendidos en la sucursal Sur: " << totalSur << endl;
    int cantidadTecladoNorte = 0;
    for (const auto& articulo : articulos) {
        if (articulo.nombre == "Teclado") {
            cantidadTecladoNorte = articulo.cantidad[0];
            break;
        }
    }
    archivo << "Cantidad de teclados vendidos en la sucursal Norte: " << cantidadTecladoNorte << endl;
    archivo << "Recaudación total en cada sucursal:\n";
    const string sucursales[4] = {"Norte", "Sur", "Este", "Centro"};
    for (int i = 0; i < 4; ++i) {
        archivo << sucursales[i] << ": " << recaudacion[i] << endl;
    }
    archivo << "Recaudación total de la empresa: " << recaudacionTotal << endl;
    string sucursalMax = sucursalMayorRecaudacion(recaudacion);
    archivo << "Sucursal de mayor recaudacion: " << sucursalMax << endl;
    archivo.close();
}

int main() {
    vector<Articulo> articulos;
    leerDatos(articulos);
    double recaudacion[4] = {0}; 
    for (const auto& articulo : articulos) {
        for (int i = 0; i < 4; ++i) {
            recaudacion[i] += articulo.precio * articulo.cantidad[i];
        }
    }
    double recaudacionTotal = calcularRecaudacionTotal(articulos);
    guardarResultadosEnArchivo(articulos, recaudacion, recaudacionTotal);
    cout << "Los resultados se han guardado en el archivo consolidado.txt\n";
    return 0;
}
