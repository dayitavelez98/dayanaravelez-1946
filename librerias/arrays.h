#include <stdlib.h>
#include <time.h>
#include <iostream>
using namespace std;
namespace vectorn{
void llenarVectorn(int v[], int n, int ri, int rs){
	int i;
	for(i = 0;i < n; i++){
		v[i] = rand() % (rs - ri + 1)+ri;
		//v[i] = ri + rand() % (rs + 1 - ri);
		//variable = limite inferior + rand() % (limite superior + 1 - limite inferior);
		}
	}
}
void generarNum(int numeros[], int cantidad, int min, int max) {
    for (int i = 0; i < cantidad; i++) {
        numeros[i] = min + rand() % (max - min + 1);
    }
}
void verVector(int v [], int n){
	for (int i = 0; i < n; i++){
        cout << v[i]<<" ";
    }    
}
void ordenarburbujav3(int v[], int n)
{	
    int aux, mejora = 1;
    bool cambio=true;
    for (int i = 0; i < n && cambio;i++)
	{
		cambio=false;
    	for (int j = 0; j < n-mejora; j++)
		{
        	if (v[j] > v[j+1])
			{
            	aux = v[j];
            	v[j]=v[j+1];
            	v[j+1] = aux;
            	cambio=true;
    		}	
    	}
    	mejora++;
	}	
}