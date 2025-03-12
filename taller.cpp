#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
struct Estudiante {
    int id;
    string nombre;
    double notas[3], promedio;
};
Estudiante estudiantes[5];
int idCounter = 1;

double calcularPromedioGeneral() {
    double suma = 0;
    for (int i = 0; i < 5; i++) {
        suma += estudiantes[i].promedio;
    }
    return suma / 5.0;
}
double calcularDesviacionEstandar(double media) {
    double sumaVarianza = 0;
    for (int i = 0; i < 5; i++) {
        sumaVarianza += pow(estudiantes[i].promedio - media, 2);
    }
    return sqrt(sumaVarianza / 5.0);
}
void calcularVariableEstandarizada(double media, double desviacion) {
    cout << "\nVariable Estandarizada de cada nota:\n";
    for (int i = 0; i < 5; i++) {
        cout << "Estudiante " << estudiantes[i].nombre << " (ID: " << estudiantes[i].id << ")\n";
        for (int j = 0; j < 3; j++) {
            double z = (estudiantes[i].notas[j] - media) / desviacion;
            char categoria;
            if (z > 1) categoria = 'A';
            else if (z >= 0) categoria = 'B';
            else if (z >= -1) categoria = 'C';
            else categoria = 'D';
            
            cout << "Nota " << (j + 1) << ": Z = " << fixed << setprecision(2) << z << " (" << categoria << ")\n";
        }
    }
}
void insertarResultados(int index) {
    estudiantes[index].id = idCounter++;
    cout << "Ingrese nombre del estudiante: ";
    cin.ignore(); 
    getline(cin, estudiantes[index].nombre); 
    double suma = 0;
    for (int i = 0; i < 3; i++) {
        cout << "Ingrese nota " << (i + 1) << ": ";
        cin >> estudiantes[index].notas[i];
        suma += estudiantes[index].notas[i];
    }
    estudiantes[index].promedio = suma / 3.0;
}
void mostrarResultados() {
    cout << "ID\tNombre\tNota1\tNota2\tNota3\tPromedio\n";
    for (int i = 0; i < 5; i++) {
        cout << estudiantes[i].id << "\t" << estudiantes[i].nombre << "\t";
        for (int j = 0; j < 3; j++) {
            cout << estudiantes[i].notas[j] << "\t";
        }
        cout << fixed << setprecision(2) << estudiantes[i].promedio << "\n";
    }
}
int main() {
    for (int i = 0; i < 5; i++) {
        insertarResultados(i);
    }
    mostrarResultados();
    double media = calcularPromedioGeneral();
    cout << "\nPromedio general del curso: " << fixed << setprecision(2) << media << "\n";
    double desviacion = calcularDesviacionEstandar(media);
    cout << "Desviacion estandar del curso: " << fixed << setprecision(2) << desviacion << "\n";
    calcularVariableEstandarizada(media, desviacion);
    return 0;
}