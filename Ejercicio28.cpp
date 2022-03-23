//Librerias
#include <iostream>
#include <math.h>
/** Ejercicio numero 28 Capitulo 1
 * Calcular la suma de las raices cuadradas de los 
 * numeros impares que hay entre 1 y 1000
 * */

//@Author JuanAispuro
//@Date   22 Mar 2022

using namespace std;
 
int main() 
{      
   //Variables
    int a = 1000;
    int suma;
    //for para calcular la suma de los impares.
    for(int i = 0; i <= a ; i++)
    {  
        if( i % 2 != 0)
        {
            suma=suma + sqrt(i);
        }
    }
    //Imprimimos la suma de los impares.
    cout<< " De los numeros entre 1 al 1000 ";
    cout << "Estos son los impares: " << suma;

    return 0;
}