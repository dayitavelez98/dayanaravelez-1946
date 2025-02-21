#include <iostream>
using namespace std;
struct persona{
	string nombre;
    int edad;
	float estatura;
};
void ingresarRegistro (persona &per1){
        cout <<"Ingrese el nombre: ";
        getline(cin,per1.nombre);
        cout <<"Ingrese la edad: ";
        cin>>per1.edad;
        cout <<"Ingrese la estatura: ";
        cin >> per1.estatura;
        cin.ignore();
}
void mostrarRegistro(persona per1){
    cout<<"nombre: " << per1.nombre << endl;
    cout<<"edad: "<< per1.edad << endl;
    cout<<"altura: "<< per1.estatura << endl;
}
int main(){
    persona p1 = {"", 0, 0.0};
    ingresarRegistro(p1);
    mostrarRegistro(p1);
    return 0;
}