//poner dentro de la carpeta funciones cadena
#include <iostream>
#include <string.h>
using namespace std;

int comparaCadena(char cad1[], char cad2[]){
    return strcmp(cad1, cad2);
}

void copiaCadena(char cad1[],char cad2[]){
    strcpy(cad1, cad2);
}

void anadeCadena(char cad1[],char cad2[]){
    strcat(cad1, cad2);
}

bool alfabeticoNumerico(char cad1[]){
    bool alfaNumerico = true;
    for(int i = 0 ; i < strlen(cad1); i++){
        if(isalnum(cad1[i]) == false){
            alfaNumerico = false;
            break;
        }
    }
    return alfaNumerico;
}

bool alfabetico(char cad1[]){
    bool alfa = true;
    for(int i = 0 ; i < strlen(cad1) ; i++){
        /*if(isalpha(cad1[i]) == false){
            alfa = false;
            break;
        }*/
        if(isalpha(cad1[i]) == false && isblank(cad1[1]) == true){
            alfa = false;
            break;
        }
    }
    return alfa;
}

bool numerico(char cad1[]){
    bool numerico = true;
    for(int i = 0 ; i < strlen(cad1) ; i++){
        if(isdigit(cad1[i]) == false){
            numerico = false;
            break;
        }
    }
    return numerico;
}

bool esespacio(char cad1[]){
    bool espacio = true;
    for(int i = 0;i < strlen(cad1); i++){
        if(isspace(cad1[i]) == false){
            espacio = false;
            break;
        }
    }
    return espacio;
}

bool esmayuscula(char cad1[]){
    bool mayuscula = true;
    for(int i = 0 ; i < strlen(cad1); i++){
        if(islower(cad1[i]) == false){
            mayuscula = false;
            break;
        }
    }
    return mayuscula;
}

bool esminuscula(char cad1[]){
    bool minuscula = true;
    for(int i = 0 ; i < strlen(cad1); i++){
        if(isupper(cad1[i]) == false){
            minuscula = false;
            break;
        }
    }
    return minuscula;
}

void mayusculas(char cad1[]){
    for(int i = 0 ; i < strlen(cad1); i++){
        cad1[i] = toupper (cad1[i]);
    }
}

void minusculas(char cad1[]){
    for(int i = 0 ; i < strlen(cad1); i++){
        cad1[i] = tolower (cad1[i]);
    }
}

int main(){
    char cad1[50], cad2[50];
    int comparacion;
    cout << "Ingrese la primera cadena: "; 
    cin.getline(cad1, 50);
    cout << "Ingrese la segunda cadena: "; 
    cin.getline(cad2, 50);
    comparacion = comparaCadena(cad1, cad2);
    cout << "Comparacion: " << comparacion << endl;
    (comparacion == 0) ? cout << "Las cadenas son iguales": cout << "Las cadensa son diferentes";
    /*copiaCadena(cad1, cad2);
    cout << "\nCadena anadida: c1 = " << cad1;
    anadeCadena(cad1, cad2);
    cout << "\nCadena anadida: c1 = " << cad1;
    */
    (alfabeticoNumerico(cad1)) ? cout << "\nLa cadena " << cad1 << " es alfanumerica" : cout << "\nLa cadena no es alfanumerica";
    (alfabetico(cad1)) ? cout << "\nLa cadena " << cad1 << " es alfabetica" : cout << "\nLa cadena no es alfabetica";
    (numerico(cad1)) ? cout << "\nLa cadena " << cad1 << " es numerica" : cout << "\nLa cadena no es numerica";
    (esespacio(cad1)) ? cout << "\nLa cadena " << cad1 << " tiene espacio" : cout << "\nLa cadena no tiene espacio";
    (esmayuscula(cad1)) ? cout << "\nLa cadena " << cad1 << " es mayuscula" : cout << "\nLa cadena no es mayuscula";
    (esminuscula(cad1)) ? cout << "\nLa cadena " << cad1 << " es minuscula" : cout << "\nLa cadena no es minuscula";
    return 0;
}