#include <iostream> 
#include <conio.h>

using namespace std;
int sumar (int num1, int num2) ;
int main (){
    int v1, v2, total;
    cout << "Ingrese un numero: ";
    cin>>v1;
    cout << "Ingrese un numero: ";
    cin>>v2;
    total = sumar (v1,v2);
    getch();
    return 0;
}

int sumar (int num1, int num2);
return num1*num2;