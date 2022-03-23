//Librerias
#include <iostream>
/** Ejercicio numero 27 Capitulo 1
Encontrar la suma de los cuadrados de los enteros del 1 al
N, de forma que sea 1^2 + 2^2 + 3^2 hasta N^2.
 * */

//@Author JuanAispuro
//@Date   22 Mar 2022

using namespace std;
 
int main() 
{      
   //Variables
    int a = 0;
    int b,c,d;
    //Pedimos numeros
     cout<<" Cuantos numeros quiere ingresar?: ";
     cin >> a;    
     //Matrices
     float matriz[a];
     float matrizmulti[a];
     float matrizfinal[a];
     //for para multiplicar y para sumar.
    for(int i = 0; i < a ; i++)
    {  
        matriz[i]= i + 1;

        matrizmulti[i]= matriz[i] * matriz[i];
        b += matrizmulti[i];
    }

    cout<< "Numeros enteros    Numeros elevados al cuadrado"<<endl;
    cout<< " ------------------------------------------------"<<endl;
    //For para imprimir.
    for(int i = 0; i < a; i++)
    { 
        cout<< "           " << matriz[i] << "---------------- "<< matrizmulti[i] << endl;
    }
    //Imprimimos la suma de los cuadrados.
    cout <<"La suma de los cuadrados son: " << b;
    return 0;
}
