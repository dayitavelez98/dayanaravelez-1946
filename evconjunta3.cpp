/*Construya un programa para resolver el  Juego de piedra, papel o tijera 
-Se jugara 5 rondas, usuario vs maquina.
-Tres niveles de dificultad: principiante, intermedio, avanzado.
-Principiante inician en igualdad de puntos 0 a 0
-Intermedio inician en igualdad de 1 punto de victoria a la maquina.
-Avanzado inician con 2 puntos de victoria a la maquina.
El programa deberá crear al menos las siguientes funciones:
-Función para obtener la elección del usuario
-Función para obtener la elección de la maquina
-Función para determinar el ganador de la ronda
-Función para determinar el ganador del juego*/
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
string EleccUsu() {
    string elecc;
    cout << "Elige piedra, papel o tijera: ";
    cin >> elecc;
    while (elecc != "piedra" && elecc != "papel" && elecc != "tijera") {
        cout << "Elección no valida. Intenta de nuevo (piedra, papel o tijera): ";
        cin >> elecc;
    }
    return elecc;
}
string EleccMa() {
    int aleatorio = rand() % 3; // 
    if (aleatorio == 0) return "piedra";
    if (aleatorio == 1) return "papel";
    if (aleatorio == 2) return "tijera";
    return "tijera";
}
string determinarGanador(string user, string server) {
    if (user == server) return "empate";
    if ((user == "piedra" && server == "tijera") || 
        (user == "papel" && server == "piedra") || 
        (user == "tijera" && server == "papel")) {
        return "usuario";
    } else {
        return "maquina";
    }
}
void jugarJuego(int dificultad) {
    int puntosUsuario = 0, puntosMaquina = dificultad;
    string eleccionUsuario, eleccionMaquina;
    string resultado;
    for (int ronda = 1; ronda <= 5; ronda++) {
        cout << "\nRonda " << ronda << endl;
        eleccionUsuario = EleccUsu();
        eleccionMaquina = EleccMa();
        cout << "Tu eleccion: " << eleccionUsuario << endl;
        cout << "Eleccion de la maquina: " << eleccionMaquina << endl;
        resultado = determinarGanador(eleccionUsuario, eleccionMaquina);
        if (resultado == "usuario") {
            puntosUsuario++;
            cout << "Ganaste la ronda" << endl;
        } else if (resultado == "maquina") {
            puntosMaquina++;
            cout << "La maquina gano la ronda." << endl;
        } else {
            cout << "Empate en la ronda" << endl;
        }
        cout << "Puntos - Tu: " << puntosUsuario << ", Maquina: " << puntosMaquina << endl;
    }
    cout << "\nResultado final:" << endl;
    if (puntosUsuario > puntosMaquina) {
        cout << "Felicidades. Ganaste el juego." << endl;
    } else if (puntosUsuario < puntosMaquina) {
        cout << "La maquina gano el juego." << endl;
    } else {
        cout << "El juego termino en empate." << endl;
    }
}

int main() {
    srand(time(0)); 
    int dificultad;
    cout << "Elige el nivel de dificultad (1 = principiante, 2 = intermedio, 3 = avanzado): ";
    cin >> dificultad;
    while (dificultad < 1 || dificultad > 3) {
        cout << "Dificultad no valida. Por favor, elige un nivel entre 1 y 3: ";
        cin >> dificultad;
        if (dificultad == 1) {
            dificultad = 0;
        } else if (dificultad == 2) {
            dificultad = 1;
        } else {
            dificultad = 2;
        }
    }
    jugarJuego(dificultad);
    return 0;
}
