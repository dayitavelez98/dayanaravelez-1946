#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int fila, columna;

void llenarDatos(int tabla [][50], int ne)
{
    srand(time (NULL));
    for(int i = 0;i < ne;i++)
    {
        for(int j = 0;j < ne;j++)
        {
            tabla[i][j] = rand()%11+10;
        }
    }
}

void MostrarTabla(int tabla[][50], int ne)
{
    for(int i = 0;i < ne;i++)
    {
        for(int j = 0;j < ne;j++)
        {
            cout << tabla [i][j] << "\t";
        }
        cout << endl;
    }
}

int diagonalPrincipal(int tabla[][50], int ne)
{
   int suma = 0;
    for (int i = 0; i < ne; i++) {
        suma += tabla[i][i];
    }
    return suma;
}

int diagonalSecundaria(int tabla[][50], int ne)
{
  int suma = 0;
    for (int i = 0; i < ne; i++) {
        suma += tabla[i][ne - 1 - i]; 
    }
    return suma;
}

void MostrarDiagonales(int tabla[][50], int ne)
{
    for(int i = 0;i < ne;i++)
    {
        for(int j = 0;j < ne;j++)
        {
            if (i == j || i + j == ne - 1)
            {
                cout << tabla [i][j] << "\t";
            }
            else
            {
                cout << "\t";
            }

        }
        cout << endl;
    }
} 

void DiagonalMayor(int a, int b)
{
    if(a > b)
        cout << "La diagonal mayor es la diagonal principal" << endl;
    else if (a < b)
        cout << "La diagonal mayor es la diagonal secundaria" << endl;
    else
        cout << "Las diagonales son iguales" << endl;
}
int main()
{
    int tm;
    int tabla[50][50];

    cout << "Inserte el tamano de la matriz (cuadrada): ";
    cin >> tm;
    cout << endl;
    llenarDatos(tabla, tm);
    MostrarTabla(tabla, tm);
    cout << endl;
    int Dprincipal = diagonalPrincipal(tabla, tm), Dsecundaria = diagonalSecundaria(tabla, tm);
    cout << "La suma de los elementos de la diagonal principal es: " << Dprincipal << endl;
    cout << "La suma de los elementos de la diagonal secundaria es: " << Dsecundaria << endl;
    DiagonalMayor(Dprincipal, Dsecundaria);
    cout << endl;
    MostrarDiagonales(tabla, tm);
    cout << endl;
}