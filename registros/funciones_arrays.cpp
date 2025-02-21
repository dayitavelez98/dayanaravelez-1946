#include <iostream>
using namespace std;

struct persona{
	string nombre;
	int edad;
	bool casado = false;
};
void ingresarDatosRegistro(persona per[], int n){
	int i; char resp;
	for(i = 0;i < n;i++){
		per[i].id = i + 1;
		cout << "Ingrese el nombre de la persona: "; 
        cin >> per[i].nombre;
		cout << "Ingrese la edad de la persona: "; 
        cin >> per[i].edad;
		cout << "Es casado? <<S/N: "; 
        m.-cin.get(resp);
		cin.ignore(); 
		if(resp == 's' || resp == 'S')
			per[i].casado = true;
	}
}
void mostrarDatosRegistro(persona per[], int n){
	int i;
	cout << "ID\tNOMBRE\tEDAD\tCASADO" << endl;
	for(i = 0;i < n;i++){
		cout << per[i].id << "\t";
		cout << per[i].nombre << "\t";
		cout << per[i].edad << "\t";
		cout << per[i].casado << endl;
	}
}
int main(){
	int np;
	cout << "Ingrese la cantidad de personas: "; cin >> np;
	persona personas[np];
	ingresarDatosRegistro(personas, np);
	mostrarDatosRegistro(personas, np);
}