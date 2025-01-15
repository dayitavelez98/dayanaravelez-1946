//ejemplo 2
#include <iostream>
using namespace std;
main(){
    int valor, promedio = 0, contador = 0;
    char op = 's';
    bool bandera = false;
    while (¡bandera){
        cout << "Deseas ingresar valores: SI-<<S>> NO-<<N>> ";
        op = getchar();
        if(op == 's' || op == 'S'){
            cout << "Ingrese un valor: ";
            cin >> valor;
            contador++;
            promedio = promedio + valor;
        }else{
            bandera = true;
        }
        cin.ignore(); 
        //limpiar el bafer.
        //bafer canal de memoria entre la entrada y mi programa, mezclar datos de distintos tipos.
        }
        cout << "El promedio de datos ingresados es: "<< ((float)promedio/contador) << endl;
}