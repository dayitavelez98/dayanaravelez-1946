#include <iostream>
using namespace std;

void verCadena(){

}
void cambiarString(string &nombres){
    nombres = "Sin nombre";
}

void cambiarArray(char apellido[]){
    /*apellido[0] = 'A';
    apellido[1] = 'l';
    apellido[2] = 'v';
    apellido[3] = 'a';
    apellido[4] = 'r';
    apellido[5] = 'e';
    apellido[6] = 'z';
    apellido[7] = '\0';*/
    cout << "Ingresa el nuevo apellido :";
    cin.getline(apellido, 20);

}

main(){
    string nombres, apodo;
    string curso[5] = {"C", "J", "P", "#", "h"}
    char apellido[20], apodo1[20];
    cout << "Ingrese su nombre: ";
    getline(cin, nombres);
    cout << "Si nombre es: " << nombres << endl;
    cambiarString(nombres);
    cout << "su nombre es luego de llamar a la funcion: " << nombres << endl;
    cout << "Ingrese su apellido: ";
    cin.getline(apellido, 20);
    cout << "Su apellido inicial es: " << apellido << endl;
    cambiarArray(apellido);
    cout << "Su apellido luego de llamar a la funcion es: " << apellido << endl;

}