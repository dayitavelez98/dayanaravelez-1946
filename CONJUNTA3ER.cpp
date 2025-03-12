#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include <string>
#include <algorithm>

struct Articulo {
    std::string producto;
    int cantidad;
    double precio;
    std::string sucursal;
};

void leerDatos(std::vector<Articulo>& articulos) {
    std::ifstream archivo("empresa.txt");
    std::string linea;

    if (archivo.is_open()) {
        std::getline(archivo, linea);

        while (std::getline(archivo, linea)) {
            Articulo articulo;
            std::istringstream ss(linea);
            std::string token;

            std::getline(ss, token, '\t');  
            std::getline(ss, articulo.producto, '\t');
            ss >> articulo.cantidad >> articulo.precio;
            std::getline(ss, token, '\t'); 
            std::getline(ss, articulo.sucursal, '\t');

            articulos.push_back(articulo);
        }
    }
}

void cantidadesTotales(const std::vector<Articulo>& articulos, std::vector<std::string>& productos, std::vector<int>& totales) {
    for (const auto& articulo : articulos) {
        auto it = std::find(productos.begin(), productos.end(), articulo.producto);
        if (it != productos.end()) {
            int index = std::distance(productos.begin(), it);
            totales[index] += articulo.cantidad;
        } else {
            productos.push_back(articulo.producto);
            totales.push_back(articulo.cantidad);
        }
    }
}

int cantidadSucursal(const std::vector<Articulo>& articulos, const std::string& sucursal) {
    int total = 0;
    for (const auto& articulo : articulos) {
        if (articulo.sucursal == sucursal) {
            total += articulo.cantidad;
        }
    }
    return total;
}

int cantidadArticuloSucursal(const std::vector<Articulo>& articulos, const std::string& producto, const std::string& sucursal) {
    int total = 0;
    for (const auto& articulo : articulos) {
        if (articulo.producto == producto && articulo.sucursal == sucursal) {
            total += articulo.cantidad;
        }
    }
    return total;
}

void recaudacionSucursal(const std::vector<Articulo>& articulos, std::vector<std::string>& sucursales, std::vector<double>& recaudaciones) {
    for (const auto& articulo : articulos) {
        auto it = std::find(sucursales.begin(), sucursales.end(), articulo.sucursal);
        if (it != sucursales.end()) {
            int index = std::distance(sucursales.begin(), it);
            recaudaciones[index] += articulo.cantidad * articulo.precio;
        } else {
            sucursales.push_back(articulo.sucursal);
            recaudaciones.push_back(articulo.cantidad * articulo.precio);
        }
    }
}

double recaudacionTotalEmpresa(const std::vector<double>& recaudaciones) {
    double total = 0.0;
    for (double recaudacion : recaudaciones) {
        total += recaudacion;
    }
    return total;
}

std::string mayorRecaudacion(const std::vector<std::string>& sucursales, const std::vector<double>& recaudaciones) {
    auto max_it = std::max_element(recaudaciones.begin(), recaudaciones.end());
    int index = std::distance(recaudaciones.begin(), max_it);
    return sucursales[index];
}

int main() {
    std::vector<Articulo> articulos;

    leerDatos(articulos);

    std::vector<std::string> productos;
    std::vector<int> totales;
    cantidadesTotales(articulos, productos, totales);

    int cantidadSur = cantidadSucursal(articulos, "Sur");

    int cantidadTecladoNorte = cantidadArticuloSucursal(articulos, "Teclado", "Norte");


    std::vector<std::string> sucursales;
    std::vector<double> recaudaciones;
    recaudacionSucursal(articulos, sucursales, recaudaciones);

   
    double recaudacionTotal = recaudacionTotalEmpresa(recaudaciones);


    std::string sucursalMayorRecaudacion = mayorRecaudacion(sucursales, recaudaciones);

    std::ofstream archivoSalida("consolidado.txt");

    if (archivoSalida.is_open()) {

        archivoSalida << "Cantidad total de cada artículo:\n";
        for (size_t i = 0; i < productos.size(); ++i) {
            archivoSalida << productos[i] << ": " << totales[i] << "\n";
        }

        archivoSalida << "\nCantidad de artículos en la sucursal Sur: " << cantidadSur << "\n";

        archivoSalida << "\nCantidad de Teclado en la sucursal Norte: " << cantidadTecladoNorte << "\n";

        archivoSalida << "\nRecaudación total por sucursal:\n";
        for (size_t i = 0; i < sucursales.size(); ++i) {
            archivoSalida << sucursales[i] << ": " << recaudaciones[i] << "\n";
        }

        archivoSalida << "\nRecaudación total de la empresa: " << recaudacionTotal << "\n";
        archivoSalida << "\nSucursal con mayor recaudación: " << sucursalMayorRecaudacion << "\n";
        archivoSalida.close();
        std::cout << "Los resultados han sido guardados en 'consolidado.txt'." << std::endl;
    } else {
        std::cout << "No se pudo abrir el archivo para escribir." << std::endl;
    }

    return 0;
}
