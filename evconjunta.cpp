/*Para resolver la categoría a la que pertenece un valor numérico comprendido entre 1 y 20, se pide al programador crear una instrucción que resuelva lo solicitado, 
el lenguaje de programación donde se desea implementar no dispone de la estructura selectiva; las categorías son las siguientes:
1 -5 deficiente
6- 10 regular
11-15 bueno
16-18 Muy bueno
> 18 Excelente.*/
#include <iostream>
using namespace std;
main(){
int num;
    cout << "Ingrese el valor: ";
    cin >> num;
    if (num > 0 && num < 6){
        cout << "Su rango es deficiente";
    }else if (num > 5 && num < 11){
        cout << "Su rango es Regular";
    }else if (num > 10 && num < 16){
        cout << "Su rango es Bueno";
    }else if (num > 15 && num < 19){
        cout << "Su rango es Muy bueno";
    }
    else if (num > 17 && num < 21){
        cout << "Su rango es Excelente";
    }
    else{
        cout << "El valor ingresado no corresponde al rango.";
    }
}