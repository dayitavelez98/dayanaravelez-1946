#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <ctime>
#include <stdlib.h>
using namespace std;

class Cuenta {
public:
int numeroCuenta;
string tipoCuenta;
bool activa;
    Cuenta(int numeroCuenta, string tipoCuenta) {
        this->numeroCuenta = numeroCuenta;
        this->tipoCuenta = tipoCuenta;
        this->activa = true;
    }
}

class Cliente {
public:
int codigo;
string nombre;
string email;
vector cuentas;

    Cliente(int codigo, string nombre, string email) {
    this->codigo = codigo;
    this->nombre = nombre;
    this->email = email;
    }
}

int generarNumeroCuenta() {
    return rand() % 9000000 + 1000000;
}

void crearCuenta(vector& clientes, int codigoCliente, string tipoCuenta) {
    for (auto& cliente : clientes) {
        if (cliente.codigo == codigoCliente) {
            for (auto& cuenta : cliente.cuentas) {
                if (cuenta.tipoCuenta == tipoCuenta) {
                    cout << "Ya tienes una cuenta de tipo " << tipoCuenta << ". Ingresando a tu cuenta..." << endl;
                return;
                }
            }
int numeroCuenta = generarNumeroCuenta();
Cuenta nuevaCuenta(numeroCuenta, tipoCuenta);
cliente.cuentas.push_back(nuevaCuenta);
    cout << "Cuenta de tipo " << tipoCuenta << " creada con éxito. Número de cuenta: " << numeroCuenta << endl;
    return;
        }
    }
    cout << "Cliente no encontrado." << endl;
}

void crearCliente(vector& clientes, int codigo, string nombre, string email) {
Cliente nuevoCliente(codigo, nombre, email);
clientes.push_back(nuevoCliente);
cout << "Cliente creado con éxito." << endl;
}

int main() {
    srand(time(0)); 
    vector clientes;
    int opcion, codigoCliente, numeroCuenta;
    string nombre, email, tipoCuenta;

        while (true) {
            cout << "\n--- Menú ---" << endl;
            cout << "1. Crear cliente" << endl;
            cout << "2. Crear cuenta" << endl;
            cout << "3. Salir" << endl;
            cout << "Elige una opción: ";
            cin >> opcion;

            if (opcion == 1) {
                cout << "\nIngrese el código del cliente: ";
                cin >> codigoCliente;
                cin.ignore(); 
                cout << "Ingrese el nombre del cliente: ";
                getline(cin, nombre);
                cout << "Ingrese el email del cliente: ";
                getline(cin, email);
                crearCliente(clientes, codigoCliente, nombre, email);
            }
            else if (opcion == 2) {
                cout << "\nIngrese el código del cliente para abrir la cuenta: ";
                cin >> codigoCliente;
                cin.ignore();
                cout << "Ingrese el tipo de cuenta (Ahorros/Corriente): ";
                getline(cin, tipoCuenta);
                crearCuenta(clientes, codigoCliente, tipoCuenta);
            }
            else if (opcion == 3) {
                cout << "¡Hasta luego!" << endl;
                break;
            } else {
                cout << "Opción inválida. Intente de nuevo." << endl;
            }
        }
    return 0;
}