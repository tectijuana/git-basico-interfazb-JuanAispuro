//Librerias
#include <iostream>
/** Ejercicio numero 25 Capitulo 1
Calcular e imprimir una tabla similiar que contenga las
potencias cuartas de los primeros cincuenta enteros.
 * */

//@Author JuanAispuro
//@Date   22 Mar 2022

using namespace std;
 
int main() 
{      
   //variables
    int a = 50;
    int b;
    //Matrices
    float matriz[a];
    float matrizmulti[a];
    //For para calcular  la cuarta.
    for(int i = 0; i < a;i++)
    {
       matriz[i]= i+1;
        matrizmulti[i]= matriz[i] * matriz[i]*matriz[i]*matriz[i];
    
    }

    cout<< "Numeros enteros    Numeros elevados a la cuarta Potencia"<<endl;
    cout<< " ------------------------------------------------"<<endl;
    //For para imprimir los valores.
    for(int i = 0; i<a;i++)
    { 
        cout<< "           " <<matriz[i] << "---------------- "<< matrizmulti[i] << endl;
    }
    return 0;
}
