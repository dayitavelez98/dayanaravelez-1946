#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;
struct Articulo {
    string nombre;
    double precio;
    int cantidad[3]; 
};

void leerDatos(vector<Articulo>& articulos) {
    ifstream archivo("ejercicios.txt"); 
    string linea;
    string id, nombre, sucursal;
    double precio;
    int cant;
}
 void cantArticulos(int ID, int cant){

 }

 void cantArtSur(int ID, int cant, int sucursal){

 }
void canTecladoNor(int ID, int cant, int sucursal){
    if (sucursal)
}
