#include <iostream>
#include <fstream>
using namespace std;
int main(){
    ofstream archivoSalido;
    archivoSalido.open("ejemplo.txt");
    if(archivoSalido.is_open()){
        archivoSalido << "¡Hola Mundo!" << endl;
        archivoSalido << "Esto es una prueba." << endl;
        archivoSalido << "Linea 3." << endl;

        archivoSalido.close();
        cout << "Texto escrito en el archivo con exito." << endl;
    }
    else{
        cout << "No se pudo abrir el archivo." << endl;
    }
    return 0;
}