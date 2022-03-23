//Librerias
#include <iostream>
/** Ejercicio numero 24 Capitulo 1
 * Calcular e imprimir una tabla de dos columnas que muestre
 *en la primera los enteros del 1 al ny en la segunda n2
 * */


//@Author JuanAispuro
//@Date   22 Mar 2022

using namespace std;
 
int main() 
{      
   //variables
    int a = 1;
    int b;
    //Ciclo dowhile
    do
    {
      //Cuantos numeros se quiere ingresar.
      cout<<" Cuantos numeros quiere ingresar?: ";
      cin>>a;   
     } 
     while (a>=30);
     //Matrices
    float matriz[a];
    float matrizmulti[a];
    //Ciclo for para la matriz.
    for(int i = 0; i < a;i++)
    {      
      matriz[i]= i+1;
      matrizmulti[i]= matriz[i] * matriz[i];   
    }
    //Printeamos los valores.
    cout<< "Numeros enteros    Numeros elevados al cuadrado"<<endl;
    cout<< " ------------------------------------------------"<<endl;
    //for para imprimir los valores.
    for(int i = 0; i<a;i++)
    { 
        cout<< "           " <<matriz[i] << "---------------- "<< matrizmulti[i] << endl;

    }
    return 0;
}
