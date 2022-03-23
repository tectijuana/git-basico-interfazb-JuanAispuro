//Librerias
#include <iostream>
#include <math.h>
/** Ejercicio numero 26 Capitulo 1
 * Imprimir una tabla de raices cuadradas de los numeros
 * 100 a 120.
 * */

//@Author JuanAispuro
//@Date   22 Mar 2022

using namespace std;
 
int main() 
{      
   //variables
    int a = 20;
    float matriz[a];
    float matrizmulti[a];
    //for para la raiz cuadrada
    for(int i = 99; i < 120 ;i++)
    {
      matriz[i]= i+1;
      matrizmulti[i]=sqrt(matriz[i]);
      
    }
    cout<< "Numeros enteros    Raiz Cuadrada"<<endl;
    cout<< " ------------------------------------------------"<<endl;
    //For para imprimir
    for(int i = 99; i<120;i++)
    { 
        cout<< "           " <<matriz[i] << "---------------- " << matrizmulti[i]<< endl;
    }
    return 0;
}