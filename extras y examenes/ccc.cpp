#include <iostream>
using namespace std;
main(){
int ser, num, contenedor;
double x= 0;
num = 2;
double den = 1;
contenedor = 1;
cout << "Ingrese el numero de terminos que desea: \n";
cin >> ser;
cout << "La serie es:\n ";
while (contenedor <= ser)
{
    if (contenedor > 1)
    {
        if (contenedor % 2 == 0)
        {
            cout<<"-";
        }
        else
        {
            cout<<"+";
        }
    }
    cout << num <<"/"<< den;
    if (contenedor % 2 == 0)
    {
        x -= (num/den);
    }
    else
    {
        x += (num/den);
    }
    num= num + den;
    den += 2;
    contenedor++;
}
cout<< endl;
cout << "El valor de la serie de x es:\n" << x <<endl;
}