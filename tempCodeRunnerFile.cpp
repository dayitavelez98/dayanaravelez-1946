void dibujarAhorcado(int intentos) {
    switch (intentos) {
        case 6:
            cout << "   _____  " << endl;
            cout << "  |     | " << endl;
            cout << "  |       " << endl;
            cout << "  |       " << endl;
            cout << "  |       " << endl;
            cout << "  |       " << endl;
            cout << " _|___    " << endl;
            break;
        case 5:
            cout << "   _____  " << endl;
            cout << "  |     | " << endl;
            cout << "  |     O " << endl;
            cout << "  |       " << endl;
            cout << "  |       " << endl;
            cout << "  |       " << endl;
            cout << " _|___    " << endl;
            break;
        case 4:
            cout << "   _____  " << endl;
            cout << "  |     | " << endl;
            cout << "  |     O " << endl;
            cout << "  |     | " << endl;
            cout << "  |       " << endl;
            cout << "  |       " << endl;
            cout << " _|___    " << endl;
            break;
        case 3:
            cout << "   _____  " << endl;
            cout << "  |     | " << endl;
            cout << "  |     O " << endl;
            cout << "  |    /| " << endl;
            cout << "  |       " << endl;
            cout << "  |       " << endl;
            cout << " _|___    " << endl;
            break;
        case 2:
            cout << "   _____  " << endl;
            cout << "  |     | " << endl;
            cout << "  |     O " << endl;
            cout << "  |    /|\\ " << endl;
            cout << "  |       " << endl;
            cout << "  |       " << endl;
            cout << " _|___    " << endl;
            break;
        case 1:
            cout << "   _____  " << endl;
            cout << "  |     | " << endl;
            cout << "  |     O " << endl;
            cout << "  |    /|\\ " << endl;
            cout << "  |    /  " << endl;
            cout << "  |       " << endl;
            cout << " _|___    " << endl;
            break;
        case 0:
            cout << "   _____  " << endl;
            cout << "  |     | " << endl;
            cout << "  |     O " << endl;
            cout << "  |    /|\\ " << endl;
            cout << "  |    / \\ " << endl;
            cout << "  |       " << endl;
            cout << " _|___    " << endl;
            break;
    }
}

bool jugarAhorcado(const string &palabra) {
    int intentos = 7;
    bool letrasAdivinadas[palabra.length()] = {false};
    string letrasUsadas = "";
    bool juegoTerminado = false;

    while (intentos > 0 && !juegoTerminado) {
        cout << "Intentos restantes: " << intentos << endl;
        cout << "Letras usadas: " << letrasUsadas << endl;
        mostrarPalabra(palabra, letrasAdivinadas);

        char letra;
        cout << "Adivina una letra: ";
        cin >> letra;

        if (letrasUsadas.find(letra) != string::npos) {
            cout << "Ya has usado esta letra. Intenta otra." << endl;
            continue;
        }

        letrasUsadas += letra;
        bool letraCorrecta = false;
        
        for (int i = 0; i < palabra.length(); i++) {
            if (palabra[i] == letra && !letrasAdivinadas[i]) {
                letrasAdivinadas[i] = true;
                letraCorrecta = true;
            }
        }

        if (!letraCorrecta) {
            intentos--;
            cout << "Letra incorrecta." << endl;
            dibujarAhorcado(intentos);  // Muestra el muñeco según los intentos restantes
        }

        juegoTerminado = true;
        for (int i = 0; i < palabra.length(); i++) {
            if (!letrasAdivinadas[i]) {
                juegoTerminado = false;
                break;
            }
        }
    }

    if (juegoTerminado) {
        cout << "¡Felicidades! Has adivinado la palabra: " << palabra << endl;
    } else {
        cout << "¡Has perdido! La palabra era: " << palabra << endl;
    }

    return juegoTerminado;
}