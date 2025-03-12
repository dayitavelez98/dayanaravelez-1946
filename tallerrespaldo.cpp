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
int idCounter = 1, totalEstudiantes = 0;

double calcularPromedioGeneral() {
    double suma = 0;
    for (int i = 0; i < totalEstudiantes; i++) {
        suma += estudiantes[i].promedio;
    }
    return totalEstudiantes > 0 ? suma / totalEstudiantes : 0.0;
}

double calcularDesviacionEstandar(double media) {
    double sumaVarianza = 0;
    for (int i = 0; i < totalEstudiantes; i++) {
        sumaVarianza += pow(estudiantes[i].promedio - media, 2);
    }
    return totalEstudiantes > 0 ? sqrt(sumaVarianza / totalEstudiantes) : 0.0;
}

void calcularVariableEstandarizada(double media, double desviacion) {
    cout << "\nVariable Estandarizada de cada nota:\n";
    for (int i = 0; i < totalEstudiantes; i++) {
        cout << "Estudiante " << estudiantes[i].nombre << " (ID: " << estudiantes[i].id << ")\n";
        for (int j = 0; j < 3; j++) {
            double z = (desviacion == 0) ? 0 : (estudiantes[i].notas[j] - media) / desviacion;
            char categoria;
            if (z > 1) categoria = 'A';
            else if (z >= 0) categoria = 'B';
            else if (z >= -1) categoria = 'C';
            else categoria = 'D';
            
            cout << "Nota " << (j + 1) << ": Z = " << fixed << setprecision(2) << z << " (" << categoria << ")\n";
        }
    }
}

void insertarResultados() {
    if (totalEstudiantes >= 5) {
        cout << "No se pueden agregar mas estudiantes.\n";
        return;
    }
    estudiantes[totalEstudiantes].id = idCounter++;
    cout << "Ingrese nombre del estudiante: ";
    cin.ignore();
    getline(cin, estudiantes[totalEstudiantes].nombre);
    double suma = 0;
    for (int i = 0; i < 3; i++) {
        cout << "Ingrese nota " << (i + 1) << ": ";
        cin >> estudiantes[totalEstudiantes].notas[i];
        suma += estudiantes[totalEstudiantes].notas[i];
    }
    estudiantes[totalEstudiantes].promedio = suma / 3.0;
    totalEstudiantes++;
}

void modificarNotas() {
    int id;
    cout << "Ingrese ID del estudiante a modificar: ";
    cin >> id;
    for (int i = 0; i < totalEstudiantes; i++) {
        if (estudiantes[i].id == id) {
            double suma = 0;
            for (int j = 0; j < 3; j++) {
                cout << "Ingrese nueva nota " << (j + 1) << ": ";
                cin >> estudiantes[i].notas[j];
                suma += estudiantes[i].notas[j];
            }
            estudiantes[i].promedio = suma / 3.0;
            return;
        }
    }
    cout << "Estudiante no encontrado.\n";
}

void eliminarEstudiante() {
    int id;
    cout << "Ingrese ID del estudiante a eliminar: ";
    cin >> id;
    for (int i = 0; i < totalEstudiantes; i++) {
        if (estudiantes[i].id == id) {
            for (int j = i; j < totalEstudiantes - 1; j++) {
                estudiantes[j] = estudiantes[j + 1];
            }
            totalEstudiantes--;
            cout << "Estudiante eliminado.\n";
            return;
        }
    }
    cout << "Estudiante no encontrado.\n";
}

void mostrarResultados() {
    cout << "ID\tNombre\tNota1\tNota2\tNota3\tPromedio\n";
    for (int i = 0; i < totalEstudiantes; i++) {
        cout << estudiantes[i].id << "\t" << estudiantes[i].nombre << "\t";
        for (int j = 0; j < 3; j++) {
            cout << estudiantes[i].notas[j] << "\t";
        }
        cout << fixed << setprecision(2) << estudiantes[i].promedio << "\n";
    }
}

int main() {
    int opcion;
    do {
        cout << "\nMENU:\n";
        cout << "1. Agregar estudiante\n";
        cout << "2. Modificar notas de un estudiante\n";
        cout << "3. Eliminar estudiante\n";
        cout << "4. Mostrar resultados\n";
        cout << "5. Salir\n";
        cout << "Seleccione una opcion: ";
        cin >> opcion;
        switch (opcion) {
            case 1:
                insertarResultados();
                break;
            case 2:
                modificarNotas();
                break;
            case 3:
                eliminarEstudiante();
                break;
            case 4:{
                mostrarResultados();
                double media = calcularPromedioGeneral();
                cout << "\nPromedio general del curso: " << fixed << setprecision(2) << media << "\n";
                double desviacion = calcularDesviacionEstandar(media);
                cout << "Desviacion estandar del curso: " << fixed << setprecision(2) << desviacion << "\n";
                calcularVariableEstandarizada(media, desviacion);
                break;
            }
            case 5:
                cout << "Saliendo del programa...\n";
                break;
            default:
                cout << "Opción no valida. Intente nuevamente.\n";
        }
    } while (opcion != 5);

    return 0;
}
