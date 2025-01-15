#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;
main(){
    bool entrar = true;
    char limpiar;
    int op, CN, contador, NV, CV, suma;
    while (entrar == true){
        cout << "Menu de Opciones" << endl;
        cout << "1. Numeros Abundantes" << endl;
        cout << "2. Numeros Deficientes" << endl;
        cout << "3. Numeros Amigos" << endl;
        cout << "4. Salir" << endl;
        cout << "Ingrese una opcion: "<< endl;
        cin >> op;
        /*CN = (op > 0 && op < 4)?cin>>CN;0;*/
        if (op > 0 && op < 4){
            cout << "Ingrese la cantidad de numeros"<< endl;
            cin >> CN;
            contador = 0;
        }
        switch (op){
            case 1: 
                while (contador < CN){
                    NV = 2;
                    CV = 1;
                    while (CV < NV ){
                        if(NV % CV == 0){
                            suma = suma + CV;
                        }
                        CV++;
                    }
                    if(suma > NV){
                        cout << "Abundante " << NV << endl;
                        contador ++ ;
                    }
                }
                break;
            case 2: 
                cout << "Deficientes" << endl;
                break;
            case 3: 
                cout << "Amigos" << endl;
                break; 
            case 4: 
                entrar = false;
                break;
            default :
                cout << "Opcion no valida."<< endl;
                break;
        }
        system("pause");
        cout << "Presione una tecla para continuar" << endl;
        cin.ignore();
        getch();
        system("cls");
    }
}