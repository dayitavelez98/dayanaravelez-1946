#include <iostream>
using namespace std;
int main(){
    string cadena1 = {"\ninformatica"};
    string cadena4;
    const char *aux;
    string cadena2(cadena1); // cadena2 = cadena1
    string cadena3(10, '*');
    cout << cadena3 << endl;
    cadena1.push_back('z');//Permite añadir un caracter
    cout << cadena1 << endl;
    cadena1.at(0) = 'I';
    cout << cadena1 << endl;
    cadena1.front() = 'i';
    cadena1.back() = 'A';
    cout << cadena1 << endl;
    aux = cadena1.c_str();
    cout << "aux array char " << aux <<endl;
    (cadena4.empty()) ? cout << "Cadena vacia\n" : cout << "Cadena no vacia\n";
    cout << "Tamano maximo: " << cadena1.max_size();
    cout << "Capacidad: " << cadena1.capacity()<< endl;
    cout << "Cadena 1: \n" <<cadena1<< endl << "Cadena 2: \n" << cadena2 <<endl;
    //(cadena1.compare(cadena2)==0)?cout << "Las cadenas son iguales" : cout << "Las cadenas son diferentes";
    cadena1 = "Mola";
    cadena2 = "aaa";
    int comparacion = cadena1.compare(cadena2);
    cout << "Comparacion: "<<comparacion<< endl;
    int encontrado = cadena1.find("sol");
    cout << "Encontrado: " << encontrado << endl;
    (cadena1.find("cos")== string::npos) ? cout << "No encontrado" : cout <<"encontrado ";
    string numerostr = "123";
    int numero = stoi(numerostr);
    cout << endl;
    cout << numero << endl;
    cin >> numero;
    return 0;
}